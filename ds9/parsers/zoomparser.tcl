package provide DS9 1.0

######
# Begin autogenerated taccle (version 1.3) routines.
# Although taccle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/taccle for other details.
######

namespace eval zoom {
    variable yylval {}
    variable table
    variable rules
    variable token {}
    variable yycnt 0
    variable yyerr 0
    variable save_state 0

    namespace export yylex
}

proc zoom::YYABORT {} {
    return -code return 1
}

proc zoom::YYACCEPT {} {
    return -code return 0
}

proc zoom::YYERROR {} {
    variable yyerr
    set yyerr 1
}

proc zoom::yyclearin {} {
    variable token
    variable yycnt
    set token {}
    incr yycnt -1
}

proc zoom::yyerror {s} {
    puts stderr $s
}

proc zoom::setupvalues {stack pointer numsyms} {
    upvar 1 1 y
    set y {}
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        set y [lindex $stack $pointer]
        incr pointer
    }
}

proc zoom::unsetupvalues {numsyms} {
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        unset y
    }
}

array set zoom::table {
  15:259 shift
  0:257 shift
  0:258 shift
  0:260 shift
  2:257 reduce
  5:0,target 6
  9:0 accept
  8:257,target 1
  6:259,target 9
  0:261 shift
  0:266,target 8
  2:258 reduce
  11:0 reduce
  2:259 reduce
  0:263 shift
  12:266,target 16
  10:268,target 15
  0:264 shift
  1:259,target 1
  4:259 reduce
  0:265 shift
  8:257 shift
  6:259 reduce
  0:266 goto
  13:259,target 10
  8:258 shift
  0:267 goto
  8:259 reduce
  0:265,target 7
  8:266,target 14
  6:0,target 9
  0:269 goto
  16:0,target 15
  2:0 reduce
  1:258,target 1
  7:262,target 11
  8:266 goto
  6:0 reduce
  0:264,target 6
  4:259,target 8
  16:259,target 15
  1:257,target 1
  17:0,target 5
  12:0 reduce
  10:0,target 3
  11:259,target 13
  0:263,target 5
  16:0 reduce
  12:257 shift
  10:259 reduce
  12:258 shift
  12:259 reduce
  8:0,target 11
  7:270,target 13
  3:0 reduce
  1:0,target 1
  14:259 reduce
  11:0,target 13
  2:259,target 2
  16:259 reduce
  1:257 reduce
  14:259,target 12
  1:258 reduce
  12:266 goto
  10:268 goto
  7:258,target 2
  1:259 reduce
  3:259 reduce
  13:0 reduce
  9:0,target 0
  0:261,target 4
  2:258,target 2
  7:257 shift
  2:0,target 2
  5:259 reduce
  12:0,target 14
  7:258 shift
  17:0 reduce
  7:257,target 1
  5:259,target 6
  7:262 shift
  0:260,target 3
  2:257,target 2
  0:269,target 10
  4:0 reduce
  7:266 goto
  12:259,target 14
  3:0,target 7
  13:0,target 10
  8:0 reduce
  7:266,target 12
  7:270 goto
  10:0 reduce
  0:258,target 2
  8:259,target 11
  14:0 reduce
  12:258,target 2
  3:259,target 7
  4:0,target 8
  14:0,target 12
  15:259,target 17
  0:257,target 1
  1:0 reduce
  11:259 reduce
  8:258,target 2
  0:267,target 9
  13:259 reduce
  12:257,target 1
  10:259,target 4
  5:0 reduce
}

array set zoom::rules {
  9,l 269
  11,l 269
  15,l 270
  2,l 266
  6,l 269
  12,l 269
  3,l 267
  7,l 269
  13,l 270
  0,l 271
  4,l 268
  8,l 269
  10,l 269
  14,l 270
  1,l 266
  5,l 267
}

array set zoom::rules {
  5,dc 3
  0,dc 1
  12,dc 2
  8,dc 1
  3,dc 1
  15,dc 2
  10,dc 2
  6,dc 1
  1,dc 1
  13,dc 1
  9,dc 1
  4,dc 0
  11,dc 1
  7,dc 1
  2,dc 1
  14,dc 1
}

array set zoom::rules {
  13,line 44
  7,line 36
  10,line 39
  4,line 31
  1,line 27
  15,line 46
  9,line 38
  12,line 41
  6,line 35
  3,line 31
  4,e 1
  14,line 45
  8,line 37
  11,line 40
  5,line 32
  2,line 28
}

array set zoom::lr1_table {
  13,trans {}
  17 {{5 0 2}}
  0 {{0 0 0} {3 0 0} {5 0 0} {6 {0 259} 0} {7 {0 259} 0} {8 {0 259} 0} {9 {0 259} 0} {10 {0 259} 0} {11 {0 259} 0} {12 {0 259} 0} {1 {0 257 258 259} 0} {2 {0 257 258 259} 0}}
  14,trans {}
  18 {{15 {0 259} 2}}
  1 {{1 {0 257 258 259} 1}}
  19 {{5 0 3}}
  15,trans {}
  2 {{2 {0 257 258 259} 1}}
  16,trans {}
  3 {{7 {0 259} 1}}
  17,trans {{259 19}}
  4 {{8 {0 259} 1}}
  0,trans {{257 1} {258 2} {260 3} {261 4} {263 5} {264 6} {265 7} {266 8} {267 9} {269 10}}
  18,trans {}
  1,trans {}
  5 {{6 {0 259} 1}}
  19,trans {}
  2,trans {}
  6 {{9 {0 259} 1}}
  3,trans {}
  7 {{10 {0 259} 1} {13 {0 259} 0} {14 {0 259} 0} {15 {0 259} 0} {1 {0 257 258 259} 0} {2 {0 257 258 259} 0}}
  4,trans {}
  8 {{11 {0 259} 1} {12 {0 259} 1} {1 {0 259} 0} {2 {0 259} 0}}
  5,trans {}
  9 {{0 0 1}}
  10 {{3 0 1} {5 0 1} {4 259 0}}
  11 {{13 {0 259} 1}}
  6,trans {}
  7,trans {{257 1} {258 2} {262 11} {266 12} {270 13}}
  12 {{14 {0 259} 1} {15 {0 259} 1} {1 {0 259} 0} {2 {0 259} 0}}
  8,trans {{257 14} {258 15} {266 16}}
  13 {{10 {0 259} 2}}
  10,trans {{268 17}}
  9,trans {}
  14 {{1 {0 259} 1}}
  11,trans {}
  15 {{2 {0 259} 1}}
  12,trans {{257 14} {258 15} {266 18}}
  16 {{12 {0 259} 2}}
}

array set zoom::token_id_table {
  264,line 18
  270,t 1
  269,t 1
  265,title TO
  261,line 15
  257,t 0
  270,title {}
  269,title {}
  257,line 7
  262,t 0
  270,line 43
  269,line 34
  259,title string
  260,title CLOSE
  266,t 1
  271,t 1
  264,title OUT
  error error
  266,line 26
  268,title {}
  error,line 25
  258,t 0
  263,line 17
  error,title {}
  263,t 0
  259,line 10
  260,line 14
  258,title float
  267,t 1
  263,title OPEN
  268,line 31
  267,title {}
  257 INT_
  258 REAL_
  259,t 0
  259 STRING_
  260 CLOSE_
  260,t 0
  261 IN_
  265,line 19
  262 FIT_
  263 OPEN_
  257,title integer
  264 OUT_
  264,t 0
  265 TO_
  262,line 16
  266 numeric
  267 command
  268,t 1
  268 @PSEUDO1
  262,title FIT
  0 {$}
  0,t 0
  270 zoomTo
  269 zoom
  271 start'
  error,t 0
  258,line 8
  266,title {}
  271,line 47
  271,title {}
  261,t 0
  267,line 30
  265,t 0
  261,title IN
}

proc zoom::yyparse {} {
    variable yylval
    variable table
    variable rules
    variable token
    variable yycnt
    variable lr1_table
    variable token_id_table
    variable yyerr
    variable save_state

    set yycnt 0
    set state_stack {0}
    set value_stack {{}}
    set token ""
    set accepted 0
    set yyerr 0
    set save_state 0

    while {$accepted == 0} {
        set state [lindex $state_stack end]
        if {$token == ""} {
            set yylval ""
            set token [yylex]
            set buflval $yylval
	    if {$token>0} {
	        incr yycnt
            }
        }
        if {![info exists table($state:$token)] || $yyerr} {
	    if {!$yyerr} {
	        set save_state $state
	    }
            # pop off states until error token accepted
            while {[llength $state_stack] > 0 && \
                       ![info exists table($state:error)]} {
                set state_stack [lrange $state_stack 0 end-1]
                set value_stack [lrange $value_stack 0 \
                                       [expr {[llength $state_stack] - 1}]]
                set state [lindex $state_stack end]
            }
            if {[llength $state_stack] == 0} {
 
	        set rr { }
                if {[info exists lr1_table($save_state,trans)] && [llength $lr1_table($save_state,trans)] >= 1} {
                    foreach trans $lr1_table($save_state,trans) {
                        foreach {tok_id nextstate} $trans {
			    set ss $token_id_table($tok_id,title)
			    if {$ss != {}} {
			        append rr "$ss, "
                            }
                        }
                    }
                }
		set rr [string trimleft $rr { }]
		set rr [string trimright $rr {, }]
                yyerror "parse error, expecting: $rr"


                return 1
            }
            lappend state_stack [set state $table($state:error,target)]
            lappend value_stack {}
            # consume tokens until it finds an acceptable one
            while {![info exists table($state:$token)]} {
                if {$token == 0} {
                    yyerror "end of file while recovering from error"
                    return 1
                }
                set yylval {}
                set token [yylex]
                set buflval $yylval
            }
            continue
        }
        switch -- $table($state:$token) {
            shift {
                lappend state_stack $table($state:$token,target)
                lappend value_stack $buflval
                set token ""
            }
            reduce {
                set rule $table($state:$token,target)
                set ll $rules($rule,l)
                if {[info exists rules($rule,e)]} {
                    set dc $rules($rule,e)
                } else {
                    set dc $rules($rule,dc)
                }
                set stackpointer [expr {[llength $state_stack]-$dc}]
                setupvalues $value_stack $stackpointer $dc
                set _ $1
                set yylval [lindex $value_stack end]
                switch -- $rule {
                    1 { set _ $1 }
                    2 { set _ $1 }
                    4 { global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT} }
                    6 { PanZoomDialog }
                    7 { PanZoomDestroyDialog }
                    8 { Zoom 2 2 }
                    9 { Zoom .5 .5 }
                    11 { Zoom $1 $1 }
                    12 { Zoom $1 $2 }
                    13 { ZoomToFit }
                    14 { ZoomTo $1 $1 }
                    15 { ZoomTo $1 $2 }
                }
                unsetupvalues $dc
                # pop off tokens from the stack if normal rule
                if {![info exists rules($rule,e)]} {
                    incr stackpointer -1
                    set state_stack [lrange $state_stack 0 $stackpointer]
                    set value_stack [lrange $value_stack 0 $stackpointer]
                }
                # now do the goto transition
                lappend state_stack $table([lindex $state_stack end]:$ll,target)
                lappend value_stack $_
            }
            accept {
                set accepted 1
            }
            goto -
            default {
                puts stderr "Internal parser error: illegal command $table($state:$token)"
                return 2
            }
        }
    }
    return 0
}

######
# end autogenerated taccle functions
######

proc zoom::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}