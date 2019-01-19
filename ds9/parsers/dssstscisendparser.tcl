package provide DS9 1.0

######
# Begin autogenerated taccle (version 1.3) routines.
# Although taccle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/taccle for other details.
######

namespace eval dssstscisend {
    variable yylval {}
    variable table
    variable rules
    variable token {}
    variable yycnt 0
    variable yyerr 0
    variable save_state 0

    namespace export yylex
}

proc dssstscisend::YYABORT {} {
    return -code return 1
}

proc dssstscisend::YYACCEPT {} {
    return -code return 0
}

proc dssstscisend::YYERROR {} {
    variable yyerr
    set yyerr 1
}

proc dssstscisend::yyclearin {} {
    variable token
    variable yycnt
    set token {}
    incr yycnt -1
}

proc dssstscisend::yyerror {s} {
    puts stderr $s
}

proc dssstscisend::setupvalues {stack pointer numsyms} {
    upvar 1 1 y
    set y {}
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        set y [lindex $stack $pointer]
        incr pointer
    }
}

proc dssstscisend::unsetupvalues {numsyms} {
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        unset y
    }
}

array set dssstscisend::table {
  6:0 reduce
  3:0,target 2
  0:257 shift
  7:0 accept
  0:258 shift
  5:0,target 6
  0:259 shift
  0:260 shift
  0:261 shift
  7:0,target 0
  0:258,target 2
  0:262 shift
  0:263 goto
  0:0,target 1
  0:261,target 5
  2:0,target 4
  0:263,target 7
  4:0,target 3
  0:0 reduce
  6:0,target 5
  1:0 reduce
  0:257,target 1
  2:0 reduce
  3:0 reduce
  0:259,target 3
  0:260,target 4
  4:0 reduce
  1:0,target 7
  5:0 reduce
  0:262,target 6
}

array set dssstscisend::rules {
  0,l 264
  1,l 263
  2,l 263
  3,l 263
  4,l 263
  5,l 263
  6,l 263
  7,l 263
}

array set dssstscisend::rules {
  5,dc 1
  7,dc 1
  0,dc 1
  2,dc 1
  4,dc 1
  6,dc 1
  1,dc 0
  3,dc 1
}

array set dssstscisend::rules {
  5,line 24
  7,line 26
  2,line 21
  4,line 23
  6,line 25
  1,line 20
  3,line 22
}

array set dssstscisend::lr1_table {
  0 {{0 0 0} {1 0 0} {2 0 0} {3 0 0} {4 0 0} {5 0 0} {6 0 0} {7 0 0}}
  1 {{7 0 1}}
  2 {{4 0 1}}
  3 {{2 0 1}}
  4 {{3 0 1}}
  0,trans {{257 1} {258 2} {259 3} {260 4} {261 5} {262 6} {263 7}}
  5 {{6 0 1}}
  1,trans {}
  6 {{5 0 1}}
  2,trans {}
  7 {{0 0 1}}
  3,trans {}
  4,trans {}
  5,trans {}
  6,trans {}
  7,trans {}
}

array set dssstscisend::token_id_table {
  264,line 27
  0,t 0
  0 {$}
  262,title SURVEY
  263,title {}
  264,title {}
  error,t 0
  error error
  258,line 8
  261,line 11
  error,line 18
  257 COORD_
  257,t 0
  263,line 19
  258 FRAME_
  258,t 0
  error,title {}
  260,t 0
  260 SAVE_
  259 NAME_
  259,t 0
  261,t 0
  261 SIZE_
  262,t 0
  262 SURVEY_
  257,line 7
  263,t 1
  263 dssstscisend
  264,t 1
  264 start'
  260,line 10
  257,title COORD
  259,line 9
  258,title FRAME
  262,line 12
  260,title SAVE
  259,title NAME
  261,title SIZE
}

proc dssstscisend::yyparse {} {
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
                    1 { ProcessSendCmdGet dstsci name }
                    2 { ProcessSendCmdGet dstsci name }
                    3 { ProcessSendCmdYesNo dstsci save }
                    4 { ProcessSendCmdGet dstsci mode }
                    5 { ProcessSendCmdGet dstsci survey }
                    6 { ProcessSendCmdGet3 dstsci width height rformat }
                    7 { ProcessSendCmdGet3 dstsci x y skyformat }
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

proc dssstscisend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
