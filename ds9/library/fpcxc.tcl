#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FPCXC {varname} {
    upvar #0 $varname var
    global $varname
    global pcat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "FPCXC $varname"
    }

    FPCXCVOT $varname
}

proc FPCXCVOT {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "FPCXCVOT $varname"
    }

    set var(proc,parser) VOTParse
    
    # coord (degrees)
    switch $var(skyformat) {
	degrees {
	    set xx $var(x)
	    set yy $var(y)
	}
	sexagesimal {
	    set xx [h2d [Sex2H $var(x)]]
	    set yy [Sex2D $var(y)]
	}
    }

    # size (degrees)
    switch $var(rformat) {
	degrees {
	    set rr $var(radius)
	}
	arcmin {
	    set rr [expr $var(radius)/60.]
	}
	arcsec {
	    set rr [expr $var(radius)/60./60.]
	}
    }

    # output
    if {$var(allcols)} {
	set type 3
    } else {
	set type 2
    }

    # query
    set var(query) [http::formatQuery RA $xx DEC $yy SR $rr VERB $type]
    set var(url) "http://cda.cfa.harvard.edu/cscvo/coneSearch"

    FPLoad $varname
}

proc FPCXCAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {Acknowledgments for CXC

Request for Acknowledgment of Use of the Chandra Source Catalog

Users are kindly requested to acknowledge in the acknowledgment
section of any resulting publications their use of the Chandra Source
Catalog.

This will help us greatly to keep track of catalog usage, information
that is essential for providing full accountability of our work and
services, as well as for planning future services.

The following language is suggested:

This research has made use of data obtained from the Chandra Source
Catalog, provided by the Chandra X-ray Center (CXC) as part of the
Chandra Data Archive.

We would like to remind you that it is also very helpful for us if you
could include Dataset Identifiers in the manuscript. The Dataset
Identifier for the Chandra Source Catalog is:

ADS/Sa.CXO#CSC
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 10 insert top $msg
}
