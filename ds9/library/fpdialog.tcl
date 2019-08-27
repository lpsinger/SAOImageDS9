#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# used by backup
proc FPDialog {varname format catalog title action} {
    global cat
    global ifp
    global pfp
    global ds9

    global pds9
    global wcs
   
    # first determine if aready in use, then increment
    if {[lsearch $ifp(cats) $varname] >= 0} {
	incr fp(id)
	append varname $fp(id)
    }

    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPDialog $varname:$format:$catalog:$title:$action"
    }

    # main dialog
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    global current
    if {$current(frame) == {}} {
	return
    }

    # AR variables
    ARInit $varname FPServer

    # FP variables
    lappend ifp(cats) $varname

    set var(catdb) ${varname}catdb
    set var(tbldb) ${varname}tbldb
    set var(symdb) ${varname}symdb
    set var(symdl) ${varname}symdl
    set var(fltdl) ${varname}fltdl

    set var(frame) $current(frame)

    set var(server) $pfp(server)

    # Skybot
    set var(system) $wcs(system)
    set var(sky) $wcs(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $ifp(rformat)
    set var(radius) $ifp(radius)
    set var(max) $ifp(max)
    set var(allrows) $ifp(allrows)
    set var(allcols) $ifp(allcols)
    set var(show) $ifp(show)
    set var(panto) $ifp(panto)

    set var(psystem) $var(system)
    set var(psky) $var(sky)

    set var(blink) 0
    set var(blink,count) 0
    set var(blink,marker) {}

    set var(plot) 0
    set var(plot,var) {}
    set var(plot,x) {}
    set var(plot,xerr) {}
    set var(plot,y) {}
    set var(plot,yerr) {}

    FPSet $varname $format $catalog $title
    FPSymDBInit $varname

    # create the window
    set w $var(top)
    set mb $var(mb)

    set tt $title
    
    Toplevel $w $mb 7 $tt "FPDestroy $varname"
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    NSVRServerMenu $varname
    $mb add cascade -label [msgcat::mc {Symbol}] -menu $mb.symbol
    $mb add cascade -label [msgcat::mc {Preferences}] -menu $mb.prefs

    # file
    menu $mb.file
    $mb.file add command -label "[msgcat::mc {Load}]..." \
	-command [list FPLoadVOTFile $varname]
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command [list FPSaveVOTFile $varname]
    $mb.file add separator
    $mb.file add cascade -label [msgcat::mc {Import}] -menu $mb.file.import
    $mb.file add cascade -label [msgcat::mc {Export}] -menu $mb.file.export
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Retrieve}] \
	-command [list FPApply $varname 0]
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command [list ARCancel $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Filter}] \
	-command [list FPTable $varname]
    $mb.file add command -label [msgcat::mc {Clear}] \
	-command [list FPOff $varname]
    $mb.file add separator
    $mb.file add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(show) -command [list FPGenerate $varname]
    $mb.file add separator
    $mb.file add cascade -label [msgcat::mc {SAMP}] -menu $mb.file.samp
    $mb.file add command -label [msgcat::mc {Plot}] \
	-command [list FPPlot $varname]
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Display Header}]..." \
	-command [list FPHeader $varname]
    $mb.file add command -label [msgcat::mc {Acknowledgment}] \
	-command [list FPAck $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Update from Current Frame}] \
	-command [list FPUpdate $varname]
    $mb.file add command \
	-label [msgcat::mc {Update from Current Crosshair}] \
	-command [list FPCrosshair $varname]
    $mb.file add separator
	$mb.file add command -label [msgcat::mc {Copy to Regions}] \
	-command [list FPGenerateRegions $varname]
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Print}]..." \
	-command [list FPPrint $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list FPDestroy $varname]

    # Import
    menu $mb.file.import
    $mb.file.import add command -label "[msgcat::mc {Starbase}]..." \
	-command [list FPLoadSBFile $varname]
    $mb.file.import add command -label "[msgcat::mc {Tab-Separated-Value}]..." \
	-command [list FPLoadTSVFile $varname]

    # Export
    menu $mb.file.export
    $mb.file.export add command -label "[msgcat::mc {Starbase}]..." \
	-command [list FPSaveSBFile $varname]
    $mb.file.export add command -label "[msgcat::mc {Tab-Separated-Value}]..." \
	-command [list FPSaveTSVFile $varname]

    # SAMP
    menu $mb.file.samp
    $mb.file.samp add command -label [msgcat::mc {Connect}] \
	-command SAMPConnect
    $mb.file.samp add command -label [msgcat::mc {Disconnect}] \
	-command SAMPDisconnect
    $mb.file.samp add separator
    $mb.file.samp add cascade -label [msgcat::mc {Send}] \
	-menu $mb.file.samp.send

    menu $mb.file.samp.send
    $mb.file.samp.send add command -label [msgcat::mc {Broadcast}] \
	-command [list SAMPSendTableLoadVotable {} $varname]
    $mb.file.samp.send add separator

    # edit
    menu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command "FPCut $varname" -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command "FPCopy $varname" -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command "EntryPaste $var(top)" -accelerator "${ds9(ctrl)}V"
    $mb.edit add separator
    $mb.edit add command -label [msgcat::mc {Clear}] \
	-command [list ARClear $varname]

    # symbol
    global $var(symdb)
    set flt $var(symdb)
    set cn [starbase_colnum $var(symdb) color]
    set wn [starbase_colnum $var(symdb) width]
    set dn [starbase_colnum $var(symdb) dash]
    set fn [starbase_colnum $var(symdb) font]
    set fs [starbase_colnum $var(symdb) fontsize]
    set fw [starbase_colnum $var(symdb) fontweight]
    set fl [starbase_colnum $var(symdb) fontslant]

    menu $mb.symbol
    $mb.symbol add cascade -label [msgcat::mc {Color}] -menu $mb.symbol.color
    $mb.symbol add cascade -label [msgcat::mc {Width}] -menu $mb.symbol.width
    $mb.symbol add cascade -label [msgcat::mc {Font}] -menu $mb.symbol.font
    $mb.symbol add separator
    $mb.symbol add command -label "[msgcat::mc {Advanced}]..." \
	-command [list FPSymDialog $varname]

    ColorMenu $mb.symbol.color $flt 1,$cn [list FPGenerate $varname]

    WidthDashMenu $mb.symbol.width $flt 1,$wn 1,$dn \
	[list FPGenerate $varname] [list FPGenerate $varname]

    FontMenu $mb.symbol.font $flt 1,$fn 1,$fs 1,$fw 1,$fl \
	[list FPGenerate $varname]

    menu $mb.prefs
    $mb.prefs add checkbutton -label [msgcat::mc {Pan To}] \
	-variable ${varname}(panto)
    $mb.prefs add separator
    $mb.prefs add checkbutton -label [msgcat::mc {All Rows}] \
	-variable ${varname}(allrows)
    $mb.prefs add checkbutton -label [msgcat::mc {All Columns}] \
	-variable ${varname}(allcols)

    # Catalog
    set f [ttk::labelframe $w.cat -text [msgcat::mc {Catalog}] -padding 2]

    ttk::label $f.ttitle -text [msgcat::mc {Name}]
    ttk::label $f.title -textvariable ${varname}(title) \
	-relief groove -width 60 -anchor w

    ttk::label $f.tcat -text [msgcat::mc {Identification}]
    ttk::label $f.cat -textvariable ${varname}(catalog) \
	-relief groove -width 60 -anchor w

    ttk::label $f.tref -text [msgcat::mc {Reference}]
    ttk::label $f.ref -text [string range $varname 3 end] \
	-relief groove -width 13 -anchor w

    grid $f.ttitle $f.title -padx 2 -pady 2 -sticky w
    grid $f.tcat $f.cat -padx 2 -pady 2 -sticky w
    grid $f.tref $f.ref -padx 2 -pady 2 -sticky w

    # Object
    set f [ttk::labelframe $w.obj -text [msgcat::mc {Object}] -padding 2]

    ttk::label $f.nametitle -text [msgcat::mc {Name}]
    ttk::entry $f.name -textvariable ${varname}(name) -width 60

    set var(xname) [ttk::label $f.xtitle -text {} -width 1]
    ttk::entry $f.x -textvariable ${varname}(x) -width 14
    set var(yname) [ttk::label $f.ytitle -text {} -width 1]
    ttk::entry $f.y -textvariable ${varname}(y) -width 14

    CoordMenuButton $f.coord $varname system 0 sky skyformat \
	[list FPWCSMenuUpdate $varname]
    CoordMenuEnable $f.coord.menu $varname system {} sky skyformat

    ttk::button $f.update -text [msgcat::mc {Update}] \
	-command [list FPUpdate $varname]

    ttk::label $f.rtitle -text [msgcat::mc {Radius}]
    ttk::entry $f.r -textvariable ${varname}(radius) -width 14

    ARRFormat $f.rformat $varname

    grid $f.nametitle $f.name - - - - -padx 2 -pady 2 -sticky w
    grid $f.xtitle $f.x $f.ytitle $f.y $f.coord $f.update \
	-padx 2 -pady 2 -sticky w
    grid $f.rtitle $f.r $f.rformat -padx 2 -pady 2 -sticky w

    # Param
    set f [ttk::labelframe $w.param -text [msgcat::mc {Table}] -padding 2]

    ttk::label $f.mfilter -text [msgcat::mc {Filter}]
    ttk::entry $f.filter -textvariable ${varname}(filter) -width 50
    ttk::button $f.bfilter -text [msgcat::mc {Edit}] \
	-command [list FPEditDialog $varname filter $var(catdb)]

    ttk::label $f.msort -text [msgcat::mc {Sort}]
    set var(sortmenu) [ttk::menubutton $f.sort \
			   -textvariable ${varname}(sort) \
			   -menu $f.sort.menu -width 14]
    ttk::radiobutton $f.isort -text [msgcat::mc {Increase}] \
	-variable ${varname}(sort,dir) -value "-increasing" \
	-command [list FPTable $varname]
    ttk::radiobutton $f.dsort -text [msgcat::mc {Decrease}] \
	-variable ${varname}(sort,dir) -value "-decreasing" \
	-command [list FPTable $varname]

    ttk::label $f.mtitle -text [msgcat::mc {Max Rows}]
    ttk::entry $f.max -textvariable ${varname}(max) -width 14

    ttk::label $f.ftitle -text [msgcat::mc {Found}] 
    set var(found) [ttk::label $f.found \
			-width 14 -relief groove -anchor w]

    set var(raname) [ttk::label $f.ra -text {} -width 3]
    set var(ramenu) [ttk::menubutton $f.ram -textvariable \
			 ${varname}(colx) -menu $f.ram.menu -width 14]
    set var(decname) [ttk::label $f.dec -text {} -width 3]
    set var(decmenu) [ttk::menubutton $f.decm -textvariable \
			  ${varname}(coly) -menu $f.decm.menu -width 14]

    CoordMenuButton $f.pcoord $varname psystem 1 psky {} \
	[list FPColsCmd $varname]
    CoordMenuEnable $f.pcoord.menu $varname psystem 1 psky {}

    grid $f.mfilter $f.filter - - $f.bfilter \
	-padx 2 -pady 2 -sticky w
    grid $f.msort $f.sort $f.isort $f.dsort \
	-padx 2 -pady 2 -sticky w
    grid $f.mtitle $f.max $f.ftitle $f.found \
	-padx 2 -pady 2 -sticky w
    grid $var(raname) $var(ramenu) $var(decname) $var(decmenu) $f.pcoord \
	-padx 2 -pady 2 -sticky w

    # Table
    set f [ttk::frame $w.tbl]

    set var(tbl) [table $f.t \
		      -state disabled \
		      -usecommand 0 \
		      -variable $var(tbldb) \
		      -colorigin 1 \
		      -roworigin 0 \
		      -cols $ifp(mincols) \
		      -rows $ifp(minrows) \
		      -width -1 \
		      -height -1 \
		      -maxwidth 300 \
		      -maxheight 300 \
		      -titlerows 1 \
		      -xscrollcommand [list $f.xscroll set]\
		      -yscrollcommand [list $f.yscroll set]\
		      -selecttype row \
		      -selectmode extended \
		      -anchor w \
		      -font [font actual TkDefaultFont] \
		      -browsecommand [list FPSelectCmd $varname %s %S] \
		     ]

    ttk::scrollbar $f.yscroll -command [list $var(tbl) yview] -orient vertical
    ttk::scrollbar $f.xscroll -command [list $var(tbl) xview] -orient horizontal

    grid $var(tbl) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Status
    set f [ttk::frame $w.status]

    ttk::label $f.title -text [msgcat::mc {Status}]
    ttk::label $f.item -textvariable ${varname}(status)

    grid $f.title $f.item -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]

    ButtonButton $f.load [msgcat::mc {Load}] [list FPLoadVOTFile $varname]
    ButtonButton $f.save [msgcat::mc {Save}] [list FPSaveVOTFile $varname]

    set var(apply) [ttk::button $f.apply \
			-text [msgcat::mc {Retrieve}] \
			-command "FPApply $varname 0"]
    set var(cancel) [ttk::button $f.cancel -text \
			 [msgcat::mc {Cancel}] \
			 -command "ARCancel $varname" -state disabled]
    ttk::button $f.filter -text [msgcat::mc {Filter}] \
	-command [list FPTable $varname]
    ttk::button $f.clear -text [msgcat::mc {Clear}] \
	-command [list FPOff $varname]
    set var(samp) [ttk::button $f.samp \
		       -text [msgcat::mc {SAMP}] \
		       -command "SAMPSendTableLoadVotable {} $varname"]
    ttk::button $f.plot -text [msgcat::mc {Plot}] \
	-command [list FPPlot $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list FPDestroy $varname]

    pack $f.apply $f.cancel $f.filter $f.clear $f.samp $f.plot $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.stbl -orient horizontal
    ttk::separator $w.sstatus -orient horizontal
    pack $w.buttons $w.sstatus $w.status $w.stbl -side bottom -fill x
    pack $w.cat $w.obj $w.param -side top -fill x
    pack $w.tbl -side top -fill both -expand true

    # needs to go after sort menu button is defined
    FPSortMenu $varname
    FPColsMenu $varname
    FPColsUpdate $varname

    ARCoord $varname
    FPUpdate $varname
    FPDialogUpdate $varname

    ARStatus $varname {}

    switch -- $action {
	apply {FPApply $varname 0}
	sync {FPApply $varname 1}
	none {}
    }

    # return the actual varname
    return $varname
}

proc FPDialogUpdate {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    global samp

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPDialogUpdate $varname"
    }

    # do we have a db?
    if {[FPValidDB $var(tbldb)]} {
	$var(mb).file entryconfig [msgcat::mc {Filter}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Clear}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Plot}] -state normal
	$var(mb).file entryconfig "[msgcat::mc {Display Header}]..." \
	    -state normal
	$var(mb).file entryconfig [msgcat::mc {Copy to Regions}] -state normal
	$var(mb).file entryconfig "[msgcat::mc {Print}]..." -state normal

	$var(top).buttons.filter configure -state normal
	$var(top).buttons.clear configure -state normal
	$var(top).buttons.plot configure -state normal
    } else {
	$var(mb).file entryconfig [msgcat::mc {Filter}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Clear}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Plot}] -state disabled
	$var(mb).file entryconfig "[msgcat::mc {Display Header}]..." \
	    -state disabled
	$var(mb).file entryconfig [msgcat::mc {Copy to Regions}] -state disabled
	$var(mb).file entryconfig "[msgcat::mc {Print}]..." -state disabled

	$var(top).buttons.filter configure -state disabled
	$var(top).buttons.clear configure -state disabled
	$var(top).buttons.plot configure -state disabled
    }

    set m $var(mb).file.samp
    set ss [expr $ds9(menu,start)+2]

    if {[info exists samp]} {
	# menu
	$m entryconfig [msgcat::mc {Send}] -state normal
	$m entryconfig [msgcat::mc {Connect}] -state disabled
	$m entryconfig [msgcat::mc {Disconnect}] -state normal

	if {[$m.send index end] >= $ss} {
	    $m.send delete $ss end
	}

	foreach args $samp(apps,votable) {
	    foreach {id name} $args {
		$m.send add command -label $name \
		    -command "SAMPSendTableLoadVotable $id $varname"
	    }
	}

	# button
	$var(samp) configure -state normal
    } else {
	# menu
	$m entryconfig [msgcat::mc {Send}] -state disabled
	$m entryconfig [msgcat::mc {Connect}] -state normal
	$m entryconfig [msgcat::mc {Disconnect}] -state disabled

	# button
	$var(samp) configure -state disabled
    }

}

proc FPAck {varname} {
    upvar #0 $varname var
    global $varname

    switch $var(format) {
	cxc {FPCXCAck $varname}
	hla {FPHLAAck $varname}
    }
}

proc FPApply {varname sync} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPApply $varname $sync"
    }

    if {$var(catalog) == {}} {
	Error [msgcat::mc {No Catalog specified}]
	return
    }

    set var(sync) $sync
    ARApply $varname
    if {$var(name) != {}} {
	set var(sky) fk5
	CoordMenuButtonCmd $varname system sky {}
	FPWCSMenuUpdate $varname

	NSVRServer $varname
    } else {
	FPServer $varname
    }
}

proc FPCopy {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]
    if {$w == $var(tbl)} {
	FPCopyTable $varname
    } else {
	EntryCopy $var(top)
    }
}

proc FPCut {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]
    if {$w == $var(tbl)} {
	FPCopyTable $varname
    } else {
	EntryCut $var(top)
    }
}

proc FPCopyTable {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]

    set sel [$var(tbl) curselection]
    set data {}
    set row [lindex [split [lindex $sel 0] ,] 0]
    foreach ss $sel {
	set rr [lindex [split $ss ,] 0]
	if {$rr != $row} {
	    append data "\n"
	    set row $rr
	} else {
	    if {$data != {}} {
		append data "\t"
	    }
	}
	append data "[$var(tbl) get $ss]"
    }
    append data "\n"
    clipboard clear -displayof $w
    clipboard append -displayof $w $data
}

proc FPCrosshair {varname} {
    upvar #0 $varname var
    global $varname

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    if {[$var(frame) has wcs celestial $var(system)]} {
	set coord [$var(frame) get crosshair \
		       $var(system) $var(sky) $var(skyformat)]
	set var(x) [lindex $coord 0]
	set var(y) [lindex $coord 1]
	set var(name) {}
    }
}

proc FPDestroy {varname} {
    upvar #0 $varname var

    global $varname
    global $var(catdb)
    global $var(tbldb)
    global $var(symdb)
    global $var(symdl)
    global ifp

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPDestroy $varname"
    }

    # stop timer if needed
    if {$var(blink)} {
	set var(blink) 0
	after cancel [list FPSelectTimer $varname]
    }

    # frame may have been deleted
    if {[info commands $var(frame)] != {}} {
	# unhighlite any makers
	if {[$var(frame) has fits]} {
	    $var(frame) marker catalog $varname unhighlite
	}
    }

    upvar #0 $var(symdl) svar
    if {[info exists svar(top)]} {
	if {[winfo exists $svar(top)]} {
	    FPSymDestroy $var(symdl)
	}
    }

    if {[info exists $var(symdb)]} {
	unset $var(symdb)
    }
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    set ii [lsearch $ifp(cats) $varname]
    if {$ii>=0} {
	set ifp(cats) [lreplace $ifp(cats) $ii $ii]
    }

    # plot window?
    if {$var(plot)} {
	PlotDestroy $var(plot,var)
    }

    # cat header?
    set vvarname ${varname}hdr
    global $vvarname
    if {[info exists $vvarname]} {
	SimpleTextDestroy $vvarname
    }

    ARDestroy $varname
}

proc FPEdit {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    $var(frame) marker catalog unselect all
    $var(frame) marker catalog unhighlite all

    FPGenerate $varname

    # regenerate the plot if needed
    if {$var(plot)} {
	FPPlotGenerate $varname
    }

    $var(tbl) configure \
	-state disabled \
	-selectmode extended
}

proc FPGetHeader {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    set t $var(tbldb)
    upvar #0 $t T

    if {[FPValidDB $var(tbldb)]} {
	set hdr {}

	# header
	set nl [expr $T(HLines)-2]
	for {set ll 1} {$ll <= $nl} {incr ll} {
	    append hdr "$T(H_$ll)\n"
	}
	append hdr "\n"

	# dump cols stats
	set nc $T(Ncols)
	for {set cc 1} {$cc <= $nc} {incr cc} {
	    append hdr "# name=[lindex $T(Header) [expr $cc-1]] "
	    if {[info exists ${t}(DataType)]} {
		append hdr "datatype=[lindex $T(DataType) [expr $cc-1]] "
	    }

	    if {[info exists ${t}(Id)]} {
		if {[lindex $T(Id) [expr $cc-1]] != {}} {
		    append hdr "id=[lindex $T(Id) [expr $cc-1]] "
		}
	    }

	    if {[info exists ${t}(ArraySize)]} {
		if {[lindex $T(ArraySize) [expr $cc-1]] != {}} {
		    append hdr "arraysize=[lindex $T(ArraySize) [expr $cc-1]] "
		}
	    }

	    if {[info exists ${t}(Width)]} {
		if {[lindex $T(Width) [expr $cc-1]] != {}} {
		    append hdr "width=[lindex $T(Width) [expr $cc-1]] "
		}
	    }

	    if {[info exists ${t}(Precision)]} {
		if {[lindex $T(Precision) [expr $cc-1]] != {}} {
		    append hdr "precision=[lindex $T(Precision) [expr $cc-1]] "
		}
	    }

	    if {[info exists ${t}(Unit)]} {
		if {[lindex $T(Unit) [expr $cc-1]] != {}} {
		    append hdr "unit=[lindex $T(Unit) [expr $cc-1]] "
		}
	    }

	    if {[info exists ${t}(Ref)]} {
		if {[lindex $T(Ref) [expr $cc-1]] != {}} {
		    append hdr "ref=[lindex $T(Ref) [expr $cc-1]] "
		}
	    }

	    if {[info exists ${t}(Ucd)]} {
		if {[lindex $T(Ucd) [expr $cc-1]] != {}} {
		    append hdr "ucd=[lindex $T(Ucd) [expr $cc-1]] "
		}
	    }

	    if {[info exists ${t}(Description)]} {
		if {[lindex $T(Description) [expr $cc-1]] != {}} {
		    append hdr "[lindex $T(Description) [expr $cc-1]] "
		}
	    }
	    append hdr "\n"
	}

	return $hdr
    }
    return {}
}

proc FPHeader {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    SimpleTextDialog ${varname}hdr "$var(title) [msgcat::mc {Header}]" \
	80 20 insert top [FPGetHeader $varname]
}

proc FPKey {which key} {
    global ifp
    global ds9

    set ifp(key) $key
    set ifp(key,update) {}

    $which marker catalog key
    foreach rr $ifp(key,update) {
	eval "FPGenerateUpdate [lindex $rr 0] [lindex $rr 1]"
    }

    set ifp(key) {}
    set ifp(key,update) {}
}

proc FPPageSetup {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    switch $ds9(wm) {
	x11 -
	aqua {}
	win32 {win32 pm pagesetup}
    }
}

proc FPPrint {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global ds9
    switch $ds9(wm) {
	x11 -
	aqua -
	win32 {FPPSPrint $varname}
    }	
}

proc FPPSPrint {varname} {
    upvar #0 $varname var
    global $varname

    if {[PRPrintDialog]} { 
	if {[catch {FPPostScript $varname} printError]} {
	    Error "[msgcat::mc {An error has occurred while printing}] $printError"
	}
    }
}

proc FPPostScript {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global ps

    if {$ps(dest) == "file"} {
	set ch [open "| cat > $ps(filename,txt)" w]
    } else {
	set ch [open "| $ps(cmd)" w]
    }

    starbase_writefp $var(tbldb) $ch
    close $ch
}

proc FPServer {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPServer $varname"
    }

    if {($var(x) != {}) && ($var(y) != {}) && ($var(radius) != {})} {
	ARStatus $varname "Searching [string range $var(title) 0 50]"

	switch $var(format) {
	    cxc {FPCXC $varname}
	    hla {FPHLA $varname}
	}
    } else {
	ARError $varname [msgcat::mc {Please specify radius and either name or (ra,dec)}]
    }
}

proc FPUpdate {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,footprint)} {
	puts stderr "FPUpdate $varname"
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    if {[$var(frame) has wcs celestial $var(system)]} {
	set coord [$var(frame) get fits center \
		       $var(system) $var(sky) $var(skyformat)]
	set var(x) [lindex $coord 0]
	set var(y) [lindex $coord 1]

	set size [$var(frame) get fits size \
		      $var(system) $var(sky) $var(rformat)]
	set ww [lindex $size 0]
	set hh [lindex $size 1]
	set var(radius) [expr ($ww+$hh)/4]
	set var(name) {}
    }
}

proc FPWCSMenuUpdate {varname} {
    upvar #0 $varname var
    global $varname

    ARCoord $varname

    set var(psystem) $var(system)
    set var(psky) $var(sky)
    CoordMenuButtonCmd $varname psystem psky {}
    FPColsUpdate $varname
}

proc FPColsUpdate {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    global pds9

    switch $var(psystem) {
	image -
	physical -
	detector -
	amplifier {
	    $var(raname) configure -text {X} \
		-font [font actual TkDefaultFont]
	    $var(decname) configure -text {Y} \
		-font [font actual TkDefaultFont]
	}
	default {
	    if {[$var(frame) has wcs celestial $var(psystem)]} {
		switch $var(psky) {
		    fk4 -
		    fk5 -
		    icrs {
			$var(raname) configure -text "\u03b1" \
			    -font "$ds9(times) $pds9(font,size)"
			$var(decname) configure -text "\u03b4" \
			    -font "$ds9(times) $pds9(font,size)"
		    }
		    galactic {
			$var(raname) configure -text {l} \
			    -font "{$ds9(times)} $pds9(font,size) normal italic"
			$var(decname) configure -text {b} \
			    -font "{$ds9(times)} $pds9(font,size) normal italic"
		    }
		    ecliptic {
			$var(raname) configure -text "\u03bb" \
			    -font "$ds9(times) $pds9(font,size)"
			$var(decname) configure -text "\u03b2" \
			    -font "$ds9(times) $pds9(font,size)"
		    }
		}
	    } else {
		$var(raname) configure -text {X} \
		    -font [font actual TkDefaultFont]
		$var(decname) configure -text {Y} \
		    -font [font actual TkDefaultFont]
	    }
	}
    }
}

# Edit Dialog

proc FPEditDialog {varname which db} {
    upvar #0 $varname var
    global $varname
    global ds9
    global ed

    set w ".${varname}edit"
    set mb ".${varname}editmb"

    set ed(ok) 0
    set ed(text) $w.param.txt

    DialogCreate $w [msgcat::mc {Edit}] ed(ok)

    $w configure -menu $mb
    menu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command {set ed(ok) 1}
    $mb.file add command -label [msgcat::mc {Clear}] \
	-command FPEditClear
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Load}]..." \
	-command FPEditLoad
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command FPEditSave
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command {set ed(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    menu $mb.edit
    $mb.edit add command -label [msgcat::mc {Undo}] \
	-command "$ed(text) edit undo" -accelerator "${ds9(ctrl)}Z"
    $mb.edit add command -label [msgcat::mc {Redo}] \
	-command "$ed(text) edit redo" -accelerator "${ds9(shiftctrl)}Z"
    $mb.edit add separator
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command "tk_textCut $ed(text)" -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command "tk_textCopy $ed(text)" -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command "tk_textPaste $ed(text)" -accelerator "${ds9(ctrl)}V"

    global $db
    # column
    $mb add cascade -label [msgcat::mc {Column}] -menu $mb.col
    if {[info exists $mb.col]} {
	destroy $mb.col
    }
    menu $mb.col
    if {[FPValidDB $db]} {
	set cnt -1
	foreach col [starbase_columns $db] {
	    $mb.col add command -label "$col" \
		-command "$ed(text) insert insert \{\$$col\}"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$mb.col entryconfig $col -columnbreak 1
	    }
	}
    }

    # operator
    $mb add cascade -label [msgcat::mc {Operator}] -menu $mb.op
    menu $mb.op
    $mb.op add command -label {-} \
	-command "$ed(text) insert insert {-}"
    $mb.op add command -label {!} \
	-command "$ed(text) insert insert {!}"
    $mb.op add command -label {(} \
				   -command "$ed(text) insert insert {(}"
	$mb.op add command -label {)} \
	-command "$ed(text) insert insert {)}"
    $mb.op add separator
    $mb.op add command -label {*} \
	-command "$ed(text) insert insert {*}"
    $mb.op add command -label {/} \
	-command "$ed(text) insert insert {/}"
    $mb.op add command -label {%} \
	-command "$ed(text) insert insert {%}"
    $mb.op add command -label {+} \
	-command "$ed(text) insert insert {+}"
    $mb.op add command -label {-} \
	-command "$ed(text) insert insert {-}"
    $mb.op add separator
    $mb.op add command -label {<} \
	-command "$ed(text) insert insert {<}"
    $mb.op add command -label {>} \
	-command "$ed(text) insert insert {>}"
    $mb.op add command -label {<=} \
	-command "$ed(text) insert insert {<=}"
    $mb.op add command -label {>=} \
	-command "$ed(text) insert insert {>=}"
    $mb.op add command -label {==} \
	-command "$ed(text) insert insert {==}"
    $mb.op add command -label {!=} \
	-command "$ed(text) insert insert {!=}"
    $mb.op add separator
    $mb.op add command -label {&&} \
	-command "$ed(text) insert insert {&&}"
    $mb.op add command -label {||} \
	-command "$ed(text) insert insert {||}"

    # operator
    $mb add cascade -label [msgcat::mc {Math Function}] -menu $mb.math
    menu $mb.math
    $mb.math add command -label {acos} \
	-command "$ed(text) insert insert {acos()}"
    $mb.math add command -label {asin} \
	-command "$ed(text) insert insert {asin()}"
    $mb.math add command -label {atan} \
	-command "$ed(text) insert insert {atan()}"
    $mb.math add command -label {atan2} \
	-command "$ed(text) insert insert {atan2(,)}"
    $mb.math add command -label {ceil} \
	-command "$ed(text) insert insert {ceil()}"
    $mb.math add command -label {cos} \
	-command "$ed(text) insert insert {cos()}"
    $mb.math add command -label {cosh} \
	-command "$ed(text) insert insert {cosh()}"
    $mb.math add command -label {exp} \
	-command "$ed(text) insert insert {exp()}"
    $mb.math add command -label {floor} \
	-command "$ed(text) insert insert {floor()}"
    $mb.math add command -label {fmod} \
	-command "$ed(text) insert insert {fmod(,)}"
    $mb.math add command -label {hypot} \
	-command "$ed(text) insert insert {hypot(,)}"
    $mb.math add command -label {log} \
	-command "$ed(text) insert insert {log()}"
    $mb.math add command -label {log10} \
	-command "$ed(text) insert insert {log10()}"
    $mb.math add command -label {pow} \
        -command "$ed(text) insert insert {pow(,)}"
    $mb.math add command -label {sin} \
	-command "$ed(text) insert insert {sin()}"
    $mb.math add command -label {sinh} \
	-command "$ed(text) insert insert {sinh()}"
    $mb.math add command -label {sqrt} \
	-command "$ed(text) insert insert {sqrt()}"
    $mb.math add command -label {tan} \
	-command "$ed(text) insert insert {tan()}"
    $mb.math add command -label {tanh} \
	-command "$ed(text) insert insert {tanh()}"
    $mb.math add command -label {abs} \
	-command "$ed(text) insert insert {abs()}"
    $mb.math add command -label {double} \
	-command "$ed(text) insert insert {double()}"
    $mb.math add command -label {int} \
	-command "$ed(text) insert insert {int()}"
    $mb.math add command -label {round} \
	-command "$ed(text) insert insert {round()}"

    # Text  
    set f [ttk::frame $w.param]

    text $f.txt \
	-height 10 \
	-width 60 \
	-yscrollcommand "$f.yscroll set" \
	-xscrollcommand "$f.xscroll set" \
	-undo true \
	-wrap none 
    ttk::scrollbar $f.yscroll -command [list $ed(text) yview] \
	-orient vertical
    ttk::scrollbar $f.xscroll -command [list $ed(text) xview] \
	-orient horizontal

    grid $ed(text) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
        -default active 
    ttk::button $f.clear -text [msgcat::mc {Clear}] -command FPEditClear
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.clear $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.param -side top -fill both -expand true
    pack $w.buttons $w.sep -side bottom -fill x

    $ed(text) insert end $var($which)
    $ed(text) see end

    DialogCenter $w
    DialogWait $w ed(ok) $w.buttons.ok

    if {$ed(ok)} {
	set flt [$ed(text) get 1.0 end]
	catch {regsub {\n} $flt " " flt}
	set var($which) [string trim $flt]
    }

    DialogDismiss $w
    destroy $mb

    set rr $ed(ok)
    unset ed
    return $rr
}

proc FPEditClear {} {
    global ed

    $ed(text) delete 1.0 end
}

proc FPEditSave {} {
    global ed

    set fn [SaveFileDialog catfltfbox]
    if {$fn != {}} {
	if {[catch {open $fn w} fp]} {
	    Error "[msgcat::mc {Unable to open file}] $fn: $fp"
	    return
	}
	set flt [$ed(text) get 1.0 end]
	catch {regsub {\n} $flt " " flt}
	puts $fp [string trim $flt]
	catch {close $fp}
    }
}

proc FPEditLoad {} {
    global ed

    set fn [OpenFileDialog catfltfbox]
    if {$fn != {}} {
	if {[catch {open $fn r} fp]} {
	    Error "[msgcat::mc {Unable to open file}] $fn: $fp"
	    return
	}
	$ed(text) delete 1.0 end
	$ed(text) insert end [read -nonewline $fp]
	$ed(text) see end
	catch {close $fp}
    }
}

proc UpdateFPDialog {} {
    global ifp

    foreach varname $ifp(cats) {
	FPDialogUpdate $varname
    }
}


