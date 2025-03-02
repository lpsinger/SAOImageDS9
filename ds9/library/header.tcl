#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc DisplayHeaderMenu {} {
    global current

    # possible cases
    #  image primary
    #  image xtension
    #  compressed primary
    #  compressed xtension
    #  bin table xtension
    #  hpx xtension
    #  cube primary
    #  cube xtension
    #  multiple xtension cube
    #  multiple file cube
    #  mosaic extension
    #  mosaic image xtension
    #  mosaic cube xtension
    #  mosaic image cube xtension

    set cnt [$current(frame) get fits count]

    if {$cnt > 0} {
	set slb(count) 0

	# check for primary
	set fn [$current(frame) get fits file name 1]
	set xten \
	    [string trim [$current(frame) get fits header 1 keyword {XTENSION}]]
	if {$xten != {}} {
	    set bb [string first {[} $fn]
	    if {$bb>0} {
		set pn [string range $fn 0 [expr $bb-1]]
	    } else {
		set pn "primary"
	    }
	    incr slb(count)
	    set slb($slb(count),item) $pn
	    set slb($slb(count),value) -1
	}

	set last {}
	for {set ii 1} {$ii <= $cnt} {incr ii} {
	    set fn [$current(frame) get fits file name $ii]
	    set bb [string first {[} $fn]
	    if {$bb<0} {
		set nn [$current(frame) get fits ext $ii]
		if {$nn > 0} {
		  set fn "$fn\[\]"
		}
	    }
	    
	    if {$fn != $last} {
		incr slb(count)
		set slb($slb(count),item) $fn
		set slb($slb(count),value) $ii
		set last $fn
	    }
	}

	if {$slb(count) <= 1} {
	    DisplayHeader 1 $fn
	} else {
	    if {[SLBDialog slb {Select Header} 40]} {
		DisplayHeader $slb(value) $slb(item)
	    }
	}
    }
}

proc DisplayHeader {id title} {
    global current
    global ds9

    set frame $current(frame)
    set varname "hd-$current(frame)-$id"
    global $varname

    set hh {}
    if {[$frame has fits]} {
	set hh [$frame get fits header $id]
    }
    SimpleTextDialog $varname $title 80 40 insert top $hh

    # create a special text tag for keywords
    upvar #0 $varname var
    $var(text) tag configure keyword -foreground $ds9(gui,bold)
    
    # color tag keywords
    set stop [$var(text) index end]
    for {set ii 1.0} {$ii<$stop} {set ii [expr $ii+1]} {
	$var(text) tag add keyword $ii "$ii +8 chars"
    }
}

proc UpdateHeaderDialog {} {
    global current

    set frame $current(frame)
    set cnt 1
    if {[$frame has fits mosaic]} {
	set cnt [$frame get fits count]
    }

    for {set id 1} {$id <= $cnt} {incr id} {
	set varname "hd-$frame-$id"
	global $varname
	if {![info exists $varname]} {
	    continue
	}

	upvar #0 $varname var
	$var(text) delete 1.0 end
	$var(text) insert end [$frame get fits header $id]

	# color tag keywords
	set stop [$var(text) index end]
	for {set ii 1.0} {$ii<$stop} {set ii [expr $ii+1]} {
	    $var(text) tag add keyword $ii "$ii +8 chars"
	}    
    }
}

proc DestroyHeader {frame} {
    set cnt 1
    if {[$frame has fits mosaic]} {
	set cnt [$frame get fits count]
    }

    for {set id 1} {$id <= $cnt} {incr id} {
	DestroyHeaderOne $frame $id
    }
}

proc DestroyHeaderOne {frame id} {
    set varname "hd-$frame-$id"
    global $varname
    if {[info exists $varname]} {
	SimpleTextDestroy $varname
    }
}

proc ProcessHeaderCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    header::YY_FLUSH_BUFFER
    header::yy_scan_string [lrange $var $i end]
    header::yyparse
    incr i [expr $header::yycnt-1]
}

proc DisplayHeaderCmd {id} {
    global current

    DisplayHeader $id [$current(frame) get fits file name $id]
}

proc CloseHeaderCmd {id} {
    global current

    DestroyHeaderOne $current(frame) $id
}

proc SaveHeaderCmd {id fn} {
    global current

    if {$fn != {}} {
	if {[catch {set ch [open "| cat > \"$fn\"" w]}]} {
	    Error [msgcat::mc {An error has occurred while saving}]
	    return
	}
	puts -nonewline $ch [$current(frame) get fits header $id]
	close $ch
    }
}
