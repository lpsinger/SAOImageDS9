#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# catreg -- convert catalog table into region string
proc FPReg {varname row interactive resultname} {
    upvar $resultname result

    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global $var(symdb)

    # init result
    set result {}

    # How to process each field of a filter
    # -------------------------------------
    # condition: subst/expr
    # color: constant
    # width: constant
    # dash: constant
    # font: constant
    # fontsize: constant
    # fontweight: constant
    # fontslant: constant
    # text: subst

    # valid cols?
    if {$var(colx) == {} || $var(coly) == {}} {
	return
    }
    set colx [starbase_colnum $var(tbldb) $var(colx)]
    set coly [starbase_colnum $var(tbldb) $var(coly)]

    # do we have formats for colx and coly?
    if {[catch {starbase_hdrget $var(tbldb) UFMT} ff]} {
	set ff {}
	global errorInfo
	set errorInfo {}
     }
    set xformat  [lindex $ff 0]
    set yformat [lindex $ff 1]

    # else, do we have T(Units), i.e. votable
    set db $var(tbldb)
    upvar #0 $db T
    if {[info exists T(Unit)]} {
	set xformat [string trim [lindex $T(Unit) [expr $colx-1]] {"}]
	set yformat [string trim [lindex $T(Unit) [expr $coly-1]] {"}]
    }

    # process prologue
    append result "# Region file format: DS9 version 4.0\n"

    # for speed...
    # tbldb
    set nrows [starbase_nrows $var(tbldb)]
    set cols [starbase_columns $var(tbldb)]

    # system
    switch $var(psystem) {
	image -
	physical -
	detector -
	amplifier {set sys $var(psystem)}
	default {set sys "$var(psystem); $var(psky)"}
    }

    # symdb
    set snrows [starbase_nrows $var(symdb)]
    set sncond [starbase_colnum $var(symdb) condition]
    set sncolor [starbase_colnum $var(symdb) color]
    set snwidth [starbase_colnum $var(symdb) width]
    set sndash [starbase_colnum $var(symdb) dash]
    set snfont [starbase_colnum $var(symdb) font]
    set snfontsize [starbase_colnum $var(symdb) fontsize]
    set snfontweight [starbase_colnum $var(symdb) fontweight]
    set snfontslant [starbase_colnum $var(symdb) fontslant]
    set sntext [starbase_colnum $var(symdb) text]

    # for each row in the catalog table ...
    if {[string is integer -strict $row]} {
	set start $row
	set end $row
    } else {
	set start 1
	set end $nrows
    }

    # look for need to eval colnames (only used for conditionals and text
    set doEval 0
    for {set jj 1} {$jj <= $snrows} {incr jj} {
	set cond [starbase_get $var(symdb) $jj $sncond]
	set text [starbase_get $var(symdb) $jj $sntext]
	if {$cond!={} || $text!={}} {
	    set doEval 1
	}
    }

    for {set ii $start} {$ii <= $end} {incr ii} {
	if {$doEval} {
	    # define each colunm variable
	    foreach col $cols {
		set val [starbase_get $var(tbldb) $ii \
			     [starbase_colnum $var(tbldb) $col]]
		# here's a tough one-- what to do if the col is blank
		# for now, just set it to '0'
		if {[string trim "$val"] == {}} {
		    set val 0
		}
		eval "set \{$col\} \{$val\}"
	    }
	}

	# look through each filter
	for {set jj 1} {$jj <= $snrows} {incr jj} {
	    # eval condition
	    set cond [starbase_get $var(symdb) $jj $sncond]

	    if {$cond != {}} {
		set found 0

		# subst any column vars
		if {[catch {subst $cond} cc]} {
		    Error "Unable to evaluate condition $cc"
		    return
		}
		# evaluate filter
		if {[catch {expr $cc} found]} {
		    Error "Unable to evaluate condition $cc"
		    return
		}
	    } else {
		set found 1
	    }

	    # if not true, goto the next filter
	    if {!$found} {
		continue
	    }

	    # xx
	    set xx [starbase_get $var(tbldb) $ii $colx]
	    switch $xformat {
		{h:m:s} -
		{d:m:s} {set xx [uformat $xformat d $xx]}
	    }

	    # yy
	    set yy [starbase_get $var(tbldb) $ii $coly]
	    if {$yformat == {d:m:s}} {
		set yy [uformat $yformat d $yy]
	    }

	    # color
	    set color [starbase_get $var(symdb) $jj $sncolor]
	    if {$color == {}} {
		set color green
	    }

	    # width
	    set width [starbase_get $var(symdb) $jj $snwidth]
	    if {$width == {}} {
		set width 1
	    }

	    # dash
	    set dash [starbase_get $var(symdb) $jj $sndash]
	    if {$dash == {}} {
		set dash 0
	    }

            #font
	    set font [starbase_get $var(symdb) $jj $snfont]
	    if {$font == {}} {
		set font helvetica
	    }
	    set fontsize [starbase_get $var(symdb) $jj $snfontsize]
	    if {$fontsize == {}} {
		set fontsize 10
	    }
	    set fontweight [starbase_get $var(symdb) $jj $snfontweight]
	    if {$fontweight == {}} {
		set fontweight normal
	    }
	    set fontslant [starbase_get $var(symdb) $jj $snfontslant]
	    if {$fontslant == {}} {
		set fontslant roman
	    }

	    # text
	    set text [starbase_get $var(symdb) $jj $sntext]
	    if {$text != {}} {
		if {[catch {subst $text} tt]} {
		    Error "Unable to evaluate text $text"
		    return
		} else {
		    set text $tt
		}
	    }

	    # final substitution and append result
	    # init result for substitutions
	    if {$interactive} {
	        set template "\${sys};point(\${xx} \${yy}) # color=\${color} width=\${width} dash=\${dash} font=\{${font} ${fontsize} ${fontweight} ${fontslant}\} text=\{\${text}\} tag={${varname}} tag={${varname}.\${ii}} select=0 edit=0 move=0 rotate=0 delete=1 highlite=1 callback=delete FPDeleteCB {${varname}.\${ii}} callback=highlite FPHighliteCB {${varname}.\${ii}} callback=unhighlite FPUnhighliteCB {${varname}.\${ii}}\n"
	    } else {
		set template "\${sys};point(\${xx} \${yy}) # color=\${color} width=\${width} dash=\${dash} text=\{\${text}\} tag=$varname\n"
	    }
	    append result [subst $template]

	    # ok, we are done
	    break
	}
    }
}