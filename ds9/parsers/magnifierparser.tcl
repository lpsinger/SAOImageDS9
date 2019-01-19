package provide DS9 1.0

######
# Begin autogenerated taccle (version 1.3) routines.
# Although taccle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/taccle for other details.
######

namespace eval magnifier {
    variable yylval {}
    variable table
    variable rules
    variable token {}
    variable yycnt 0
    variable yyerr 0
    variable save_state 0

    namespace export yylex
}

proc magnifier::YYABORT {} {
    return -code return 1
}

proc magnifier::YYACCEPT {} {
    return -code return 0
}

proc magnifier::YYERROR {} {
    variable yyerr
    set yyerr 1
}

proc magnifier::yyclearin {} {
    variable token
    variable yycnt
    set token {}
    incr yycnt -1
}

proc magnifier::yyerror {s} {
    puts stderr $s
}

proc magnifier::setupvalues {stack pointer numsyms} {
    upvar 1 1 y
    set y {}
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        set y [lindex $stack $pointer]
        incr pointer
    }
}

proc magnifier::unsetupvalues {numsyms} {
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        unset y
    }
}

array set magnifier::table {
  9:262,target 6
  0:257 shift
  11:265 reduce
  0:258 shift
  5:0,target 4
  0:259 shift
  0:260 shift
  15:0,target 15
  13:265 reduce
  9:0 reduce
  8:257,target 1
  0:266,target 7
  0:261 shift
  11:0 reduce
  0:262 shift
  15:265 reduce
  17:265 reduce
  9:261,target 5
  5:265,target 4
  0:265 reduce
  15:0 reduce
  8:257 shift
  0:266 shift
  20:265 shift
  19:265 reduce
  8:258 shift
  0:267 shift
  2:265 reduce
  17:265,target 8
  13:273 goto
  8:260 shift
  8:259 shift
  0:268 shift
  0:265,target 1
  8:261 shift
  6:0,target 7
  0:269 shift
  0:270 goto
  4:265 reduce
  19:0 reduce
  16:0,target 16
  8:262 shift
  2:0 reduce
  6:265 reduce
  0:272 goto
  9:260,target 4
  9:259,target 3
  9:270,target 16
  8:265 reduce
  0:274 goto
  6:0 reduce
  8:265,target 1
  0:274,target 13
  8:270 goto
  17:0,target 8
  12:0 accept
  9:258,target 2
  0:0,target 1
  3:265,target 3
  15:265,target 15
  16:0 reduce
  9:257,target 1
  21:0 reduce
  8:0,target 1
  3:0 reduce
  18:0,target 9
  10:263 shift
  1:0,target 2
  11:0,target 17
  10:264 shift
  0:262,target 6
  6:265,target 7
  0:272,target 12
  10:264,target 18
  18:265,target 9
  1:265,target 2
  14:265 reduce
  10:271 goto
  16:265 reduce
  13:265,target 11
  13:0 reduce
  9:0,target 1
  0:261,target 5
  19:0,target 14
  8:262,target 6
  2:0,target 5
  18:265 reduce
  12:0,target 0
  1:265 reduce
  10:263,target 17
  9:257 shift
  17:0 reduce
  9:258 shift
  0:0 reduce
  3:265 reduce
  9:260 shift
  9:259 shift
  9:265,target 1
  9:261 shift
  5:265 reduce
  9:262 shift
  0:259,target 3
  0:260,target 4
  8:261,target 5
  7:265 shift
  0:269,target 10
  0:270,target 11
  4:0 reduce
  4:265,target 6
  21:0,target 12
  9:265 reduce
  3:0,target 3
  16:265,target 16
  13:0,target 10
  8:0 reduce
  11:265,target 17
  9:270 goto
  0:258,target 2
  13:273,target 20
  8:260,target 4
  8:259,target 3
  0:268,target 9
  8:270,target 15
  14:0 reduce
  10:271,target 19
  7:265,target 14
  4:0,target 6
  14:0,target 13
  18:0 reduce
  0:257,target 1
  1:0 reduce
  20:265,target 21
  19:265,target 14
  8:258,target 2
  0:267,target 8
  2:265,target 5
  14:265,target 13
  5:0 reduce
}

array set magnifier::rules {
  9,l 271
  11,l 273
  15,l 274
  2,l 270
  6,l 270
  12,l 272
  16,l 274
  3,l 270
  7,l 270
  13,l 274
  0,l 275
  17,l 274
  4,l 270
  8,l 271
  10,l 272
  14,l 274
  1,l 270
  5,l 270
}

array set magnifier::rules {
  5,dc 1
  0,dc 1
  17,dc 1
  12,dc 3
  8,dc 1
  3,dc 1
  15,dc 2
  10,dc 1
  6,dc 1
  1,dc 0
  13,dc 2
  9,dc 1
  4,dc 1
  16,dc 2
  11,dc 0
  7,dc 1
  2,dc 1
  14,dc 2
}

array set magnifier::rules {
  13,line 56
  7,line 46
  10,line 52
  4,line 43
  1,line 40
  15,line 58
  9,line 49
  12,line 53
  6,line 45
  3,line 42
  17,line 61
  14,line 57
  8,line 48
  11,line 52
  5,line 44
  2,line 41
  16,line 60
  11,e 1
}

array set magnifier::lr1_table {
  13,trans {{273 20}}
  17 {{8 {0 265} 1}}
  0 {{0 0 0} {10 0 0} {12 0 0} {13 {0 265} 0} {14 {0 265} 0} {15 {0 265} 0} {16 {0 265} 0} {17 {0 265} 0} {1 {0 265} 0} {2 {0 265} 0} {3 {0 265} 0} {4 {0 265} 0} {5 {0 265} 0} {6 {0 265} 0} {7 {0 265} 0}}
  14,trans {}
  18 {{9 {0 265} 1}}
  1 {{2 {0 265} 1}}
  15,trans {}
  20 {{12 0 2}}
  19 {{14 {0 265} 2}}
  2 {{5 {0 265} 1}}
  21 {{12 0 3}}
  16,trans {}
  3 {{3 {0 265} 1}}
  17,trans {}
  0,trans {{257 1} {258 2} {259 3} {260 4} {261 5} {262 6} {266 7} {267 8} {268 9} {269 10} {270 11} {272 12} {274 13}}
  4 {{6 {0 265} 1}}
  18,trans {}
  1,trans {}
  5 {{4 {0 265} 1}}
  20,trans {{265 21}}
  19,trans {}
  2,trans {}
  6 {{7 {0 265} 1}}
  21,trans {}
  3,trans {}
  7 {{13 {0 265} 1}}
  4,trans {}
  8 {{15 {0 265} 1} {1 {0 265} 0} {2 {0 265} 0} {3 {0 265} 0} {4 {0 265} 0} {5 {0 265} 0} {6 {0 265} 0} {7 {0 265} 0}}
  5,trans {}
  9 {{16 {0 265} 1} {1 {0 265} 0} {2 {0 265} 0} {3 {0 265} 0} {4 {0 265} 0} {5 {0 265} 0} {6 {0 265} 0} {7 {0 265} 0}}
  10 {{14 {0 265} 1} {8 {0 265} 0} {9 {0 265} 0}}
  6,trans {}
  11 {{17 {0 265} 1}}
  7,trans {{265 14}}
  12 {{0 0 1}}
  8,trans {{257 1} {258 2} {259 3} {260 4} {261 5} {262 6} {270 15}}
  13 {{10 0 1} {12 0 1} {11 265 0}}
  10,trans {{263 17} {264 18} {271 19}}
  9,trans {{257 1} {258 2} {259 3} {260 4} {261 5} {262 6} {270 16}}
  14 {{13 {0 265} 2}}
  11,trans {}
  15 {{15 {0 265} 2}}
  12,trans {}
  16 {{16 {0 265} 2}}
}

array set magnifier::token_id_table {
  264,line 15
  270,t 1
  269,t 0
  265,title string
  274,t 1
  261,line 11
  257,t 0
  270,title {}
  269,title ZOOM
  273,line 52
  257,line 7
  262,t 0
  274,title {}
  270,line 39
  269,line 24
  259,title ON
  260,title OFF
  266,t 0
  271,t 1
  error error
  264,title float
  266,line 21
  275,t 1
  error,line 38
  268,title REGION
  258,t 0
  263,line 14
  error,title {}
  275,line 62
  273,title {}
  263,t 0
  259,line 9
  260,line 10
  258,title NO
  272,line 51
  267,t 0
  263,title integer
  272,t 1
  268,line 23
  267,title CURSOR
  257 YES_
  258 NO_
  259,t 0
  259 ON_
  260 OFF_
  260,t 0
  272,title {}
  261 TRUE_
  265,line 17
  262 FALSE_
  263 INT_
  257,title YES
  264 REAL_
  264,t 0
  265 STRING_
  262,line 12
  266 COLOR_
  267 CURSOR_
  0,t 0
  0 {$}
  262,title FALSE
  268 REGION_
  268,t 0
  274,line 55
  270 yesno
  269 ZOOM_
  271 numeric
  error,t 0
  272 command
  258,line 8
  273,t 1
  273 @PSEUDO1
  266,title COLOR
  274 magnifier
  275 start'
  271,line 47
  271,title {}
  261,t 0
  267,line 22
  275,title {}
  265,t 0
  261,title TRUE
}

proc magnifier::yyparse {} {
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
                    1 { set _ 1 }
                    2 { set _ 1 }
                    3 { set _ 1 }
                    4 { set _ 1 }
                    5 { set _ 0 }
                    6 { set _ 0 }
                    7 { set _ 0 }
                    8 { set _ $1 }
                    9 { set _ $1 }
                    11 { global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT} }
                    13 { ProcessCmdSet pmagnifier color $2 MagnifierColor }
                    14 { ProcessCmdSet pmagnifier zoom $2 MagnifierZoom }
                    15 { ProcessCmdSet pmagnifier cursor $2 MagnifierCursor }
                    16 { ProcessCmdSet pmagnifier region $2 MagnifierRegion }
                    17 { ProcessCmdSet view magnifier $1 UpdateView }
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

proc magnifier::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
