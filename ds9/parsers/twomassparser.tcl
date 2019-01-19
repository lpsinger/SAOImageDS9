package provide DS9 1.0

######
# Begin autogenerated taccle (version 1.3) routines.
# Although taccle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/taccle for other details.
######

namespace eval twomass {
    variable yylval {}
    variable table
    variable rules
    variable token {}
    variable yycnt 0
    variable yyerr 0
    variable save_state 0

    namespace export yylex
}

proc twomass::YYABORT {} {
    return -code return 1
}

proc twomass::YYACCEPT {} {
    return -code return 0
}

proc twomass::YYERROR {} {
    variable yyerr
    set yyerr 1
}

proc twomass::yyclearin {} {
    variable token
    variable yycnt
    set token {}
    incr yycnt -1
}

proc twomass::yyerror {s} {
    puts stderr $s
}

proc twomass::setupvalues {stack pointer numsyms} {
    upvar 1 1 y
    set y {}
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        set y [lindex $stack $pointer]
        incr pointer
    }
}

proc twomass::unsetupvalues {numsyms} {
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        unset y
    }
}

array set twomass::table {
  40:285,target 48
  10:280,target 39
  16:283,target 22
  30:283 reduce
  29:283 reduce
  3:288,target 21
  27:0 reduce
  48:0 reduce
  3:267,target 19
  51:283,target 37
  7:283,target 1
  18:290,target 43
  38:283 reduce
  0:275,target 9
  9:295 goto
  11:282,target 19
  40:283,target 8
  39:283,target 10
  6:266 shift
  7:262,target 32
  56:0,target 13
  6:268 shift
  24:0 reduce
  48:0,target 35
  47:283 reduce
  45:0 reduce
  33:0,target 31
  2:282,target 12
  17:280 shift
  25:0,target 39
  28:283,target 5
  44:277,target 53
  34:282,target 12
  0:273,target 7
  56:283 reduce
  7:259,target 29
  7:260,target 30
  21:0 reduce
  26:283 reduce
  42:0 reduce
  52:283,target 16
  2:280,target 17
  12:282,target 20
  41:283,target 49
  35:283 reduce
  0:271,target 5
  6:294 goto
  11:277,target 19
  44:276 shift
  44:277 shift
  7:257,target 27
  44:278 shift
  3:267 shift
  38:0 reduce
  30:283,target 6
  29:283,target 3
  3:270 shift
  44:283 reduce
  0:290,target 14
  8:281,target 11
  14:281 shift
  44:287 goto
  14:282 shift
  53:0,target 17
  44:289 goto
  0:268,target 3
  45:0,target 11
  53:283 reduce
  37:0,target 43
  40:276,target 47
  30:0,target 6
  29:0,target 3
  22:0,target 28
  53:283,target 17
  35:0 reduce
  14:290 goto
  4:263,target 22
  23:283 reduce
  56:0 reduce
  3:288 goto
  42:283,target 10
  12:277,target 20
  18:281,target 11
  32:283 reduce
  11:0 reduce
  31:283,target 4
  0:264 shift
  32:0 reduce
  0:265 shift
  44:289,target 56
  53:0 reduce
  0:268 shift
  43:285,target 51
  0:269 shift
  11:276 reduce
  41:283 shift
  0:271 shift
  11:277 reduce
  19:283,target 15
  20:283,target 14
  0:272 shift
  11:278 reduce
  0:273 shift
  0:274 shift
  11:281 reduce
  0:275 shift
  9:j,target 36
  11:282 reduce
  0:264,target 1
  54:283,target 18
  50:283 reduce
  0:280 shift
  7:0,target 1
  28:0 reduce
  0:281 shift
  0:0,target 24
  44:287,target 55
  0:282 shift
  14:282,target 12
  50:0 reduce
  49:0 reduce
  0:283 shift
  43:283,target 8
  19:283 reduce
  20:283 reduce
  50:0,target 38
  49:0,target 23
  0:283,target 13
  42:0,target 10
  0:290 goto
  8:281 shift
  26:0,target 34
  0:291 goto
  8:282 shift
  9:h,target 35
  32:283,target 7
  11:0,target 19
  0:293 goto
  25:0 reduce
  28:283 reduce
  2:290,target 18
  46:0 reduce
  8:290 goto
  21:283,target 32
  34:290,target 44
  0:281,target 11
  37:283 reduce
  0:0 reduce
  55:283,target 30
  9:295,target 38
  22:0 reduce
  46:283 reduce
  43:0 reduce
  44:283,target 12
  1:283,target 26
  16:283 reduce
  33:283,target 31
  55:283 reduce
  39:286,target 46
  9:h shift
  5:283 reduce
  9:j shift
  54:0,target 18
  40:0 reduce
  39:0 reduce
  9:k shift
  16:292 goto
  22:283,target 28
  25:283 reduce
  46:0,target 36
  38:0,target 33
  31:0,target 4
  7:284,target 33
  23:0,target 29
  43:276,target 47
  15:0,target 0
  34:281 shift
  56:283,target 13
  34:282 shift
  43:276 shift
  15:0 accept
  45:283,target 11
  36:0 reduce
  34:290 goto
  44:278,target 54
  43:283 reduce
  43:285 goto
  0:274,target 8
  11:281,target 19
  13:283 reduce
  7:261,target 31
  12:0 reduce
  52:283 reduce
  2:280 shift
  2:281 shift
  23:283,target 29
  33:0 reduce
  2:282 shift
  2:281,target 11
  54:0 reduce
  0:293,target 16
  22:283 reduce
  44:276,target 52
  1:0,target 26
  34:281,target 11
  2:290 goto
  0:272,target 6
  11:278,target 19
  7:0 reduce
  51:0,target 37
  39:279,target 45
  31:283 reduce
  7:258,target 28
  46:283,target 36
  43:0,target 8
  40:276 shift
  35:0,target 42
  30:0 reduce
  14:290,target 40
  29:0 reduce
  27:0,target 2
  7:257 shift
  19:0,target 15
  20:0,target 14
  51:0 reduce
  39:279 shift
  7:258 shift
  12:0,target 20
  0:291,target 15
  7:259 shift
  7:260 shift
  8:282,target 12
  35:283,target 42
  6:294,target 26
  7:261 shift
  42:286,target 50
  40:283 reduce
  39:283 reduce
  7:262 shift
  12:281,target 20
  40:285 goto
  10:280 shift
  39:286 goto
  0:269,target 4
  11:276,target 19
  17:280,target 42
  24:283,target 40
  26:0 reduce
  48:283 reduce
  47:0 reduce
  13:283,target 27
  18:281 shift
  18:282 shift
  12:278,target 20
  18:282,target 12
  1:0 reduce
  47:283,target 9
  4:283,target 23
  7:283 reduce
  18:290 goto
  7:284 goto
  23:0 reduce
  27:283 reduce
  44:0 reduce
  5:0,target 25
  36:283,target 41
  55:0,target 30
  12:276,target 20
  47:0,target 9
  36:283 reduce
  40:0,target 8
  39:0,target 10
  4:263 shift
  9:k,target 37
  16:292,target 41
  25:283,target 39
  32:0,target 7
  0:265,target 2
  6:268,target 25
  24:0,target 40
  16:0,target 21
  19:0 reduce
  20:0 reduce
  45:283 reduce
  42:279,target 45
  48:283,target 35
  5:283,target 25
  54:283 reduce
  6:266,target 24
  16:0 reduce
  4:283 shift
  37:283,target 43
  37:0 reduce
  14:281,target 11
  24:283 reduce
  0:282,target 12
  26:283,target 34
  33:283 reduce
  13:0 reduce
  42:279 shift
  55:0 reduce
  52:0,target 16
  12:276 reduce
  44:0,target 12
  42:283 reduce
  12:277 reduce
  36:0,target 41
  12:278 reduce
  50:283,target 38
  0:280,target 10
  28:0,target 5
  42:286 goto
  12:281 reduce
  21:0,target 32
  12:282 reduce
  13:0,target 27
  51:283 reduce
  38:283,target 33
  31:0 reduce
  1:283 reduce
  8:290,target 34
  52:0 reduce
  3:270,target 20
  21:283 reduce
  27:283,target 2
  5:0 reduce
}

array set twomass::rules {
  9,l 285
  11,l 286
  32,l 293
  6,l 284
  28,l 293
  3,l 284
  25,l 293
  0,l 296
  22,l 292
  43,l 295
  18,l 289
  40,l 294
  39,l 294
  15,l 288
  36,l 293
  12,l 287
  33,l 293
  7,l 284
  29,l 293
  30,l 293
  4,l 284
  26,l 293
  1,l 284
  23,l 291
  19,l 290
  20,l 290
  41,l 295
  16,l 289
  37,l 293
  13,l 287
  34,l 293
  8,l 285
  10,l 286
  31,l 293
  5,l 284
  27,l 293
  2,l 284
  24,l 293
  21,l 291
  42,l 295
  17,l 289
  38,l 293
  14,l 288
  35,l 293
}

array set twomass::rules {
  12,dc 0
  26,dc 1
  3,dc 1
  41,dc 1
  18,dc 1
  33,dc 2
  9,dc 1
  11,dc 1
  25,dc 1
  2,dc 1
  40,dc 1
  39,dc 1
  17,dc 1
  32,dc 2
  8,dc 0
  10,dc 0
  24,dc 0
  1,dc 0
  38,dc 4
  16,dc 1
  31,dc 2
  7,dc 1
  23,dc 3
  0,dc 1
  37,dc 4
  15,dc 1
  29,dc 2
  30,dc 4
  6,dc 1
  22,dc 0
  36,dc 3
  14,dc 1
  28,dc 2
  5,dc 1
  43,dc 1
  21,dc 1
  35,dc 3
  13,dc 1
  27,dc 1
  4,dc 1
  42,dc 1
  19,dc 1
  20,dc 1
  34,dc 2
}

array set twomass::rules {
  41,line 147
  7,line 88
  37,line 139
  4,line 85
  34,line 135
  1,line 82
  31,line 131
  27,line 126
  24,line 123
  21,line 119
  17,line 112
  22,e 1
  14,line 107
  11,line 100
  43,line 149
  9,line 96
  40,line 144
  39,line 143
  6,line 87
  36,line 138
  3,line 84
  33,line 133
  29,line 128
  30,line 130
  26,line 125
  23,line 120
  19,line 115
  20,line 116
  16,line 111
  13,line 104
  10,line 99
  42,line 148
  8,line 95
  38,line 140
  5,line 86
  35,line 136
  2,line 83
  32,line 132
  28,line 127
  25,line 124
  22,line 119
  18,line 113
  15,line 108
  12,line 103
}

array set twomass::lr1_table {
  35 {{42 {0 283} 1}}
  14,trans {{281 40} {282 41} {290 42}}
  36 {{41 {0 283} 1}}
  33,trans {}
  37 {{43 {0 283} 1}}
  52,trans {}
  38 {{33 {0 283} 2}}
  40 {{19 {0 276} 1}}
  39 {{36 {0 283} 2} {10 {0 283} 0} {11 {0 283} 0}}
  18,trans {{281 40} {282 41} {290 45}}
  41 {{20 {0 276} 1}}
  1,trans {}
  37,trans {}
  42 {{35 {0 283} 2} {8 {0 283} 0} {9 {0 283} 0}}
  56,trans {}
  43 {{23 0 2}}
  44 {{38 {0 283} 3} {10 {0 283} 0} {11 {0 283} 0}}
  23,trans {}
  45 {{37 {0 283} 3} {8 {0 283} 0} {9 {0 283} 0}}
  5,trans {}
  42,trans {{276 51} {285 52}}
  46 {{19 {0 276 277 278} 1}}
  47 {{20 {0 276 277 278} 1}}
  48 {{30 {0 283} 3} {12 {0 283} 0} {13 {0 283} 0} {16 {0 283} 0} {17 {0 283} 0} {18 {0 283} 0}}
  50 {{36 {0 283} 3}}
  49 {{11 {0 283} 1}}
  27,trans {}
  9,trans {{h 35} {j 36} {k 37} {295 38}}
  46,trans {}
  51 {{9 {0 283} 1}}
  52 {{35 {0 283} 3}}
  53 {{23 0 3}}
  13,trans {}
  54 {{38 {0 283} 4}}
  32,trans {}
  51,trans {}
  55 {{37 {0 283} 4}}
  56 {{16 {0 283} 1}}
  57 {{17 {0 283} 1}}
  17,trans {{280 44}}
  0,trans {{264 1} {265 2} {268 3} {269 4} {271 5} {272 6} {273 7} {274 8} {275 9} {280 10} {281 11} {282 12} {283 13} {290 14} {291 15} {293 16}}
  58 {{18 {0 283} 1}}
  36,trans {}
  55,trans {}
  60 {{13 {0 283} 1}}
  59 {{30 {0 283} 4}}
  22,trans {}
  4,trans {{263 22} {283 23}}
  41,trans {}
  60,trans {}
  59,trans {}
  26,trans {}
  8,trans {{281 11} {282 12} {290 34}}
  45,trans {{276 51} {285 55}}
  12,trans {}
  31,trans {}
  50,trans {}
  49,trans {}
  16,trans {{292 43}}
  35,trans {}
  54,trans {}
  21,trans {}
  3,trans {{267 19} {270 20} {288 21}}
  40,trans {}
  39,trans {{279 49} {286 50}}
  58,trans {}
  10 {{36 {0 283} 1}}
  11 {{19 {281 282} 1}}
  25,trans {}
  12 {{20 {281 282} 1}}
  7,trans {{257 27} {258 28} {259 29} {260 30} {261 31} {262 32} {284 33}}
  44,trans {{279 49} {286 54}}
  13 {{27 {0 283} 1}}
  14 {{35 {0 283} 1} {19 {0 276} 0} {20 {0 276} 0}}
  11,trans {}
  15 {{0 0 1}}
  30,trans {}
  29,trans {}
  16 {{21 0 1} {23 0 1} {22 283 0}}
  48,trans {{276 56} {277 57} {278 58} {287 59} {289 60}}
  0 {{0 0 0} {21 0 0} {23 0 0} {24 {0 283} 0} {25 {0 283} 0} {26 {0 283} 0} {27 {0 283} 0} {28 {0 283} 0} {29 {0 283} 0} {30 {0 283} 0} {31 {0 283} 0} {32 {0 283} 0} {33 {0 283} 0} {34 {0 283} 0} {35 {0 283} 0} {36 {0 283} 0} {37 {0 283} 0} {38 {0 283} 0} {19 {281 282} 0} {20 {281 282} 0}}
  17 {{38 {0 283} 2}}
  1 {{26 {0 283} 1}}
  18 {{37 {0 283} 2} {19 {0 276} 0} {20 {0 276} 0}}
  15,trans {}
  2 {{37 {0 283} 1} {38 {0 283} 1} {19 {281 282} 0} {20 {281 282} 0}}
  19 {{15 {0 283} 1}}
  20 {{14 {0 283} 1}}
  34,trans {{281 46} {282 47} {290 48}}
  3 {{32 {0 283} 1} {14 {0 283} 0} {15 {0 283} 0}}
  21 {{32 {0 283} 2}}
  53,trans {}
  4 {{28 {0 283} 1} {29 {0 283} 1}}
  22 {{28 {0 283} 2}}
  5 {{25 {0 283} 1}}
  23 {{29 {0 283} 2}}
  20,trans {}
  19,trans {}
  6 {{34 {0 283} 1} {39 {0 283} 0} {40 {0 283} 0}}
  2,trans {{280 17} {281 11} {282 12} {290 18}}
  24 {{40 {0 283} 1}}
  38,trans {}
  7 {{31 {0 283} 1} {1 {0 283} 0} {2 {0 283} 0} {3 {0 283} 0} {4 {0 283} 0} {5 {0 283} 0} {6 {0 283} 0} {7 {0 283} 0}}
  25 {{39 {0 283} 1}}
  57,trans {}
  8 {{30 {0 283} 1} {19 {281 282} 0} {20 {281 282} 0}}
  26 {{34 {0 283} 2}}
  9 {{33 {0 283} 1} {41 {0 283} 0} {42 {0 283} 0} {43 {0 283} 0}}
  27 {{2 {0 283} 1}}
  24,trans {}
  6,trans {{266 24} {268 25} {294 26}}
  28 {{5 {0 283} 1}}
  43,trans {{283 53}}
  29 {{3 {0 283} 1}}
  30 {{6 {0 283} 1}}
  31 {{4 {0 283} 1}}
  10,trans {{280 39}}
  32 {{7 {0 283} 1}}
  28,trans {}
  33 {{31 {0 283} 2}}
  47,trans {}
  34 {{30 {0 283} 2} {19 {0 276 277 278} 0} {20 {0 276 277 278} 0}}
}

array set twomass::token_id_table {
  286,t 1
  286 sex
  280,title SEXSTR
  279,title SEXAGESIMAL
  264,line 15
  292,line 119
  287 sizeOpt
  270,t 0
  269,t 0
  288 frame
  290 numeric
  289 rformat
  276,line 28
  265,title COORD
  291,t 1
  291 command
  284,title {}
  292 @PSEUDO1
  274,t 0
  261,line 11
  293 twomass
  288,line 106
  257,t 0
  294 update
  270,title NEW
  269,title NAME
  295,t 1
  295 survey
  288,title {}
  273,line 24
  296 start'
  278,t 0
  j,t 0
  257,line 7
  262,t 0
  285,line 94
  274,title SIZE
  293,title {}
  283,t 0
  270,line 21
  269,line 20
  h,title {}
  259,title ON
  260,title OFF
  266,t 0
  278,title ARCSEC
  282,line 37
  287,t 1
  error error
  271,t 0
  264,title CLOSE
  266,line 17
  294,line 142
  283,title string
  292,t 1
  278,line 30
  error,line 80
  275,t 0
  268,title FRAME
  k,line 148
  287,title {}
  258,t 0
  263,line 14
  291,line 118
  error,title {}
  296,t 1
  280,t 0
  279,t 0
  275,line 26
  273,title SAVE
  k,t 0
  292,title {}
  263,t 0
  h,line 147
  259,line 9
  260,line 10
  287,line 102
  258,title NO
  284,t 1
  277,title ARCMIN
  296,title {}
  272,line 23
  267,t 0
  k,title {}
  263,title CLEAR
  288,t 1
  284,line 81
  282,title float
  272,t 0
  268,line 19
  296,line 150
  267,title CURRENT
  293,t 1
  286,title {}
  257 YES_
  281,line 36
  276,t 0
  258 NO_
  h,t 0
  h h
  259,t 0
  259 ON_
  260 OFF_
  260,t 0
  272,title UPDATE
  261 TRUE_
  265,line 16
  j j
  293,line 122
  291,title {}
  262 FALSE_
  k k
  281,t 0
  263 CLEAR_
  277,line 29
  257,title YES
  264 CLOSE_
  264,t 0
  276,title DEGREES
  265 COORD_
  j,line 146
  295,title {}
  262,line 12
  266 CROSSHAIR_
  290,line 114
  289,line 110
  285,t 1
  267 CURRENT_
  j,title {}
  0,t 0
  0 {$}
  262,title FALSE
  268 FRAME_
  268,t 0
  281,title integer
  274,line 25
  270 NEW_
  269 NAME_
  error,t 0
  271 OPEN_
  290,t 1
  289,t 1
  272 UPDATE_
  258,line 8
  286,line 98
  273,t 0
  273 SAVE_
  266,title CROSSHAIR
  285,title {}
  274 SIZE_
  275 SURVEY_
  271,line 22
  294,t 1
  276 DEGREES_
  277,t 0
  277 ARCMIN_
  271,title OPEN
  290,title {}
  289,title {}
  283,line 39
  278 ARCSEC_
  261,t 0
  280 SEXSTR_
  279 SEXAGESIMAL_
  281 INT_
  267,line 18
  295,line 146
  282,t 0
  282 REAL_
  275,title SURVEY
  294,title {}
  283 STRING_
  265,t 0
  284 yesno
  280,line 34
  279,line 32
  285 deg
  261,title TRUE
}

proc twomass::yyparse {} {
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
                    8 { set _ degrees }
                    9 { set _ degrees }
                    10 { set _ sexagesimal }
                    11 { set _ sexagesimal }
                    12 { set _ degrees }
                    13 { set _ $1 }
                    14 { set _ new }
                    15 { set _ current }
                    16 { set _ degrees }
                    17 { set _ arcmin }
                    18 { set _ arcsec }
                    19 { set _ $1 }
                    20 { set _ $1 }
                    22 { global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT} }
                    24 { IMGSVRApply dtwomass 1 }
                    26 { ARDestroy dtwomass }
                    27 { ProcessCmdSet dtwomass name $1 "IMGSVRApply dtwomass 1" }
                    28 { ProcessCmdSet dtwomass name {} }
                    29 { ProcessCmdSet dtwomass name $2 "IMGSVRApply dtwomass 1" }
                    30 { ProcessCmdSet4 dtwomass width $2 height $3 rformat $4 rformat,msg $4 }
                    31 { ProcessCmdSet dtwomass save $2 }
                    32 { ProcessCmdSet dtwomass mode $2 }
                    33 { ProcessCmdSet dtwomass survey $2 }
                    35 { ProcessCmdSet4 dtwomass x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dtwomass 1" }
                    36 { ProcessCmdSet4 dtwomass x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dtwomass 1" }
                    37 { ProcessCmdSet4 dtwomass x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dtwomass 1" }
                    38 { ProcessCmdSet4 dtwomass x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dtwomass 1" }
                    39 { IMGSVRUpdate dtwomass; IMGSVRApply dtwomass 1 }
                    40 { IMGSVRCrosshair dtwomass; IMGSVRApply dtwomass 1 }
                    41 { set _ $1 }
                    42 { set _ $1 }
                    43 { set _ $1 }
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

proc twomass::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
