#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FPDef {} {
    global fp
    global ifp
    global pfp

    set fp(id) 0

    set ifp(fps) {}
    set ifp(rformat) arcmin
    set ifp(radius) 15
    set ifp(show) 1
    set ifp(panto) 1
    set ifp(minrows) 20
    set ifp(mincols) 10

    set ifp(def) { \
		       {{Chandra (NASA/CXC)} \
			    fpcxc \
			    {https://cxcfps.cfa.harvard.edu/cgi-bin/cda/footprint/get_vo_table.pl} \
			    {inst=ACIS-S,ACIS-I,HRC-S,HRC-I} \
			    get \
			} \
		       {{Hubble Legacy Archive (STSCI)} \
			    fphla \
			    {http://hla.stsci.edu/cgi-bin/hlaSIAP.cgi} \
			    {} \
			    get \
			} \
		   }
}

proc FPAnalysisMenu {mb} {
    global ifp
    global ds9

    foreach ff $ifp(def) {
	set title [lindex $ff 0]
	set vars [lindex $ff 1]
	set url [lindex $ff 2]
	set opts [lindex $ff 3]
	set method [lindex $ff 4]

	$mb add command -label $title \
	    -command [list FPDialog $vars $title $url $opts $method apply]
    }
}

proc FPGetURL {varname url query} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPGetURL $varname $url?$query"
    }

    # save just in case of redirection
    set var(qq) $query
    
    ARStatus $varname [msgcat::mc {Loading}]

    global ihttp
    if {$var(sync)} {
	if {![catch {set var(token) [http::geturl $url \
					 -query $query \
					 -timeout $ihttp(timeout) \
					 -headers "[ProxyHTTP]"]


	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    FPGetURLFinish $varname $var(token)
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $url"
	}
    } else {
	if {![catch {set var(token) [http::geturl $url \
					 -query $query \
					 -timeout $ihttp(timeout) \
					 -command \
					 [list FPGetURLFinish $varname] \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $url"
	}
    }
}

proc FPGetURLFinish {varname token} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPGetURLFinish $varname"
    }

    if {!($var(active))} {
	FPCancelled $varname
	return
    }

    upvar #0 $token t

    # Code
    set code [http::ncode $token]

    # Meta
    set meta $t(meta)

    # Log it
    HTTPLog $token

    # Result?
    switch -- $code {
	{} -
	200 -
	203 -
	404 -
	503 {
	    VOTParse $var(tbldb) $token
	    ARDone $varname
 	    FPLoadDone $varname
	}

	201 -
	300 -
	301 -
	302 -
	303 -
	305 -
	307 {
	    foreach {name value} $meta {
		if {[regexp -nocase ^location$ $name]} {
		    global debug
		    if {$debug(tcl,fp)} {
			puts stderr "FPGetURLFinish redirect $code to $value"
		    }
		    # clean up and resubmit
		    http::cleanup $token
		    unset var(token)

		    FPGetURL $varname $value $var(qq)
		}
	    }
	}

	default {
	    ARError $varname "[msgcat::mc {Error code was returned}] $code"
	}
    }
}

proc FPLoad {varname url query} {
    upvar #0 $varname var
    global $varname

    # clear previous db
    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPLoad $varname $url?$query"
    }

    FPGetURL $varname $url $query
}

proc FPLoadDone {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPLoadDone $varname"
    }

    FPConfigCols $varname
    FPTable $varname

    FPDialogUpdate $varname
}

proc FPOff {varname} {
    upvar #0 $varname var
    global $varname

    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    set db $var(tbldb)
    set ${db}(Nrows) {}

    $var(tbl) selection clear all

    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker catalog $varname delete
	}
    }

    set var(blink) 0

    FPDialogUpdate $varname
}

proc FPTable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global ifp

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPTable $varname"
    }

    if {![CATValidDB $var(tbldb)]} {
	return
    }

    # clear the selection
    $var(tbl) selection clear all

    # clear regions
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker catalog $varname delete
	}
    }

    global $var(tbldb)
    $var(found) configure -textvariable ${var(tbldb)}(Nrows)

#    starbase_writefp $var(tbldb) stdout

    if {[starbase_nrows $var(tbldb)] == 0} {
	ARStatus $varname [msgcat::mc {No Items Found}]
	return
    }

    set nc [starbase_ncols $var(tbldb)]
    if { $nc > $ifp(mincols)} {
	$var(tbl) configure -cols $nc
    } else {
	$var(tbl) configure -cols $ifp(mincols)
    }

    # add header
    set nr [expr [starbase_nrows $var(tbldb)]+1]
    if {$nr > $ifp(minrows)} {
	$var(tbl) configure -rows $nr
    } else {
	$var(tbl) configure -rows $ifp(minrows)
    }

    FPGenerate $varname
}

proc FPGenerate {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPGenerate $varname"
    }

    # do we have a db?
    if {![CATValidDB $var(tbldb)]} {
	return
    }

    ARStatus $varname [msgcat::mc {Plotting Regions}]

    # delete any previous 
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker catalog $varname delete
	}
    }

    if {$var(show)} {
	global reg
	set reg {}
	FPReg $varname {} 1 reg
	if {[info commands $var(frame)] != {}} {
	    if {[$var(frame) has fits]} {
		if {[catch {$var(frame) marker catalog command ds9 var reg}]} {
		    ARError $varname "[msgcat::mc {Internal Parse Error}]"
		    return
		}
	    }
	}
    }

    ARStatus $varname [msgcat::mc Done]
}

proc FPGenerateRegions {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPGenerateRegions $varname"
    }

    # do we have a db?
    if {![CATValidDB $var(tbldb)]} {
	return
    }

    ARStatus $varname [msgcat::mc {Generating Regions}]

    global reg
    set reg {}
    FPReg $varname {} 0 reg
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    if {[catch {$var(frame) marker command ds9 var reg}]} {
		ARError $varname "[msgcat::mc {Internal Parse Error}]"
		return
	    }
	}
    }

    ARStatus $varname [msgcat::mc Done]
}

proc FPGenerateUpdate {varname row} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPGenerateUpdate $varname $row"
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }
    
    set id [$var(frame) get marker catalog "\{${varname}.${row}\}" id]
    set sel [$var(frame) get marker catalog $id select]
    set hh [$var(frame) get marker catalog $id highlite]

    $var(frame) marker catalog "\{${varname}.${row}\}" delete
    global reg
    set reg {}
    FPReg $varname $row 1 reg
    if {$reg != {}} {
	$var(frame) marker catalog command ds9 var reg

	set id [$var(frame) get marker catalog "\{${varname}.${row}\}" id]
	if {$sel} {
	    $var(frame) marker catalog "\{${varname}.${row}\}" select
	}
	if {$hh} {
	    $var(frame) marker catalog "\{${varname}.${row}\}" highlite
	}
    }
    unset reg
}

proc FPConfigCols {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    set var(colx) {}
    set var(coly) {}

    if {![CATValidDB $var(tbldb)]} {
	return
    }

    if {[starbase_ncols $var(tbldb)] < 2} {
	return
    }

    # determine psystem/psky if present in header
    # psystem has already been adjusted based on loaded fits at menu creation
    switch -- $var(psystem) {
	image -
	physical -
	amplifier -
	detector {
	    set cols {
		"X" "Y"
	    }
	    foreach {colx coly} $cols {
		if {!([lsearch [starbase_columns $var(tbldb)] $colx] == -1) &&
		    !([lsearch [starbase_columns $var(tbldb)] $coly] == -1)} {
		    set var(colx) $colx
		    set var(coly) $coly
		    return
		}

		# try lower case
		set colx [string tolower $colx]
		set coly [string tolower $coly]
		if {!([lsearch [starbase_columns $var(tbldb)] $colx] == -1) &&
		    !([lsearch [starbase_columns $var(tbldb)] $coly] == -1)} {
		    set var(colx) $colx
		    set var(coly) $coly
		    return
		}
	    }

	    # default
	    set var(colx) [starbase_colname $var(tbldb) 1]
	    set var(coly) [starbase_colname $var(tbldb) 2]
	    
	    return
	}
	default {
	    if {[info commands $var(frame)] == {}} {
		# linear
		set var(colx) [starbase_colname $var(tbldb) 1]
		set var(coly) [starbase_colname $var(tbldb) 2]

		return
	    } elseif {![$var(frame) has wcs celestial $var(psystem)]} {
		# linear
		set var(colx) [starbase_colname $var(tbldb) 1]
		set var(coly) [starbase_colname $var(tbldb) 2]

		return
	    } else {
		if {![catch {starbase_hdrget $var(tbldb) equinox} sys]} {
		    switch -- $sys {
			1950.0 -
			B1950 {
			    set var(psystem) wcs
			    set var(psky) fk4
			}
			2000.0 -
			J2000 {
			    set var(psystem) wcs
			    set var(psky) fk5
			}
		    }
		}

		switch -- $var(psky) {
		    fk5 -
		    icrs {
			set cols {
			    "_RAJ2000" "_DEJ2000"
			    "_RAJ2000" "_DECJ2000"
			    "RAJ2000" "DEJ2000"
			    "RAJ2000" "DECJ2000"
			    "RA_J2000" "DE_J2000"
			    "RA_J2000" "DEC_J2000"
			    "RA (J2000)" "Dec (J2000)"
			    "RA" "DEC"
			    "RA" "DECL"
			    "RA" "Dec"
			    "RA(deg)" "DEC(deg)"
			}
			if {[FPConfigColsSearch $varname $cols]} {
			    return
			}

			# next, look for an UCD (via VOTABLE)
			set db $var(tbldb)
			upvar #0 $db T
			for {set cc 0} {$cc < $T(Ncols)} {incr cc} {
			    if {[info exists ${db}(Ucd)]} {
				switch -- [string tolower [string range [lindex $T(Ucd) $cc] 0 8]] {
				    pos.eq.ra {set var(colx) [lindex $T(Header) $cc]}
				    pos.eq.de {set var(coly) [lindex $T(Header) $cc]}
				}
			    }
			}

			if {$var(colx) != {} && $var(coly) != {}} {
			    return
			}
		    }
		    fk4 {
			set cols {
			    "_RAB1950" "_DEB1950"
			    "RA_B1950" "DEC_B1950"
			    "RA (B1950)" "Dec (1950)"
			    "RA" "DEC"
			    "RA" "DECL"
			    "RA" "Dec"
			    "RA(deg)" "DEC(deg)"
			}
			if {[FPConfigColsSearch $varname $cols]} {
			    return
			}
		    }
		    galactic {
			set cols {
			    "_GLON" "_GLAT"
			    "LON" "LAT"
			    "LON.Gal(deg)" "LAT.Gal(deg)"
			}
			if {[FPConfigColsSearch $varname $cols]} {
			    return
			}
		    }
		    ecliptic {
			set cols {
			    "_ELON" "_ELAT"
			    "LON.Ecl(deg)" "LAT.Ecl(deg)"
			}
			if {[FPConfigColsSearch $varname $cols]} {
			    return
			}
		    }
		}

		# default
		set var(colx) [starbase_colname $var(tbldb) 1]
		set var(coly) [starbase_colname $var(tbldb) 2]
	    }
	}
    }
}

proc FPConfigColsSearch {varname cols} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    foreach {colx coly} $cols {
	if {!([lsearch [starbase_columns $var(tbldb)] $colx] == -1) &&
	    !([lsearch [starbase_columns $var(tbldb)] $coly] == -1)} {
	    set var(colx) $colx
	    set var(coly) $coly
	    return 1
	}

	# try lower case
	set colx [string tolower $colx]
	set coly [string tolower $coly]
	if {!([lsearch [starbase_columns $var(tbldb)] $colx] == -1) &&
	    !([lsearch [starbase_columns $var(tbldb)] $coly] == -1)} {
	    set var(colx) $colx
	    set var(coly) $coly
	    return 1
	}
    }

    return 0
}

proc FPUpdateWCS {} {
    global ifp
    global current

    if {$current(frame) != {}} {
	$current(frame) marker catalog delete all

	foreach varname $ifp(fps) {
	    upvar #0 $varname var
	    global $varname

	    FPGenerate $varname

	    # regenerate the plot if needed
	    if {$var(plot)} {
		FPPlotGenerate $varname
	    }
	}
    }
}

proc FPUpdateFont {} {
    global ifp

    foreach varname $ifp(fps) {
	upvar #0 $varname var
	global $varname

	$var(tbl) configure -font [font actual TkDefaultFont]
    }
}

# Process Cmds

proc ProcessFPCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global ifp
    # we need to be realized
    ProcessRealizeDS9

    set ref [lindex $ifp(fps) end]
    global cvarname
    set cvarname $ref

    fp::YY_FLUSH_BUFFER
    fp::yy_scan_string [lrange $var $i end]
    fp::yyparse
    incr i [expr $fp::yycnt-1]
}

proc FPCmdCheck {} {
    global cvarname
    upvar #0 $cvarname cvar

    if {![info exists cvar(top)]} {
	Error "[msgcat::mc {Unable to find Footprint window}] $cvarname"
	return 0
    }
    if {![winfo exists $cvar(top)]} {
	Error "[msgcat:: mc {Unable to find Footprint window}] $cvarname"
	return 0
    }
    return 1
}

proc FPCmdRef {ref} {
    global ifp
    global cvarname

    # look for reference in current list
    if {[lsearch $ifp(fps) fp${ref}] < 0} {
	# see if its from our list of fps
	foreach mm $ifp(def) {
	    set title [lindex $mm 0]
	    set vars [lindex $mm 1]
	    set url [lindex $mm 2]
	    set opts [lindex $mm 3]
	    set method [lindex $mm 4]

	    if {$title != {-} && "fp${ref}" == $vars} {
		FPDialog $vars $title $url $opts $method sync
		set cvarname fp${ref}
	    }
	}
    }
}

proc FPCmdCoord {xx yy sky} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(x) $xx
    set cvar(y) $yy
    set cvar(sky) $sky
}

proc FPCmdSave {fn writer} {
    global cvarname

    if {$fn != {}} {
	FPSaveFn $cvarname $fn $writer
	FileLast fpfbox $fn
    }
}

proc FPCmdSize {radius rformat} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(radius) $radius
    set cvar(rformat) $rformat
    set cvar(rformat,msg) $rformat
}

proc FPCmdSkyframe {skyframe} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(sky) $skyframe
    CoordMenuButtonCmd $cvarname system sky [list FPWCSMenuUpdate $cvarname]
}

proc FPCmdSystem {sys} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(system) $sys
    CoordMenuButtonCmd $cvarname system sky [list FPWCSMenuUpdate $cvarname]
}

proc ProcessSendFPCmd {proc id param sock fn} {
    global ifp
    $proc $id "$ifp(fps)\n"
}
