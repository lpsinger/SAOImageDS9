#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# catreg -- convert catalog table into region string
proc FPReg {varname interactive resultname} {
    upvar $resultname result

    upvar #0 $varname var
    global $varname
    global $var(tbldb)

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

    # for each row in the catalog table ...
    for {set ii 1} {$ii <= $nrows} {incr ii} {

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

	# props
	set color green
	set width 1
	set dash 0

	# final substitution and append result
	# init result for substitutions
	if {$interactive} {
	    set template "\${sys};point(\${xx} \${yy}) # color=\${color} width=\${width} dash=\${dash} tag={${varname}} tag={${varname}.\${ii}} select=0 edit=0 move=0 rotate=0 delete=1 highlite=1 callback=delete FPDeleteCB {${varname}.\${ii}} callback=highlite FPHighliteCB {${varname}.\${ii}} callback=unhighlite FPUnhighliteCB {${varname}.\${ii}}\n"
	} else {
	    set template "\${sys};point(\${xx} \${yy}) # color=\${color} width=\${width} dash=\${dash} tag=$varname\n"
	}
	append result [subst $template]
    }
}
