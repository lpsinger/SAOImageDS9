package provide DS9 1.0

######
# Begin autogenerated taccle (version 1.3) routines.
# Although taccle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/taccle for other details.
######

namespace eval cube {
    variable yylval {}
    variable table
    variable rules
    variable token {}
    variable yycnt 0
    variable yyerr 0
    variable save_state 0

    namespace export yylex
}

proc cube::YYABORT {} {
    return -code return 1
}

proc cube::YYACCEPT {} {
    return -code return 0
}

proc cube::YYERROR {} {
    variable yyerr
    set yyerr 1
}

proc cube::yyclearin {} {
    variable token
    variable yycnt
    set token {}
    incr yycnt -1
}

proc cube::yyerror {s} {
    puts stderr $s
}

proc cube::setupvalues {stack pointer numsyms} {
    upvar 1 1 y
    set y {}
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        set y [lindex $stack $pointer]
        incr pointer
    }
}

proc cube::unsetupvalues {numsyms} {
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        unset y
    }
}

array set cube::table {
  61:299,target 68
  17:257 shift
  10:280,target 56
  10:279,target 55
  9:283 shift
  17:258 shift
  12:299 reduce
  0:327,target 19
  17:260 shift
  17:259 shift
  27:0 reduce
  17:266,target 42
  17:261 shift
  1:305 shift
  51:299 reduce
  17:262 shift
  17:263 shift
  10:258,target 34
  50:299,target 18
  49:299,target 17
  48:0 reduce
  17:264 shift
  0:306,target 8
  17:265 shift
  1:299 reduce
  6:299,target 48
  17:266 shift
  9:271,target 47
  1:279,target 35
  1:280,target 35
  70:0 reduce
  21:299 reduce
  17:267 shift
  17:268 shift
  2:263,target 36
  17:270 shift
  17:269 shift
  9:305 shift
  6:0,target 48
  60:299 reduce
  59:299 reduce
  38:299,target 6
  17:271 shift
  2:0 reduce
  17:272 shift
  1:258,target 35
  72:0,target 30
  17:273 shift
  13:320,target 27
  13:319,target 26
  10:277,target 53
  64:0,target 69
  17:274 shift
  9:310 shift
  9:299 reduce
  0:325,target 18
  56:0,target 24
  24:0 reduce
  17:275 shift
  48:0,target 16
  30:299 reduce
  29:299 reduce
  17:276 shift
  17:264,target 40
  41:0,target 9
  27:299,target 63
  17:277 shift
  73:299,target 33
  45:0 reduce
  33:0,target 1
  17:278 shift
  2:282,target 36
  68:299 reduce
  25:0,target 61
  17:280 shift
  17:279 shift
  0:304,target 7
  17:281 shift
  66:0 reduce
  17:282 shift
  9:268,target 44
  1:277,target 35
  4:319,target 26
  4:320,target 27
  17:283 shift
  16:299,target 45
  2:261,target 36
  62:299,target 67
  38:299 reduce
  17:283,target 59
  9:322 goto
  13:317,target 24
  10:275,target 51
  21:0 reduce
  51:299,target 19
  17:262,target 38
  42:0 reduce
  47:299 reduce
  9:330 goto
  2:279,target 36
  2:280,target 36
  0:302,target 5
  63:0 reduce
  9:266,target 42
  1:275,target 35
  4:317,target 24
  40:299,target 8
  39:299,target 7
  2:258,target 36
  17:281,target 57
  56:299 reduce
  22:296,target 75
  10:273,target 49
  28:299,target 64
  74:299,target 31
  6:299 reduce
  38:0 reduce
  17:260,target 36
  17:259,target 35
  26:299 reduce
  7:297,target 31
  2:277,target 36
  60:0 reduce
  59:0 reduce
  0:300,target 3
  65:299 reduce
  17:322 goto
  76:0,target 57
  63:299,target 43
  9:264,target 40
  1:273,target 35
  68:0,target 55
  61:0,target 68
  53:0,target 21
  45:0,target 13
  35:299 reduce
  17:278,target 54
  37:0,target 5
  14:0 reduce
  52:299,target 20
  30:0,target 58
  29:0,target 51
  22:294,target 73
  10:271,target 47
  74:299 reduce
  22:0,target 28
  8:299,target 49
  35:0 reduce
  14:0,target 44
  17:257,target 33
  9:283,target 59
  56:0 reduce
  2:275,target 36
  44:299 reduce
  41:299,target 9
  77:0 reduce
  9:262,target 38
  1:271,target 35
  22:323,target 76
  14:299 reduce
  9:0 reduce
  30:299,target 58
  29:299,target 51
  17:276,target 52
  11:0 reduce
  75:299,target 34
  7:324,target 32
  53:299 reduce
  22:292,target 71
  10:268,target 44
  32:0 reduce
  3:297 shift
  9:281,target 57
  53:0 reduce
  64:299,target 69
  23:299 reduce
  2:273,target 36
  74:0 reduce
  62:299 reduce
  9:260,target 36
  9:259,target 35
  1:268,target 35
  13:329,target 30
  6:0 reduce
  53:299,target 21
  17:274,target 50
  9:310,target 61
  9:299,target 65
  32:299 reduce
  28:0 reduce
  10:266,target 42
  0:314,target 15
  71:299 reduce
  73:0,target 33
  50:0 reduce
  49:0 reduce
  42:299,target 10
  9:278,target 54
  4:329,target 30
  65:0,target 70
  57:0,target 25
  2:271,target 36
  71:0 reduce
  50:0,target 18
  49:0,target 17
  42:0,target 10
  41:299 reduce
  34:0,target 2
  9:257,target 33
  1:266,target 35
  31:299,target 35
  26:0,target 62
  0:300 shift
  76:299,target 57
  18:0,target 0
  0:301 shift
  11:0,target 46
  0:302 shift
  17:272,target 48
  11:299 reduce
  0:303 shift
  25:0 reduce
  0:304 shift
  10:264,target 40
  50:299 reduce
  49:299 reduce
  20:299,target 54
  19:299,target 38
  0:312,target 13
  0:306 shift
  65:299,target 70
  46:0 reduce
  17:322,target 68
  0:297 shift
  0:307 shift
  9:276,target 52
  0:298 shift
  0:308 shift
  0:309 shift
  67:0 reduce
  0:311 shift
  2:268,target 36
  20:299 reduce
  19:299 reduce
  0:312 shift
  0:313 shift
  54:299,target 22
  0:314 shift
  1:264,target 35
  58:299 reduce
  10:283,target 59
  0:315 shift
  22:0 reduce
  17:270,target 46
  17:269,target 45
  9:305,target 60
  8:299 reduce
  43:299,target 11
  28:299 reduce
  10:262,target 38
  43:0 reduce
  0:309,target 11
  67:299 reduce
  9:274,target 50
  0:324 goto
  1:283,target 35
  64:0 reduce
  0:325 goto
  2:266,target 36
  32:299,target 50
  0:327 goto
  19:326 goto
  37:299 reduce
  1:262,target 35
  10:281,target 57
  19:326,target 69
  77:0,target 39
  76:299 reduce
  18:0 accept
  70:0,target 29
  21:299,target 56
  17:267,target 43
  66:299,target 42
  62:0,target 67
  10:331,target 66
  54:0,target 22
  40:0 reduce
  39:0 reduce
  10:260,target 36
  10:259,target 35
  46:0,target 14
  0:297,target 1
  0:307,target 9
  46:299 reduce
  38:0,target 6
  61:0 reduce
  31:0,target 35
  9:272,target 48
  1:281,target 35
  23:0,target 59
  2:257 reduce
  55:299,target 23
  15:0,target 47
  2:258 reduce
  2:264,target 36
  2:259 reduce
  2:260 reduce
  16:299 reduce
  9:322,target 62
  2:261 reduce
  1:259,target 35
  1:260,target 35
  2:262 reduce
  13:321,target 28
  10:278,target 54
  2:263 reduce
  55:299 reduce
  15:0 reduce
  2:264 reduce
  44:299,target 12
  2:265 reduce
  17:265,target 41
  1:299,target 53
  2:266 reduce
  36:0 reduce
  2:267 reduce
  5:299 reduce
  10:257,target 33
  2:268 reduce
  2:283,target 36
  25:299 reduce
  2:269 reduce
  2:270 reduce
  57:0 reduce
  2:271 reduce
  33:299,target 1
  9:270,target 46
  9:269,target 45
  1:278,target 35
  2:272 reduce
  4:321,target 28
  64:299 reduce
  2:273 reduce
  2:262,target 36
  2:274 reduce
  2:275 reduce
  2:276 reduce
  1:257,target 35
  2:277 reduce
  34:299 reduce
  22:299,target 28
  13:318,target 25
  12:0 reduce
  10:276,target 52
  2:278 reduce
  67:299,target 52
  0:324,target 17
  2:279 reduce
  2:280 reduce
  2:281 reduce
  73:299 reduce
  33:0 reduce
  17:263,target 39
  2:282 reduce
  10:257 shift
  2:283 reduce
  10:258 shift
  2:281,target 36
  54:0 reduce
  11:299,target 46
  10:260 shift
  10:259 shift
  0:303,target 6
  56:299,target 24
  10:261 shift
  43:299 reduce
  10:262 shift
  9:267,target 43
  8:0,target 49
  1:276,target 35
  4:318,target 25
  75:0 reduce
  10:263 shift
  10:305,target 64
  1:0,target 53
  10:264 shift
  2:259,target 36
  2:260,target 36
  74:0,target 31
  13:307 shift
  10:265 shift
  66:0,target 42
  17:282,target 58
  10:266 shift
  58:0,target 26
  45:299,target 13
  22:291 shift
  10:267 shift
  51:0,target 19
  22:292 shift
  13:316,target 23
  10:274,target 50
  10:268 shift
  2:299,target 36
  43:0,target 11
  22:293 shift
  10:270 shift
  10:269 shift
  52:299 reduce
  35:0,target 3
  30:0 reduce
  29:0 reduce
  22:294 shift
  10:271 shift
  27:0,target 63
  22:295 shift
  17:261,target 37
  10:272 shift
  1:305,target 20
  22:296 shift
  20:0,target 54
  19:0,target 37
  10:273 shift
  7:298,target 2
  51:0 reduce
  34:299,target 2
  13:316 shift
  12:0,target 40
  10:274 shift
  2:278,target 36
  2:299 reduce
  13:317 shift
  10:275 shift
  0:301,target 4
  22:299 reduce
  13:318 shift
  10:276 shift
  72:0 reduce
  13:320 shift
  13:319 shift
  10:277 shift
  9:265,target 41
  1:274,target 35
  4:316,target 23
  13:321 shift
  10:278 shift
  61:299 reduce
  10:280 shift
  10:279 shift
  2:257,target 36
  23:299,target 59
  10:281 shift
  68:299,target 55
  17:280,target 56
  17:279,target 55
  10:282 shift
  10:283 shift
  22:295,target 74
  10:272,target 48
  31:299 reduce
  26:0 reduce
  13:328 goto
  17:258,target 34
  13:329 goto
  12:299,target 40
  70:299 reduce
  69:299 shift
  57:299,target 25
  47:0 reduce
  10:322,target 65
  22:323 goto
  2:276,target 36
  68:0 reduce
  9:263,target 39
  1:272,target 35
  40:299 reduce
  39:299 reduce
  46:299,target 14
  10:305 shift
  1:0 reduce
  17:277,target 53
  23:0 reduce
  22:293,target 72
  10:270,target 46
  10:269,target 45
  35:299,target 3
  48:299 reduce
  44:0 reduce
  9:282,target 58
  5:0,target 41
  2:274,target 36
  71:0,target 32
  65:0 reduce
  63:0,target 43
  55:0,target 23
  24:299,target 60
  9:261,target 37
  1:269,target 35
  1:270,target 35
  70:299,target 29
  69:299,target 77
  47:0,target 15
  40:0,target 8
  39:0,target 7
  57:299 reduce
  32:0,target 50
  10:322 goto
  3:297,target 21
  24:0,target 60
  17:275,target 51
  7:297 shift
  20:0 reduce
  19:0 reduce
  16:0,target 45
  7:298 shift
  22:291,target 70
  10:267,target 43
  58:299,target 26
  0:315,target 16
  41:0 reduce
  27:299 reduce
  9:280,target 56
  9:279,target 55
  66:299 reduce
  62:0 reduce
  10:331 goto
  2:272,target 36
  47:299,target 15
  9:330,target 63
  9:258,target 34
  1:267,target 35
  13:328,target 67
  36:299 reduce
  17:273,target 49
  16:0 reduce
  75:299 reduce
  36:299,target 4
  7:324 goto
  13:307,target 22
  10:265,target 41
  37:0 reduce
  0:313,target 14
  9:277,target 53
  4:328,target 29
  58:0 reduce
  45:299 reduce
  25:299,target 61
  2:269,target 36
  2:270,target 36
  71:299,target 32
  1:257 reduce
  1:258 reduce
  1:259 reduce
  1:260 reduce
  1:265,target 35
  4:307,target 22
  15:299 reduce
  1:261 reduce
  1:262 reduce
  14:299,target 44
  9:0,target 65
  1:263 reduce
  60:299,target 66
  59:299,target 27
  54:299 reduce
  17:271,target 47
  1:264 reduce
  2:0,target 36
  1:265 reduce
  4:307 shift
  75:0,target 34
  34:0 reduce
  10:263,target 39
  9:257 shift
  1:266 reduce
  67:0,target 52
  9:258 shift
  0:311,target 12
  1:267 reduce
  60:0,target 66
  59:0,target 27
  9:260 shift
  9:259 shift
  1:268 reduce
  55:0 reduce
  52:0,target 20
  24:299 reduce
  9:275,target 51
  9:261 shift
  1:269 reduce
  1:270 reduce
  48:299,target 16
  44:0,target 12
  9:262 shift
  1:271 reduce
  36:0,target 4
  9:263 shift
  1:272 reduce
  2:267,target 36
  5:299,target 41
  76:0 reduce
  63:299 reduce
  28:0,target 64
  9:264 shift
  1:273 reduce
  21:0,target 56
  9:265 shift
  1:274 reduce
  4:316 shift
  9:266 shift
  1:263,target 35
  1:275 reduce
  4:317 shift
  10:282,target 58
  9:267 shift
  1:276 reduce
  4:318 shift
  8:0 reduce
  37:299,target 5
  9:268 shift
  1:277 reduce
  4:319 shift
  4:320 shift
  33:299 reduce
  9:270 shift
  9:269 shift
  1:278 reduce
  4:321 shift
  17:268,target 44
  9:271 shift
  1:279 reduce
  1:280 reduce
  31:0 reduce
  9:272 shift
  1:281 reduce
  72:299 reduce
  10:261,target 37
  9:273 shift
  1:282 reduce
  9:274 shift
  0:298,target 2
  0:308,target 10
  1:283 reduce
  52:0 reduce
  26:299,target 62
  9:275 shift
  72:299,target 30
  9:276 shift
  9:273,target 49
  1:282,target 35
  9:277 shift
  4:328 goto
  73:0 reduce
  42:299 reduce
  9:278 shift
  2:265,target 36
  4:329 goto
  9:280 shift
  9:279 shift
  9:281 shift
  15:299,target 47
  9:282 shift
  1:261,target 35
  5:0 reduce
}

array set cube::rules {
  9,l 322
  11,l 322
  32,l 323
  53,l 327
  6,l 322
  28,l 323
  50,l 327
  49,l 327
  3,l 322
  25,l 322
  46,l 327
  67,l 330
  0,l 332
  22,l 322
  43,l 327
  64,l 329
  18,l 322
  40,l 327
  39,l 325
  61,l 329
  15,l 322
  36,l 324
  57,l 328
  12,l 322
  33,l 323
  54,l 327
  7,l 322
  29,l 323
  30,l 323
  51,l 327
  4,l 322
  26,l 322
  47,l 327
  68,l 330
  1,l 322
  23,l 322
  44,l 327
  65,l 330
  19,l 322
  20,l 322
  41,l 327
  62,l 329
  16,l 322
  37,l 325
  58,l 328
  13,l 322
  34,l 323
  55,l 327
  8,l 322
  10,l 322
  31,l 323
  52,l 327
  5,l 322
  27,l 322
  48,l 327
  70,l 331
  69,l 331
  2,l 322
  24,l 322
  45,l 327
  66,l 330
  21,l 322
  42,l 327
  63,l 329
  17,l 322
  38,l 326
  60,l 329
  59,l 329
  14,l 322
  35,l 324
  56,l 327
}

array set cube::rules {
  63,dc 1
  12,dc 1
  26,dc 1
  3,dc 1
  41,dc 1
  55,dc 2
  70,dc 1
  69,dc 1
  18,dc 1
  33,dc 1
  9,dc 1
  47,dc 1
  62,dc 1
  11,dc 1
  25,dc 1
  2,dc 1
  40,dc 1
  39,dc 3
  54,dc 2
  68,dc 1
  17,dc 1
  32,dc 1
  8,dc 1
  46,dc 1
  61,dc 1
  10,dc 1
  24,dc 1
  1,dc 1
  38,dc 0
  53,dc 1
  67,dc 1
  16,dc 1
  31,dc 1
  7,dc 1
  45,dc 1
  60,dc 1
  59,dc 1
  23,dc 1
  0,dc 1
  37,dc 1
  52,dc 2
  66,dc 1
  15,dc 1
  29,dc 1
  30,dc 1
  6,dc 1
  44,dc 1
  58,dc 1
  22,dc 1
  36,dc 1
  51,dc 2
  65,dc 0
  14,dc 1
  28,dc 0
  5,dc 1
  43,dc 2
  57,dc 2
  21,dc 1
  35,dc 1
  50,dc 2
  49,dc 1
  64,dc 1
  13,dc 1
  27,dc 1
  4,dc 1
  42,dc 2
  56,dc 2
  19,dc 1
  20,dc 1
  34,dc 1
  48,dc 1
}

array set cube::rules {
  41,line 168
  7,line 129
  37,line 163
  4,line 126
  34,line 157
  1,line 123
  31,line 154
  27,line 149
  24,line 146
  21,line 143
  17,line 139
  14,line 136
  70,line 205
  69,line 204
  11,line 133
  66,line 199
  63,line 194
  60,line 191
  59,line 190
  56,line 183
  53,line 180
  50,line 177
  49,line 176
  46,line 173
  43,line 170
  9,line 131
  40,line 167
  39,line 164
  6,line 128
  36,line 160
  3,line 125
  33,line 156
  29,line 152
  30,line 153
  26,line 148
  23,line 145
  19,line 141
  20,line 142
  16,line 138
  13,line 135
  68,line 201
  10,line 132
  65,line 198
  62,line 193
  58,line 187
  55,line 182
  52,line 179
  48,line 175
  45,line 172
  42,line 169
  8,line 130
  38,line 163
  5,line 127
  35,line 159
  2,line 124
  32,line 155
  28,line 151
  25,line 147
  22,line 144
  18,line 140
  15,line 137
  12,line 134
  67,line 200
  64,line 195
  61,line 192
  38,e 1
  57,line 186
  54,line 181
  51,line 178
  47,line 174
  44,line 171
}

array set cube::lr1_table {
  66,trans {}
  35 {{2 {0 299} 1}}
  14,trans {}
  36 {{3 {0 299} 1}}
  33,trans {}
  37 {{4 {0 299} 1}}
  52,trans {}
  38 {{5 {0 299} 1}}
  71,trans {}
  40 {{7 {0 299} 1}}
  39 {{6 {0 299} 1}}
  18,trans {}
  41 {{8 {0 299} 1}}
  1,trans {{305 20}}
  37,trans {}
  42 {{9 {0 299} 1}}
  56,trans {}
  43 {{10 {0 299} 1}}
  75,trans {}
  44 {{11 {0 299} 1}}
  23,trans {}
  45 {{12 {0 299} 1}}
  5,trans {}
  42,trans {}
  46 {{13 {0 299} 1}}
  61,trans {}
  47 {{14 {0 299} 1}}
  48 {{15 {0 299} 1}}
  27,trans {}
  9,trans {{257 34} {258 35} {259 36} {260 37} {261 38} {262 39} {263 40} {264 41} {265 42} {266 43} {267 44} {268 45} {269 46} {270 47} {271 48} {272 49} {273 50} {274 51} {275 52} {276 53} {277 54} {278 55} {279 56} {280 57} {281 58} {282 59} {283 60} {305 61} {310 62} {322 63} {330 64}}
  50 {{17 {0 299} 1}}
  49 {{16 {0 299} 1}}
  46,trans {}
  51 {{18 {0 299} 1}}
  65,trans {}
  52 {{19 {0 299} 1}}
  13,trans {{307 22} {316 23} {317 24} {318 25} {319 26} {320 27} {321 28} {328 68} {329 30}}
  53 {{20 {0 299} 1}}
  32,trans {}
  54 {{21 {0 299} 1}}
  51,trans {}
  55 {{22 {0 299} 1}}
  70,trans {{299 78}}
  69,trans {}
  56 {{23 {0 299} 1}}
  17,trans {{257 34} {258 35} {259 36} {260 37} {261 38} {262 39} {263 40} {264 41} {265 42} {266 43} {267 44} {268 45} {269 46} {270 47} {271 48} {272 49} {273 50} {274 51} {275 52} {276 53} {277 54} {278 55} {279 56} {280 57} {281 58} {282 59} {283 60} {322 69}}
  57 {{24 {0 299} 1}}
  0,trans {{297 1} {298 2} {300 3} {301 4} {302 5} {303 6} {304 7} {306 8} {307 9} {308 10} {309 11} {311 12} {312 13} {313 14} {314 15} {315 16} {324 17} {325 18} {327 19}}
  36,trans {}
  58 {{25 {0 299} 1}}
  55,trans {}
  60 {{27 {0 299} 1}}
  59 {{26 {0 299} 1}}
  74,trans {}
  61 {{66 {0 299} 1}}
  22,trans {{291 71} {292 72} {293 73} {294 74} {295 75} {296 76} {323 77}}
  62 {{68 {0 299} 1}}
  4,trans {{307 22} {316 23} {317 24} {318 25} {319 26} {320 27} {321 28} {328 29} {329 30}}
  41,trans {}
  63 {{67 {0 299} 1}}
  60,trans {}
  59,trans {}
  64 {{43 {0 299} 2}}
  78,trans {}
  65 {{69 {0 299} 1}}
  26,trans {}
  66 {{70 {0 299} 1}}
  8,trans {}
  45,trans {}
  67 {{42 {0 299} 2}}
  64,trans {}
  68 {{52 {0 299} 2}}
  70 {{39 0 2}}
  69 {{55 {0 299} 2}}
  12,trans {}
  31,trans {}
  71 {{29 {0 299} 1}}
  50,trans {}
  49,trans {}
  72 {{32 {0 299} 1}}
  68,trans {}
  73 {{30 {0 299} 1}}
  74 {{33 {0 299} 1}}
  16,trans {}
  35,trans {}
  75 {{31 {0 299} 1}}
  54,trans {}
  76 {{34 {0 299} 1}}
  73,trans {}
  77 {{57 {0 299} 2}}
  78 {{39 0 3}}
  21,trans {}
  3,trans {{297 21}}
  40,trans {}
  39,trans {}
  58,trans {}
  10 {{42 {0 299} 1} {69 {0 299} 0} {70 {0 299} 0} {1 {0 299} 0} {2 {0 299} 0} {3 {0 299} 0} {4 {0 299} 0} {5 {0 299} 0} {6 {0 299} 0} {7 {0 299} 0} {8 {0 299} 0} {9 {0 299} 0} {10 {0 299} 0} {11 {0 299} 0} {12 {0 299} 0} {13 {0 299} 0} {14 {0 299} 0} {15 {0 299} 0} {16 {0 299} 0} {17 {0 299} 0} {18 {0 299} 0} {19 {0 299} 0} {20 {0 299} 0} {21 {0 299} 0} {22 {0 299} 0} {23 {0 299} 0} {24 {0 299} 0} {25 {0 299} 0} {26 {0 299} 0} {27 {0 299} 0}}
  77,trans {}
  11 {{46 {0 299} 1}}
  25,trans {}
  12 {{40 {0 299} 1}}
  7,trans {{297 31} {298 32} {324 33}}
  44,trans {}
  13 {{52 {0 299} 1} {57 {0 299} 0} {58 {0 299} 0} {59 {0 299} 0} {60 {0 299} 0} {61 {0 299} 0} {62 {0 299} 0} {63 {0 299} 0} {64 {0 299} 0}}
  63,trans {}
  14 {{44 {0 299} 1}}
  11,trans {}
  15 {{47 {0 299} 1}}
  30,trans {}
  29,trans {}
  16 {{45 {0 299} 1}}
  48,trans {}
  0 {{0 0 0} {37 0 0} {39 0 0} {40 {0 299} 0} {41 {0 299} 0} {42 {0 299} 0} {43 {0 299} 0} {44 {0 299} 0} {45 {0 299} 0} {46 {0 299} 0} {47 {0 299} 0} {48 {0 299} 0} {49 {0 299} 0} {50 {0 299} 0} {51 {0 299} 0} {52 {0 299} 0} {53 {0 299} 0} {54 {0 299} 0} {55 {0 299} 0} {56 {0 299} 0} {35 {257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 276 277 278 279 280 281 282 283} 0} {36 {257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 276 277 278 279 280 281 282 283} 0}}
  17 {{55 {0 299} 1} {1 {0 299} 0} {2 {0 299} 0} {3 {0 299} 0} {4 {0 299} 0} {5 {0 299} 0} {6 {0 299} 0} {7 {0 299} 0} {8 {0 299} 0} {9 {0 299} 0} {10 {0 299} 0} {11 {0 299} 0} {12 {0 299} 0} {13 {0 299} 0} {14 {0 299} 0} {15 {0 299} 0} {16 {0 299} 0} {17 {0 299} 0} {18 {0 299} 0} {19 {0 299} 0} {20 {0 299} 0} {21 {0 299} 0} {22 {0 299} 0} {23 {0 299} 0} {24 {0 299} 0} {25 {0 299} 0} {26 {0 299} 0} {27 {0 299} 0}}
  67,trans {}
  1 {{53 {0 299} 1} {54 {0 299} 1} {35 {257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 276 277 278 279 280 281 282 283} 1}}
  18 {{0 0 1}}
  15,trans {}
  2 {{36 {257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 276 277 278 279 280 281 282 283} 1}}
  19 {{37 0 1} {39 0 1} {38 299 0}}
  20 {{54 {0 299} 2}}
  34,trans {}
  3 {{56 {0 299} 1}}
  21 {{56 {0 299} 2}}
  53,trans {}
  4 {{51 {0 299} 1} {57 {0 299} 0} {58 {0 299} 0} {59 {0 299} 0} {60 {0 299} 0} {61 {0 299} 0} {62 {0 299} 0} {63 {0 299} 0} {64 {0 299} 0}}
  22 {{57 {0 299} 1} {28 {0 299} 0} {29 {0 299} 0} {30 {0 299} 0} {31 {0 299} 0} {32 {0 299} 0} {33 {0 299} 0} {34 {0 299} 0}}
  72,trans {}
  5 {{41 {0 299} 1}}
  23 {{59 {0 299} 1}}
  20,trans {}
  19,trans {{326 70}}
  6 {{48 {0 299} 1}}
  2,trans {}
  24 {{60 {0 299} 1}}
  38,trans {}
  7 {{50 {0 299} 1} {35 {0 299} 0} {36 {0 299} 0}}
  25 {{61 {0 299} 1}}
  57,trans {}
  8 {{49 {0 299} 1}}
  26 {{62 {0 299} 1}}
  76,trans {}
  9 {{43 {0 299} 1} {65 {0 299} 0} {66 {0 299} 0} {67 {0 299} 0} {68 {0 299} 0} {1 {0 299} 0} {2 {0 299} 0} {3 {0 299} 0} {4 {0 299} 0} {5 {0 299} 0} {6 {0 299} 0} {7 {0 299} 0} {8 {0 299} 0} {9 {0 299} 0} {10 {0 299} 0} {11 {0 299} 0} {12 {0 299} 0} {13 {0 299} 0} {14 {0 299} 0} {15 {0 299} 0} {16 {0 299} 0} {17 {0 299} 0} {18 {0 299} 0} {19 {0 299} 0} {20 {0 299} 0} {21 {0 299} 0} {22 {0 299} 0} {23 {0 299} 0} {24 {0 299} 0} {25 {0 299} 0} {26 {0 299} 0} {27 {0 299} 0}}
  27 {{63 {0 299} 1}}
  24,trans {}
  28 {{64 {0 299} 1}}
  6,trans {}
  43,trans {}
  29 {{51 {0 299} 2}}
  30 {{58 {0 299} 1}}
  62,trans {}
  31 {{35 {0 299} 1}}
  10,trans {{257 34} {258 35} {259 36} {260 37} {261 38} {262 39} {263 40} {264 41} {265 42} {266 43} {267 44} {268 45} {269 46} {270 47} {271 48} {272 49} {273 50} {274 51} {275 52} {276 53} {277 54} {278 55} {279 56} {280 57} {281 58} {282 59} {283 60} {305 65} {322 66} {331 67}}
  32 {{36 {0 299} 1}}
  28,trans {}
  33 {{50 {0 299} 2}}
  47,trans {}
  34 {{1 {0 299} 1}}
}

array set cube::token_id_table {
  286 FK5_
  286,t 0
  287 J2000_
  292,line 44
  302,line 59
  288 ICRS_
  317,t 0
  265,title WCSH
  289 GALACTIC_
  290 ECLIPTIC_
  300 AXIS_
  284,title FK4
  291 YES_
  301 AXES_
  313,title PLAY
  292 NO_
  302 CLOSE_
  332,title {}
  288,line 39
  293 ON_
  303 FIRST_
  294 OFF_
  304 INTERVAL_
  305 IMAGE_
  295 TRUE_
  306 LAST_
  296 FALSE_
  307 LOCK_
  262,t 0
  297 INT_
  308 MATCH_
  285,line 36
  298 REAL_
  310 NONE_
  309 NEXT_
  299 STRING_
  311 OPEN_
  283,t 0
  312 ORDER_
  313 PLAY_
  314,t 0
  314 PREV_
  282,line 32
  315 STOP_
  316 123_
  264,title WCSG
  317 132_
  283,title WCSZ
  318 213_
  312,title ORDER
  331,title {}
  320 312_
  319 231_
  278,line 28
  error,line 121
  321 321_
  322 wcssys
  258,t 0
  323 yesno
  324 numeric
  325 command
  275,line 25
  279,t 0
  280,t 0
  326 @PSEUDO1
  327 cube
  328 order
  311,t 0
  330 lockslice
  329 orderAxes
  331 matchslice
  272,line 22
  332,t 1
  332 start'
  263,title WCSF
  282,title WCSY
  311,title OPEN
  330,title {}
  329,title {}
  268,line 18
  276,t 0
  265,line 15
  307,t 0
  297,t 0
  331,line 203
  328,t 1
  262,line 12
  327,line 166
  0,t 0
  0 {$}
  262,title WCSE
  281,title WCSX
  error,t 0
  310,title NONE
  309,title NEXT
  299,title string
  328,title {}
  258,line 8
  273,t 0
  324,line 158
  294,t 0
  304,t 0
  325,t 1
  321,line 79
  317,line 75
  261,title WCSD
  279,title WCSV
  280,title WCSW
  308,title MATCH
  269,t 0
  270,t 0
  298,title float
  327,title {}
  314,line 71
  291,t 0
  301,t 0
  322,t 1
  311,line 68
  307,line 64
  266,t 0
  260,title WCSC
  259,title WCSB
  297,line 50
  278,title WCSU
  307,title LOCK
  297,title integer
  326,title {}
  287,t 0
  294,line 46
  304,line 61
  318,t 0
  error,title {}
  291,line 43
  301,line 58
  263,t 0
  258,title WCSA
  287,line 38
  277,title WCST
  284,t 0
  306,title LAST
  296,title FALSE
  325,title {}
  315,t 0
  284,line 35
  281,line 31
  260,t 0
  259,t 0
  281,t 0
  257,title WCS
  277,line 27
  276,title WCSS
  312,t 0
  305,title IMAGE
  295,title TRUE
  324,title {}
  274,line 24
  271,line 21
  277,t 0
  308,t 0
  267,line 17
  298,t 0
  275,title WCSR
  294,title OFF
  304,title INTERVAL
  330,t 1
  329,t 1
  323,title {}
  264,line 14
  330,line 197
  329,line 189
  261,line 11
  274,t 0
  326,line 163
  305,t 0
  295,t 0
  257,line 7
  326,t 1
  274,title WCSQ
  323,line 150
  293,title ON
  303,title FIRST
  322,title {}
  320,line 78
  319,line 77
  error error
  271,t 0
  292,t 0
  302,t 0
  316,line 74
  323,t 1
  273,title WCSP
  313,line 70
  292,title NO
  302,title CLOSE
  321,title 321
  267,t 0
  310,line 67
  309,line 66
  299,line 53
  288,t 0
  320,t 0
  319,t 0
  306,line 63
  296,line 48
  272,title WCSO
  291,title YES
  293,line 45
  301,title AXES
  303,line 60
  320,title 312
  319,title 231
  264,t 0
  285,t 0
  289,line 40
  290,line 41
  300,line 57
  316,t 0
  286,line 37
  271,title WCSN
  261,t 0
  283,line 33
  289,title GALACTIC
  290,title ECLIPTIC
  300,title AXIS
  318,title 213
  282,t 0
  279,line 29
  280,line 30
  313,t 0
  276,line 26
  257,t 0
  269,title WCSL
  270,title WCSM
  273,line 23
  288,title ICRS
  317,title 132
  278,t 0
  310,t 0
  309,t 0
  299,t 0
  269,line 19
  270,line 20
  331,t 1
  266,line 16
  332,line 206
  268,title WCSK
  275,t 0
  263,line 13
  287,title J2000
  316,title 123
  328,line 185
  306,t 0
  296,t 0
  327,t 1
  260,line 10
  259,line 9
  325,line 162
  322,line 122
  272,t 0
  267,title WCSJ
  257 WCS_
  286,title FK5
  293,t 0
  303,t 0
  315,title STOP
  258 WCSA_
  318,line 76
  260 WCSC_
  259 WCSB_
  324,t 1
  261 WCSD_
  262 WCSE_
  263 WCSF_
  264 WCSG_
  315,line 72
  265 WCSH_
  266 WCSI_
  267 WCSJ_
  268,t 0
  268 WCSK_
  269 WCSL_
  270 WCSM_
  312,line 69
  271 WCSN_
  272 WCSO_
  289,t 0
  290,t 0
  300,t 0
  266,title WCSI
  273 WCSP_
  274 WCSQ_
  285,title B1950
  321,t 0
  314,title PREV
  275 WCSR_
  308,line 65
  276 WCSS_
  298,line 51
  277 WCST_
  278 WCSU_
  279 WCSV_
  280 WCSW_
  281 WCSX_
  305,line 62
  282 WCSY_
  295,line 47
  265,t 0
  283 WCSZ_
  284 FK4_
  285 B1950_
}

proc cube::yyparse {} {
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
                    1 { set _ wcs }
                    2 { set _ wcsa }
                    3 { set _ wcsb }
                    4 { set _ wcsc }
                    5 { set _ wcsd }
                    6 { set _ wcse }
                    7 { set _ wcsf }
                    8 { set _ wcsg }
                    9 { set _ wcsh }
                    10 { set _ wcsi }
                    11 { set _ wcsj }
                    12 { set _ wcsk }
                    13 { set _ wcsl }
                    14 { set _ wcsm }
                    15 { set _ wcsn }
                    16 { set _ wcso }
                    17 { set _ wcsp }
                    18 { set _ wcsq }
                    19 { set _ wcsr }
                    20 { set _ wcss }
                    21 { set _ wcst }
                    22 { set _ wcsu }
                    23 { set _ wcsv }
                    24 { set _ wcsw }
                    25 { set _ wcsx }
                    26 { set _ wcsy }
                    27 { set _ wcsz }
                    28 { set _ 1 }
                    29 { set _ 1 }
                    30 { set _ 1 }
                    31 { set _ 1 }
                    32 { set _ 0 }
                    33 { set _ 0 }
                    34 { set _ 0 }
                    35 { set _ $1 }
                    36 { set _ $1 }
                    38 { global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT} }
                    41 { CubeDestroyDialog }
                    42 { MatchCubeCurrent $2 }
                    43 { ProcessCmdSet cube lock $2 LockCubeCurrent }
                    44 { CubePlay }
                    45 { CubeStop }
                    46 { CubeNext }
                    47 { CubePrev }
                    48 { CubeFirst }
                    49 { CubeLast }
                    50 { ProcessCmdSet cube interval [expr int($2*1000)] }
                    53 { CubeCmd $1 }
                    54 { CubeCmd $1 }
                    55 { CubeCmdCoord $1 $2 }
                    56 { CubeCmdAxis $2 }
                    57 { ProcessCmdSet cube lock,axes $2 LockAxesCurrent }
                    58 { ProcessCmdSet cube axes $1 }
                    59 { set _ 123 }
                    60 { set _ 132 }
                    61 { set _ 213 }
                    62 { set _ 231 }
                    63 { set _ 312 }
                    64 { set _ 321 }
                    65 { set _ image }
                    66 { set _ image }
                    67 { set _ $1 }
                    68 { set _ none }
                    69 { set _ image }
                    70 { set _ $1 }
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

proc cube::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
