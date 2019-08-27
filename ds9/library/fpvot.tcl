#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# SAMP

proc FPVOTURL {url catalog title} {
    if {[string length $url] == 0} {
	return
    }

    ParseURL $url r
    switch -- $r(scheme) {
	ftp {FPVOTFTP $r(authority) $r(path)}
	file {FPVOTFile $r(path)}
	http -
	https -
	default {FPVOTHTTP $url $catalog $title}
    }
}

proc FPVOTFTP {host path} {
    global loadParam
    global ds9
    global debug

    set ftp [ftp::Open $host "ftp" "-ds9@" -mode passive]
    if {$ftp > -1} {
	set fn [tmpnam [file extension $path]]
	set ftp::VERBOSE $debug(tcl,ftp)
	set "ftp::ftp${ftp}(Output)" FTPLog
	ftp::Type $ftp binary
	if {[ftp::Get $ftp $path $fn]} {
	    FPVOTFile $fn
	}

	ftp::Close $ftp

	if {[file exists $fn]} {
	    catch {file delete -force $fn}
	}
    }
}

proc FPVOTHTTP {url catalog title} {
    global ifp

    FPDialog catvot {} $catalog $title none

    set varname [lindex $ifp(cats) end]
    upvar #0 $varname var
    global $varname

    set ${varname}(query) {}
    set ${varname}(url) $url
    set ${varname}(proc,parser) VOTParse

    FPLoad $varname
}

proc FPVOTFile {fn} {
    global ifp

    FPDialog catvot {} {} {} none
    if {$fn != {}} {
 	FPLoadFn [lindex $ifp(cats) end] $fn VOTRead
    }
}

