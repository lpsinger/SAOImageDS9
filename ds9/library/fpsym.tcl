#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FPSymDef {} {
    global ifpsym

    set ifpsym(minrows) 8
    set ifpsym(mincols) 8
}

proc FPSymDialog {parent} {
    upvar #0 $parent pvar
    global $parent

    set varname $pvar(symdl)
    upvar #0 $varname var
    global $varname

    global ds9
    global ifpsym

    # main dialog
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set var(parent) $parent
    set var(symdb) $pvar(symdb)

    global $var(symdb)
    set var(row) 1

    # initialize
    if {$var(row) <= [starbase_nrows $var(symdb)]} {
	set var(condition) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) condition]]
	set var(color) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) color]]
	set var(width) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) width]]
	set var(dash) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) dash]]
	set var(font) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) font]]
	set var(font,size) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) fontsize]]
	set var(font,weight) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) fontweight]]
	set var(font,slant) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) fontslant]]
	set var(text) [starbase_get $var(symdb) $var(row) \
			   [starbase_colnum $var(symdb) text]]
	set var(size) [starbase_get $var(symdb) $var(row) \
			   [starbase_colnum $var(symdb) size]]
	set var(size2) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) size2]]
	set var(units) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) units]]
	set var(angle) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) angle]]
    }


    # create the window
    set w $var(top)
    set mb $var(mb)

    Toplevel $w $mb 7 [msgcat::mc {Symbol Editor}] "FPSymDestroy $varname"
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    # menu
    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command "FPSymApply $varname"
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command "FPSymSave $varname"
    $mb.file add command -label "[msgcat::mc {Load}]..." \
	-command "FPSymLoad $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Add}] \
	-command "FPSymAdd $varname"
    $mb.file add command -label [msgcat::mc {Delete}] \
	-command "FPSymRemove $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command "FPSymDestroy $varname"

    menu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command "EntryCut $var(top)" -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command "EntryCopy $var(top)" -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command "EntryPaste $var(top)" -accelerator "${ds9(ctrl)}V"

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.tcondition -text [msgcat::mc {If}] 
    ttk::entry $f.condition -textvariable ${varname}(condition) -width 40
    ttk::button $f.bcondition -text [msgcat::mc {Edit}] \
	-command "FPEditDialog $varname condition $pvar(catdb)"
    ttk::label $f.tthen -text [msgcat::mc {Then}] 
    ttk::label $f.tcolor -text [msgcat::mc {Color}] 
    ColorMenuButton $f.color $varname color {}
    ttk::label $f.twidth -text [msgcat::mc {Width}] 
    WidthDashMenuButton $f.width $varname width dash {} {}
    ttk::label $f.tfont -text [msgcat::mc {Font}] 
    FontMenuButton $f.font $varname font font,size font,weight font,slant {}
    ttk::label $f.ttext -text [msgcat::mc {Text}] 
    ttk::entry $f.text -textvariable ${varname}(text) -width 40
    ttk::button $f.btext -text [msgcat::mc {Edit}] \
	-command "FPEditDialog $varname text  $pvar(catdb)"
    ttk::label $f.tsize -text [msgcat::mc {Size/Radius}] 
    ttk::entry $f.size -textvariable ${varname}(size) -width 40
    ttk::button $f.bsize -text [msgcat::mc {Edit}] \
	-command "FPEditDialog $varname size $pvar(catdb)"
    ttk::label $f.tsize2 -text "[msgcat::mc {Size/Radius}] 2" 
    ttk::entry $f.size2 -textvariable ${varname}(size2) -width 40
    ttk::button $f.bsize2 -text [msgcat::mc {Edit}] \
	-command "FPEditDialog $varname size2 $pvar(catdb)"
    ttk::label $f.tunits -text [msgcat::mc {Units}] 
    tk_optionMenu $f.units ${varname}(units) \
	image physical degrees arcmin arcsec
    $f.units.menu configure
    ttk::label $f.tangle -text [msgcat::mc {Angle}] 
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 40
    ttk::button $f.bangle -text [msgcat::mc {Edit}] \
	-command "FPEditDialog $varname angle $pvar(catdb)"

    grid $f.tcondition $f.condition $f.bcondition -padx 2 -pady 2 -sticky w
    grid $f.tthen -padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w
    grid $f.twidth $f.width -padx 2 -pady 2 -sticky w
    grid $f.tfont $f.font -padx 2 -pady 2 -sticky w
    grid $f.ttext $f.text $f.btext -padx 2 -pady 2 -sticky w
    grid $f.tsize $f.size $f.bsize -padx 2 -pady 2 -sticky w
    grid $f.tsize2 $f.size2 $f.bsize2 -padx 2 -pady 2 -sticky w
    grid $f.tunits $f.units -padx 2 -pady 2 -sticky w
    grid $f.tangle $f.angle $f.bangle -padx 2 -pady 2 -sticky w

    # Table
    set f [ttk::frame $w.tbl]

    set var(tbl) [table $f.t \
		      -state disabled \
		      -usecommand 0 \
		      -variable $var(symdb) \
		      -colorigin 1 \
		      -roworigin 0 \
		      -cols $ifpsym(mincols) \
		      -rows $ifpsym(minrows) \
		      -width -1 \
		      -height -1 \
		      -maxwidth 550 \
		      -maxheight 300 \
		      -titlerows 1 \
		      -xscrollcommand [list $f.xscroll set]\
		      -yscrollcommand [list $f.yscroll set]\
		      -selecttype row \
		      -selectmode single \
		      -anchor w \
		      -font [font actual TkDefaultFont] \
		      -browsecommand [list FPSymSelectCB $varname]
		 ]

    ttk::scrollbar $f.yscroll -command [list $var(tbl) yview] -orient vertical
    ttk::scrollbar $f.xscroll -command [list $var(tbl) xview] -orient horizontal

    grid $var(tbl) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command "FPSymApply $varname"
    ttk::button $f.add -text [msgcat::mc {Add}] \
	-command "FPSymAdd $varname"
    ttk::button $f.remove -text [msgcat::mc {Delete}] \
	-command "FPSymRemove $varname"
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command "FPSymDestroy $varname"
    pack $f.apply $f.add $f.remove $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sparam -orient horizontal
    ttk::separator $w.sstatus -orient horizontal
    pack $w.buttons $w.sstatus -side bottom -fill x
    pack $w.param $w.sparam -side top -fill x
    pack $w.tbl -side top -fill both -expand true

    FPSymTable $varname

    $var(tbl) selection set $var(row),1
}

proc FPSymDestroy {varname} {
    upvar #0 $varname var
    global $varname

    destroy $var(top)
    destroy $var(mb)

    unset var
}

proc FPSymApply {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)

    if {$var(row) != {}} {
	if {$var(row) <= [starbase_nrows $var(symdb)]} {
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) condition] $var(condition)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) color] $var(color)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) width] $var(width)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) dash] $var(dash)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) font] $var(font)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) fontsize] $var(font,size)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) fontweight] $var(font,weight)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) fontslant] $var(font,slant)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) text] $var(text)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) size] $var(size)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) size2] $var(size2)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) units] $var(units)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) angle] $var(angle)
	}
    }

    FPSymUpdate $varname
}

proc FPSymAdd {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)
    global pfp

    set row [expr [starbase_nrows $var(symdb)]+1]
    starbase_rowins $var(symdb) $row
    set var(color) {}
    set var(width) {}
    set var(dash) {}
    set var(font) {}
    set var(font,size) {}
    set var(font,weight) {}
    set var(font,slant) {}
    set var(text) {}
    set var(size) {}
    set var(size2) {}
    set var(units) {}
    set var(angle) {}
}

# Support

proc FPSymDBInit {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)
    global pfp

    if {[info exists $var(symdb)]} {
	unset $var(symdb)
    }

    starbase_new $var(symdb) condition color width dash \
	font fontsize fontweight fontslant text size size2 units angle
    starbase_rowins $var(symdb) 1
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) color] $pfp(sym,color)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) width] $pfp(sym,width)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) dash] $pfp(sym,dash)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) font] $pfp(sym,font)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) fontsize] $pfp(sym,font,size)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) fontweight] $pfp(sym,font,weight)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) fontslant] $pfp(sym,font,slant)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) units] $pfp(sym,units)
}

proc FPSymUpdate {varname} {
    upvar #0 $varname var
    global $varname

    FPGenerate $var(parent)
}

proc FPSymTable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)
    global ifpsym

    set nc [starbase_ncols $var(symdb)]
    if { $nc > $ifpsym(mincols)} {
	$var(tbl) configure -cols $nc
    } else {
	$var(tbl) configure -cols $ifpsym(mincols)
    }

    # add header row
    set nr [expr [starbase_nrows $var(symdb)]+1] 
    if {$nr > $ifpsym(minrows)} {
	$var(tbl) configure -rows $nr
    } else {
	$var(tbl) configure -rows $ifpsym(minrows)
    }
}

proc FPSymSelectCB {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)

    set ss "[$var(tbl) curselection]"
    set var(row) [string trim [lindex [split $ss ,] 0]]
    if {$var(row) != {}} {
	if {$var(row) <= [starbase_nrows $var(symdb)]} {
	    set var(condition) [starbase_get $var(symdb) $var(row) \
				    [starbase_colnum $var(symdb) condition]]
	    set var(color) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) color]]
	    set var(width) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) width]]
	    set var(dash) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) dash]]
	    set var(font) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) font]]
	    set var(font,size) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) fontsize]]
	    set var(font,weight) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) fontweight]]
	    set var(font,slant) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) fontslant]]
	    set var(text) [starbase_get $var(symdb) $var(row) \
			       [starbase_colnum $var(symdb) text]]
	    set var(size) [starbase_get $var(symdb) $var(row) \
			       [starbase_colnum $var(symdb) size]]
	    set var(size2) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) size2]]
	    set var(units) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) units]]
	    set var(angle) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) angle]]
	    return
	}
    }

    FPSymClear $varname
}
