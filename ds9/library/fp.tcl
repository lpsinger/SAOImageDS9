#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FPDef {} {
    global cat
    global ifp
    global pfp
    global wcs

    set ifp(cats) {}

    set ifp(rformat) arcmin
    set ifp(radius) 15
    set ifp(max) 5000
    set ifp(allrows) 1
    set ifp(allcols) 0
    set ifp(show) 1
    set ifp(panto) 1

    set ifp(minrows) 20
    set ifp(mincols) 10

    set ifp(key) {}
    set ifp(key,update) {}

    set ifp(match1) {}
    set ifp(match2) {}
    set ifp(return) 1and2
    set ifp(error) 5
    set ifp(eformat) arcsec
    set ifp(function) 1and2
    set ifp(unique) 1

    set ifp(def) { \
		       {{} \
			    fpcxc \
			    {} \
			    get \
			} \
		   }

    set fp(id) 0
    set fp(sym,font,msg) {}

    # prefs only
    set pfp(server) cds
    set pfp(sym,color) green
    set pfp(sym,width) 1
    set pfp(sym,dash) 0
    set pfp(sym,font) helvetica
    set pfp(sym,font,size) 10
    set pfp(sym,font,weight) normal
    set pfp(sym,font,slant) roman
}

# Load via HTTP

proc FPGetURL {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPGetURL $varname $var(url)?$var(query)"
    }

    ARStatus $varname [msgcat::mc {Loading}]

    global ihttp
    if {$var(sync)} {
	if {![catch {set var(token) [http::geturl $var(url) \
					 -query $var(query) \
					 -timeout $ihttp(timeout) \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    FPGetURLFinish $varname $var(token)
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $var(url)"
	}
    } else {
	if {![catch {set var(token) [http::geturl $var(url) \
					 -query $var(query) \
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
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $var(url)"
	}
    }
}

proc FPGetURLIncr {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPGetURLIncr $varname $var(url)?$var(query)"
    }

    ARStatus $varname [msgcat::mc {Loading}]

    global ihttp
    if {$var(sync)} {
	if {![catch {set var(token) [http::geturl $var(url) \
					 -query $var(query) \
					 -timeout $ihttp(timeout) \
					 -handler \
					 [list $var(proc,reader) $var(catdb)] \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    FPGetURLFinish $varname $var(token)
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $var(url)"
	}
    } else {
	if {![catch {set var(token) [http::geturl $var(url) \
					 -query $var(query) \
					 -timeout $ihttp(timeout) \
					 -handler \
					 [list $var(proc,reader) $var(catdb)] \
					 -command \
					 [list FPGetURLFinish $varname] \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $var(url)"
	}
    }
}

proc FPGetURLFinish {varname token} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPGetURLFinish $varname"
    }

    if {!($var(active))} {
	ARCancelled $varname
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
	    if {[info exist ${varname}(proc,parser)]} {
		eval [list $var(proc,parser) $var(catdb) $token]
	    }

	    ARDone $varname
	    eval $var(proc,done) $varname
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
		    if {$debug(tcl,footprint)} {
			puts stderr "FPGetURLFinish redirect $code to $value"
		    }
		    # clean up and resubmit
		    http::cleanup $token
		    unset var(token)

		    set var(url) $value
		    eval $var(proc,load) $varname
		}
	    }
	}

	default {ARError $varname "[msgcat::mc {Error code was returned}] $code"}
    }
}

proc FPLoad {varname} {
    upvar #0 $varname var
    global $varname

    # clear previous db
    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPLoad $varname $var(url)?$var(query)"
    }

    set var(proc,done) FPLoadDone
    set var(proc,load) FPLoad
    FPGetURL $varname
    return
}

proc FPLoadIncr {varname} {
    upvar #0 $varname var
    global $varname

    # clear previous db
    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPLoadIncr $varname $var(url)?$var(query)"
    }

    set var(proc,done) FPLoadDone
    set var(proc,load) FPLoadIncr
    FPGetURLIncr $varname
    return
}

proc FPLoadDone {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPLoadDone $varname"
    }

    FPSortMenu $varname
    FPConfigCols $varname
    FPColsMenu $varname
    FPTable $varname

    FPDialogUpdate $varname
}

# Load via File

proc FPLoadSBFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog catfbox]
    if {$fn != {}} {
	FPLoadFn $varname $fn starbase_read
    }
}

proc FPLoadVOTFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog catvotfbox]
    if {$fn != {}} {
	FPLoadFn $varname $fn VOTRead
    }
}

proc FPLoadTSVFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog cattsvfbox]
    if {$fn != {}} {
	FPLoadFn $varname $fn TSVRead
    }
}

# used by backup
proc FPLoadFn {varname fn reader} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPLoadFn $varname $fn $reader"
    }

    ARStatus $varname [msgcat::mc {Loading Footprint}]

    FPOff $varname
    FPSet $varname {} {} $fn

    set var(name) {}
    set var(x) {}
    set var(y) {}
    set var(radius) {}

    if {[file exists $fn]} {
	$reader $var(catdb) $fn
    } else {
	Error "[msgcat::mc {Unable to open file}] $fn"
	return
    }

    ARDone $varname
    FPLoadDone $varname
}

# Save via File

proc FPSaveSBFile {varname} {
    set fn [SaveFileDialog catfbox]
    FPSaveFn $varname $fn starbase_write
}

proc FPSaveVOTFile {varname} {
    set fn [SaveFileDialog catvotfbox]
    FPSaveFn $varname $fn VOTWrite
}

proc FPSaveTSVFile {varname} {
    set fn [SaveFileDialog cattsvfbox]
    FPSaveFn $varname $fn TSVWrite
}

proc FPSaveFn {varname fn writer} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {$fn == {}} {
	return
    }

    # do we have a db?
    if {![FPValidDB $var(tbldb)]} {
	return
    }

    $writer $var(tbldb) $fn
    ARDone $varname
}

# Other procedures

proc FPStatusRows {varname rowlist} {
    upvar #0 $varname var
    global $varname

    # rowlist start at 1
    if {[llength $rowlist]>0} {
	ARStatus $varname "[msgcat::mc {Row}] [join $rowlist {,}]"
    } else {
	ARStatus $varname {}
    }
}

proc FPOff {varname} {
    upvar #0 $varname var
    global $varname

    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }
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

    FPSortMenu $varname
    FPColsMenu $varname
    set var(filter) {}
    set var(sort) {}
    set var(colx) {}
    set var(coly) {}

    set var(blink) 0

    # plot window?
    if {$var(plot)} {
	PlotDestroy $var(plot,var)
	set var(plot) 0
	set var(plot,var) {}
	set var(plot,x) {}
	set var(plot,xerr) {}
	set var(plot,y) {}
	set var(plot,yerr) {}
    }

    FPDialogUpdate $varname
}

# used by backup
proc FPTable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    global ifp

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPTable $varname"
    }

    if {![FPValidDB $var(catdb)]} {
	return
    }

    # delete any previous tbldb
    set db ${varname}tbldb
    global $db
    if {[info exists $db]} {
	unset $db
    }

    # clear the selection
    $var(tbl) selection clear all

    # clear regions
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker catalog $varname delete
	}
    }

    if {$var(filter) == {} && $var(sort) == {}} {
	set var(tbldb) $var(catdb)
    } else {
	set var(tbldb) ${varname}tbldb
	global $var(tbldb)
	if {![FPFltSort $varname]} {
	    Error "[msgcat::mc {Unable to evaluate filter}] $var(filter)"
	    if {[info exists $var(tbldb)]} {
		unset $var(tbldb)
	    }
	    set var(tbldb) $var(catdb)
	}
    }

    global $var(tbldb)
    $var(tbl) configure -variable $var(tbldb)
    $var(found) configure -textvariable ${var(tbldb)}(Nrows)

#    starbase_writefp $var(catdb) stdout
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

    # regenerate the plot if needed
    if {$var(plot)} {
	FPPlotGenerate $varname
    }

    set nr [starbase_nrows $var(tbldb)]
    if {$nr >= $var(max) && !$var(allrows)} {
	ARStatus $varname "$nr [msgcat::mc {rows of data have been downloaded. More may be available. You may wish to adjust the maximum allowed}]"
    }
}

proc FPGenerate {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPGenerate $varname"
    }

    # do we have a db?
    if {![FPValidDB $var(tbldb)]} {
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
    if {$debug(tcl,footprint)} {
	puts stderr "FPGenerateRegions $varname"
    }

    # do we have a db?
    if {![FPValidDB $var(tbldb)]} {
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
    if {$debug(tcl,footprint)} {
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

proc FPSet {varname format catalog title} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPSet $varname :$format:$catalog:$title:"
    }

    set var(format) $format
    set var(catalog) $catalog
    set var(title) $title
    set var(filter) {}
    set var(colx) {}
    set var(coly) {}
    set var(sort) {}
    set var(sort,dir) "-increasing"
}

proc FPValidDB {varname} {
    upvar #0 $varname var
    global $varname

    if {[info exists var(Nrows)] && 
	[info exists var(Ncols)] &&
	[info exists var(HLines)] &&
	[info exists var(Header)]} {
	return 1
    } else {
	return 0
    }
}

proc FPAnalysisMenu {} {
    global ifp
    global ds9

    set mm "$ds9(mb).analysis.cat"
    set nn {}

    foreach ff $ifp(def) {
	set ll [lindex $ff 0]
	set ww [lindex $ff 1]
	set ss [lindex $ff 2]
	set cc [lindex $ff 3]

	if {$ll != {-}} {
	    $mm.$nn add command -label $ll \
		-command [list FPDialog $ww $ss $cc $ll apply]
	} else {
	    set nn "$ss"
	    menu $mm.$nn
	    $mm add cascade -label $ww -menu $mm.$nn
	}
    }
}

proc FPSortMenu {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global ds9

    set m $var(sortmenu).menu
    catch {destroy $m}

    menu $m -tearoff 0
    $m add command -label {} -command "FPSortCmd $varname {}"
    if {[FPValidDB $var(catdb)]} {
	set cnt -1
	foreach col [starbase_columns $var(catdb)] {
	    $m add command -label $col -command "FPSortCmd $varname \{$col\}"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }
}

proc FPSortCmd {varname val} {
    upvar #0 $varname var
    global $varname

    set ${varname}(sort) $val
    FPTable $varname
}

# backward backup compatibility version 6.1
proc FPRADECMenu {varname} {
    FPColsMenu $varname
}

# used by backup
proc FPColsMenu {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global ds9

    set m $var(ramenu).menu
    catch {destroy $m}

    menu $m -tearoff 0
    if {[FPValidDB $var(catdb)]} {
	set cnt -1
	foreach col [starbase_columns $var(catdb)] {
	    $m add command -label $col -command "FPColXCmd $varname \{$col\}"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }

    set m $var(decmenu).menu
    catch {destroy $m}

    menu $m -tearoff 0
    if {[FPValidDB $var(catdb)]} {
	set cnt -1
	foreach col [starbase_columns $var(catdb)] {
	    $m add command -label $col -command "FPColYCmd $varname \{$col\}"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }
}

proc FPColXCmd {varname val} {
    upvar #0 $varname var
    global $varname

    set ${varname}(colx) $val
    FPGenerate $varname
}

proc FPColYCmd {varname val} {
    upvar #0 $varname var
    global $varname

    set ${varname}(coly) $val
    FPGenerate $varname
}

proc FPColsCmd {varname} {
    upvar #0 $varname var
    global $varname

    FPColsUpdate $varname
    FPGenerate $varname
}

proc FPConfigCols {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    set var(colx) {}
    set var(coly) {}

    if {![FPValidDB $var(catdb)]} {
	return
    }

    if {[starbase_ncols $var(catdb)] < 2} {
	return
    }

    # determine psystem/psky if present in cat header
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
		if {!([lsearch [starbase_columns $var(catdb)] $colx] == -1) &&
		    !([lsearch [starbase_columns $var(catdb)] $coly] == -1)} {
		    set var(colx) $colx
		    set var(coly) $coly
		    return
		}

		# try lower case
		set colx [string tolower $colx]
		set coly [string tolower $coly]
		if {!([lsearch [starbase_columns $var(catdb)] $colx] == -1) &&
		    !([lsearch [starbase_columns $var(catdb)] $coly] == -1)} {
		    set var(colx) $colx
		    set var(coly) $coly
		    return
		}
	    }

	    # default
	    set var(colx) [starbase_colname $var(catdb) 1]
	    set var(coly) [starbase_colname $var(catdb) 2]
	    
	    return
	}
	default {
	    if {[info commands $var(frame)] == {}} {
		# linear
		set var(colx) [starbase_colname $var(catdb) 1]
		set var(coly) [starbase_colname $var(catdb) 2]

		return
	    } elseif {![$var(frame) has wcs celestial $var(psystem)]} {
		# linear
		set var(colx) [starbase_colname $var(catdb) 1]
		set var(coly) [starbase_colname $var(catdb) 2]

		return
	    } else {
		if {![catch {starbase_hdrget $var(catdb) equinox} sys]} {
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
			set db $var(catdb)
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
		set var(colx) [starbase_colname $var(catdb) 1]
		set var(coly) [starbase_colname $var(catdb) 2]
	    }
	}
    }
}

proc FPConfigColsSearch {varname cols} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    foreach {colx coly} $cols {
	if {!([lsearch [starbase_columns $var(catdb)] $colx] == -1) &&
	    !([lsearch [starbase_columns $var(catdb)] $coly] == -1)} {
	    set var(colx) $colx
	    set var(coly) $coly
	    return 1
	}

	# try lower case
	set colx [string tolower $colx]
	set coly [string tolower $coly]
	if {!([lsearch [starbase_columns $var(catdb)] $colx] == -1) &&
	    !([lsearch [starbase_columns $var(catdb)] $coly] == -1)} {
	    set var(colx) $colx
	    set var(coly) $coly
	    return 1
	}
    }

    return 0
}

# Other interface

proc FPTool {} {
    FPDialog cattool {} {} [msgcat::mc {Footprint Tool}] none
}

proc FPClearFrame {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) marker catalog delete all
    }
}

proc FPUpdateWCS {} {
    global ifp
    global current

    if {$current(frame) != {}} {
	$current(frame) marker catalog delete all

	foreach varname $ifp(cats) {
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

    foreach varname $ifp(cats) {
	upvar #0 $varname var
	global $varname

	$var(tbl) configure -font [font actual TkDefaultFont]
    }
}

proc FPBackup {ch which fdir rdir} {
    global ifp

    foreach varname $ifp(cats) {
	upvar #0 $varname var
	global $varname

	if {$var(frame) == $which} {
	    set catdb ${varname}catdb
	    global $catdb

	    puts $ch "FPDialog $varname {} {} {} none"
	    if {[starbase_nrows $var(catdb)]>500} {
		# external file
		set fn $fdir/${varname}.cat
		set rfn $rdir/${varname}.cat

		catch {file delete -force $fn}
		FPSaveFn $varname $fn VOTWrite
		puts $ch "FPLoadFn $varname \"$rfn\" VOTRead"
	    } else {
		# internal var
		puts $ch "global $catdb"
		puts $ch "array set $catdb \{ [array get $catdb] \}"
	    }
	    puts $ch "global $varname"
	    puts $ch "array set $varname \{ [array get $varname] \}"

	    set symdb ${varname}symdb
	    global $symdb
	    puts $ch "global $symdb"
	    puts $ch "array set $symdb \{ [array get $symdb] \}"

	    puts $ch "FPColsMenu $varname"
	    puts $ch "FPTable $varname"
	}
    }
}

proc PrefsDialogFootprint {} {
    global ifp
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Footprint}]
    lappend dprefs(tabs) [ttk::frame $w.cat]

    # Footprint
    set f [ttk::labelframe $w.cat.param -text [msgcat::mc {Footprint}]]

    global pfp
    ttk::label $f.ctitle -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pfp sym,color {}

    ttk::label $f.cwidth -text [msgcat::mc {Width}]
    WidthDashMenuButton $f.width pfp sym,width sym,dash {} {}

    ttk::label $f.ftitle -text [msgcat::mc {Font}]
    FontMenuButton $f.font pfp sym,font sym,font,size \
	sym,font,weight, sym,font,slant {}

    grid $f.ctitle $f.color -padx 2 -pady 2 -sticky w
    grid $f.cwidth $f.width -padx 2 -pady 2 -sticky w
    grid $f.ftitle $f.font -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

# Process Cmds

proc ProcessFootprintCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    global ifp
    set ref [lindex $ifp(cats) end]
    global cvarname
    set cvarname $ref

    cat::YY_FLUSH_BUFFER
    cat::yy_scan_string [lrange $var $i end]
    cat::yyparse
    incr i [expr $cat::yycnt-1]
}

proc FootprintCmdCheck {} {
    global cvarname
    upvar #0 $cvarname cvar

    if {![info exists cvar(top)]} {
	Error "[msgcat::mc {Unable to find catalog window}] $cvarname"
	return 0
    }
    if {![winfo exists $cvar(top)]} {
	Error "[msgcat:: mc {Unable to find catalog window}] $cvarname"
	return 0
    }
    return 1
}

proc FootprintCmdRef {ref} {
    global ifp
    global cvarname

    # backward compatibility
    if {$ref == "cxc"} {
	set ref csc
    }

    # look for reference in current list
    if {[lsearch $ifp(cats) cat${ref}] < 0} {
	# see if its from our list of cats
	foreach mm $ifp(def) {
	    set ll [lindex $mm 0]
	    set ww [lindex $mm 1]
	    set ss [lindex $mm 2]
	    set cc [lindex $mm 3]

	    if {$ll != {-} && "cat${ref}" == $ww} {
		FPDialog $ww $ss $cc $ll sync
		set cvarname cat${ref}
		return
	    }
	}

	# not a default, assume other name
	FPDialog cat${ref} cds $ref $ref sync
	set cvarname cat${ref}
    }
}

proc FootprintCmdFilterLoad {fn} {
    global cvarname
    upvar #0 $cvarname cvar

    if {$fn != {}} {
	if {[catch {open $fn r} fp]} {
	    Error "[msgcat::mc {Unable to open file}] $fn: $fp"
	    yyerror
	}
	set flt [read -nonewline $fp]
	catch {regsub {\n} $flt " " $flt}
	set cvar(filter) [string trim $flt]
	catch {close $fp}
    }
}

proc FootprintCmdLoad {fn reader} {
    global ifp

    if {$fn != {}} {
	FPDialog cattool {} {} {} none
	FPLoadFn [lindex $ifp(cats) end] $fn $reader
	FileLast catfbox $fn
    }
}

proc FootprintCmdMatch {} {
    global ifp

    set ifp(match1) {}
    set ifp(match2) {}
    set ll [llength $ifp(cats)]
    if {$ll>1} {
	FootprintCmdMatchParams [lindex $ifp(cats) [expr $ll-2]] \
	    [lindex $ifp(cats) [expr $ll-1]]
    }
}

proc FootprintCmdMatchParams {cat1 cat2} {
    global ifp
    global current

    set ifp(match1) $cat1
    set ifp(match2) $cat2
    if {$current(frame) != {}} {
	FPMatch $current(frame) $ifp(match1) $ifp(match2)
    }
}

proc FootprintCmdSAMP {} {
    global cvarname
    global samp

    if {[info exists samp]} {
	SAMPSendTableLoadVotable {} $cvarname
    } else {
	Error [msgcat::mc {SAMP: not connected}]
    }
}

proc FootprintCmdSAMPSend {name} {
    global cvarname
    global samp

    if {[info exists samp]} {
	foreach arg $samp(apps,votable) {
	    foreach {key val} $arg {
		if {[string tolower $val] == $name} {
		    SAMPSendTableLoadVotable $key $cvarname
		    break
		}
	    }
	}
    } else {
	Error [msgcat::mc {SAMP: not connected}]
    }
}

proc FootprintCmdSave {fn writer} {
    global cvarname

    if {$fn != {}} {
	FPSaveFn $cvarname $fn $writer
    	FileLast catfbox $fn
    }
}

proc FootprintCmdSkyframe {skyframe} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(sky) $skyframe
    CoordMenuButtonCmd $cvarname system sky [list FPWCSMenuUpdate $cvarname]
}

proc FootprintCmdSystem {sys} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(system) $sys
    CoordMenuButtonCmd $cvarname system sky [list FPWCSMenuUpdate $cvarname]
}

proc FootprintCmdSymbol {col value} {
    global cvarname
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    starbase_set $cvar(symdb) $cvar(row) \
	[starbase_colnum $cvar(symdb) $col] $value
    FPGenerate $cvarname
}

proc FootprintCmdSymbolFontStyle {value} {
    global cvarname
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    switch $value {
	normal {
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontweight] normal
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontslant] roman
	}
	bold {
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontweight] bold
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontslant] roman
	}
	italic {
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontweight] normal
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontslant] italic
	}
    }
    FPGenerate $cvarname
}

proc FootprintCmdSymbolAdd {} {
    global cvarname
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    global pfp

    set row [expr [starbase_nrows $cvar(symdb)]+1]
    starbase_rowins $cvar(symdb) $row
    starbase_set $cvar(symdb) $row \
	[starbase_colnum $cvar(symdb) color] $pfp(sym,color)
    starbase_set $cvar(symdb) $row \
	[starbase_colnum $cvar(symdb) width] $pfp(sym,width)
    starbase_set $cvar(symdb) $row \
	[starbase_colnum $cvar(symdb) font] $pfp(sym,font)
    starbase_set $cvar(symdb) $row \
	[starbase_colnum $cvar(symdb) fontsize] \
	$pfp(sym,font,size)
    starbase_set $cvar(symdb) $row \
	[starbase_colnum $cvar(symdb) fontweight] \
	$pfp(sym,font,weight)
    starbase_set $cvar(symdb) $row \
	[starbase_colnum $cvar(symdb) fontslant] \
	$pfp(sym,font,slant)
    FPGenerate $cvarname
}

proc FootprintCmdSymbolRemove {} {
    global cvarname
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    starbase_rowdel $cvar(symdb) $cvar(row)
    FPGenerate $cvarname
}

proc FootprintCmdSymbolLoad {fn} {
    global cvarname
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    if {[file exists $fn]} {
	starbase_read $cvar(symdb) $fn
	FPGenerate $cvarname
    } else {
	Error "[msgcat::mc {Unable to open file}] $fn"
	return
    }
}

proc FootprintCmdSymbolSave {fn} {
    global cvarname
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    starbase_write $cvar(symdb) $fn
}

proc ProcessSendFootprintCmd {proc id param sock fn} {
    global parse
    set parse(proc) $proc
    set parse(id) $id
    set parse(sock) $sock
    set parse(fn) $fn

    global ifp
    set ref [lindex $ifp(cats) end]
    global cvarname
    set cvarname $ref

    catsend::YY_FLUSH_BUFFER
    catsend::yy_scan_string $param
    catsend::yyparse
}

proc FootprintSendCmdHeader {} {
    global parse
    global cvarname

    ProcessSend $parse(proc) $parse(id) $parse(sock) $parse(fn) \
	{.txt} [FPGetHeader $cvarname]
}

proc FootprintSendCmdRef {ref} {
    global ifp
    global cvarname

    # backward compatibility
    if {$ref == "catcxc"} {
	set ref catcsc
    }

    # look for reference in current list
    if {[lsearch $ifp(cats) $ref] < 0} {
	Error "[msgcat::mc {Unable to find catalog window}] $ref"
	return 0
    }

    set cvarname $ref
    return [FootprintCmdCheck]
}

