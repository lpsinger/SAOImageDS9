package provide DS9 1.0

######
# Begin autogenerated taccle (version 1.3) routines.
# Although taccle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/taccle for other details.
######

namespace eval prefs {
    variable yylval {}
    variable table
    variable rules
    variable token {}
    variable yycnt 0
    variable yyerr 0
    variable save_state 0

    namespace export yylex
}

proc prefs::YYABORT {} {
    return -code return 1
}

proc prefs::YYACCEPT {} {
    return -code return 0
}

proc prefs::YYERROR {} {
    variable yyerr
    set yyerr 1
}

proc prefs::yyclearin {} {
    variable token
    variable yycnt
    set token {}
    incr yycnt -1
}

proc prefs::yyerror {s} {
    puts stderr $s
}

proc prefs::setupvalues {stack pointer numsyms} {
    upvar 1 1 y
    set y {}
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        set y [lindex $stack $pointer]
        incr pointer
    }
}

proc prefs::unsetupvalues {numsyms} {
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        unset y
    }
}

array set prefs::table {
  11:264 reduce
  13:264 reduce
  20:264,target 22
  19:264,target 15
  15:0,target 7
  9:0 reduce
  0:266,target 2
  2:264,target 11
  15:264 reduce
  11:0 reduce
  17:264 reduce
  14:264,target 4
  3:257,target 10
  25:263,target 26
  0:265 shift
  20:264 shift
  19:264 reduce
  15:0 reduce
  0:266 shift
  2:264 reduce
  0:267 shift
  0:268 shift
  0:265,target 1
  4:264 shift
  24:263 shift
  0:269 shift
  0:270 shift
  6:263 shift
  19:0 reduce
  16:0,target 16
  2:0 reduce
  0:272 goto
  26:264 reduce
  8:264 reduce
  0:274 goto
  17:264,target 14
  0:274,target 8
  12:264,target 3
  7:0,target 0
  23:263,target 24
  17:0,target 14
  12:0 reduce
  5:263,target 18
  10:0,target 2
  8:273 goto
  26:264,target 12
  16:0 reduce
  8:264,target 9
  3:264,target 1
  26:0,target 12
  8:0,target 8
  3:0 reduce
  15:264,target 7
  11:0,target 5
  10:264 reduce
  0:272,target 7
  12:264 reduce
  8:273,target 20
  7:0 accept
  10:264,target 2
  21:263,target 23
  14:264 reduce
  3:257 shift
  3:258 shift
  16:264 reduce
  3:259 shift
  3:260 shift
  18:263 shift
  13:0 reduce
  9:0,target 13
  3:261 shift
  19:0,target 15
  1:264 shift
  2:0,target 11
  3:262 shift
  21:263 shift
  12:0,target 3
  3:264 reduce
  23:263 shift
  17:0 reduce
  1:264,target 9
  3:262,target 15
  5:263 shift
  25:263 shift
  13:264,target 6
  24:263,target 25
  22:0 reduce
  0:269,target 5
  0:270,target 6
  6:263,target 19
  9:264 reduce
  3:271 goto
  3:0,target 1
  18:263,target 21
  13:0,target 6
  3:261,target 14
  26:0 reduce
  9:264,target 13
  8:0 reduce
  3:271,target 16
  10:0 reduce
  0:268,target 4
  4:264,target 17
  14:0 reduce
  16:264,target 16
  3:259,target 12
  3:260,target 13
  22:0,target 10
  14:0,target 4
  11:264,target 5
  0:267,target 3
  3:258,target 11
}

array set prefs::rules {
  9,l 273
  11,l 274
  15,l 274
  2,l 271
  6,l 271
  12,l 274
  16,l 274
  3,l 271
  7,l 271
  13,l 274
  0,l 275
  4,l 271
  8,l 272
  10,l 272
  14,l 274
  1,l 271
  5,l 271
}

array set prefs::rules {
  5,dc 1
  0,dc 1
  12,dc 7
  8,dc 1
  3,dc 1
  15,dc 2
  10,dc 3
  6,dc 1
  1,dc 0
  13,dc 2
  9,dc 0
  4,dc 1
  16,dc 2
  11,dc 1
  7,dc 1
  2,dc 1
  14,dc 2
}

array set prefs::rules {
  13,line 53
  7,line 44
  10,line 48
  4,line 41
  1,line 38
  15,line 55
  9,line 47
  12,line 52
  6,line 43
  3,line 40
  14,line 54
  8,line 47
  11,line 51
  5,line 42
  2,line 39
  9,e 1
  16,line 56
}

array set prefs::lr1_table {
  14,trans {}
  1,trans {{264 9}}
  18,trans {{263 21}}
  23,trans {{263 24}}
  5,trans {{263 18}}
  9,trans {}
  13,trans {}
  0,trans {{265 1} {266 2} {267 3} {268 4} {269 5} {270 6} {272 7} {274 8}}
  17,trans {}
  4,trans {{264 17}}
  22,trans {}
  26,trans {}
  8,trans {{273 20}}
  12,trans {}
  16,trans {}
  3,trans {{257 10} {258 11} {259 12} {260 13} {261 14} {262 15} {271 16}}
  21,trans {{263 23}}
  10 {{2 {0 264} 1}}
  11 {{5 {0 264} 1}}
  25,trans {{263 26}}
  12 {{3 {0 264} 1}}
  7,trans {}
  13 {{6 {0 264} 1}}
  14 {{4 {0 264} 1}}
  15 {{7 {0 264} 1}}
  11,trans {}
  16 {{16 {0 264} 2}}
  0 {{0 0 0} {8 0 0} {10 0 0} {11 {0 264} 0} {12 {0 264} 0} {13 {0 264} 0} {14 {0 264} 0} {15 {0 264} 0} {16 {0 264} 0}}
  17 {{14 {0 264} 2}}
  1 {{13 {0 264} 1}}
  18 {{12 {0 264} 2}}
  2 {{11 {0 264} 1}}
  19 {{15 {0 264} 2}}
  20 {{10 0 2}}
  15,trans {}
  3 {{16 {0 264} 1} {1 {0 264} 0} {2 {0 264} 0} {3 {0 264} 0} {4 {0 264} 0} {5 {0 264} 0} {6 {0 264} 0} {7 {0 264} 0}}
  21 {{12 {0 264} 3}}
  4 {{14 {0 264} 1}}
  22 {{10 0 3}}
  5 {{12 {0 264} 1}}
  23 {{12 {0 264} 4}}
  6 {{15 {0 264} 1}}
  2,trans {}
  19,trans {}
  20,trans {{264 22}}
  24 {{12 {0 264} 5}}
  25 {{12 {0 264} 6}}
  7 {{0 0 1}}
  26 {{12 {0 264} 7}}
  8 {{8 0 1} {10 0 1} {9 264 0}}
  9 {{13 {0 264} 2}}
  24,trans {{263 25}}
  6,trans {{263 19}}
  10,trans {}
}

array set prefs::token_id_table {
  264,line 16
  270,t 0
  269,t 0
  265,title BGCOLOR
  274,t 1
  261,line 11
  257,t 0
  270,title THREADS
  269,title PRECISION
  273,line 47
  257,line 7
  262,t 0
  274,title {}
  270,line 25
  269,line 24
  259,title ON
  260,title OFF
  266,t 0
  271,t 1
  error error
  264,title string
  266,line 21
  275,t 1
  error,line 36
  268,title NANCOLOR
  258,t 0
  263,line 14
  error,title {}
  275,line 57
  273,title {}
  263,t 0
  259,line 9
  260,line 10
  258,title NO
  272,line 46
  267,t 0
  263,title integer
  272,t 1
  268,line 23
  267,title IRAFALIGN
  257 YES_
  258 NO_
  259,t 0
  259 ON_
  260 OFF_
  260,t 0
  272,title {}
  261 TRUE_
  265,line 20
  262 FALSE_
  263 INT_
  257,title YES
  264 STRING_
  264,t 0
  265 BGCOLOR_
  262,line 12
  266 CLEAR_
  267 IRAFALIGN_
  0,t 0
  0 {$}
  262,title FALSE
  268 NANCOLOR_
  268,t 0
  274,line 50
  270 THREADS_
  269 PRECISION_
  271 yesno
  error,t 0
  272 command
  258,line 8
  273,t 1
  273 @PSEUDO1
  266,title CLEAR
  274 prefs
  275 start'
  271,line 37
  271,title {}
  261,t 0
  267,line 22
  275,title {}
  265,t 0
  261,title TRUE
}

proc prefs::yyparse {} {
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
                    9 { global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT} }
                    11 { ClearPrefs }
                    12 { ProcessCmdSet pds9 prec,linear $2; ProcessCmdSet pds9 prec,deg $3; ProcessCmdSet pds9 prec,hms $4;ProcessCmdSet pds9 prec,dms $5; ProcessCmdSet pds9 prec,arcmin $6; ProcessCmdSet pds9 prec,arcsec $7 PrefsPrecision }
                    13 { ProcessCmdSet pds9 bg $2 PrefsBgColor }
                    14 { ProcessCmdSet pds9 nan $2 PrefsNanColor }
                    15 { ProcessCmdSet ds9 threads $2 ChangeThreads }
                    16 { ProcessCmdSet pds9 iraf $2 PrefsIRAFAlign }
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

proc prefs::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
