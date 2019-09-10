/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse frparse
#define yylex   frlex
#define yyerror frerror
#define yylval  frlval
#define yychar  frchar
#define yydebug frdebug
#define yynerrs frnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     INT = 259,
     STRING = 260,
     POINTER = 261,
     ANGDEGREE = 262,
     ANGRADIAN = 263,
     SEXSTR = 264,
     HMSSTR = 265,
     DMSSTR = 266,
     ABOUT_ = 267,
     AIP_ = 268,
     ALLOC_ = 269,
     ALLOCGZ_ = 270,
     ALIGN_ = 271,
     ALL_ = 272,
     ALT_ = 273,
     AMPLIFIER_ = 274,
     ANALYSIS_ = 275,
     ANGLE_ = 276,
     ANNULUS_ = 277,
     APPEND_ = 278,
     ARCMIN_ = 279,
     ARCSEC_ = 280,
     ARRAY_ = 281,
     ARROW_ = 282,
     ASINH_ = 283,
     AST_ = 284,
     AUTO_ = 285,
     AUX_ = 286,
     AVERAGE_ = 287,
     AXES_ = 288,
     AZIMUTH_ = 289,
     B1950_ = 290,
     BACK_ = 291,
     BACKGROUND_ = 292,
     BASE_ = 293,
     BBOX_ = 294,
     BEGIN_ = 295,
     BG_ = 296,
     BIG_ = 297,
     BIGENDIAN_ = 298,
     BIN_ = 299,
     BITPIX_ = 300,
     BLOCK_ = 301,
     BORDER_ = 302,
     BOX_ = 303,
     BOXANNULUS_ = 304,
     BOXCAR_ = 305,
     BOXCIRCLE_ = 306,
     BPANDA_ = 307,
     BUFFER_ = 308,
     BW_ = 309,
     CALLBACK_ = 310,
     CANVAS_ = 311,
     CATALOG_ = 312,
     CELESTIAL_ = 313,
     CENTER_ = 314,
     CENTROID_ = 315,
     CHANNEL_ = 316,
     CIRCLE_ = 317,
     CIAO_ = 318,
     CLEAR_ = 319,
     CLIP_ = 320,
     COLOR_ = 321,
     COLORBAR_ = 322,
     COLORMAP_ = 323,
     COLORSCALE_ = 324,
     COLORSPACE_ = 325,
     COLS_ = 326,
     COLUMN_ = 327,
     COMMAND_ = 328,
     COMPASS_ = 329,
     COMPOSITE_ = 330,
     COMPRESS_ = 331,
     CONTOUR_ = 332,
     CONTRAST_ = 333,
     COORDINATES_ = 334,
     COPY_ = 335,
     COUNT_ = 336,
     CPANDA_ = 337,
     CREATE_ = 338,
     CROP_ = 339,
     CROSS_ = 340,
     CROSSHAIR_ = 341,
     CUBE_ = 342,
     CURSOR_ = 343,
     CUT_ = 344,
     CMYK_ = 345,
     DASH_ = 346,
     DASHLIST_ = 347,
     DATA_ = 348,
     DATAMIN_ = 349,
     DATASEC_ = 350,
     DEBUG_ = 351,
     DEGREES_ = 352,
     DEFAULT_ = 353,
     DELETE_ = 354,
     DEPTH_ = 355,
     DETECTOR_ = 356,
     DIAMOND_ = 357,
     DIM_ = 358,
     DS9_ = 359,
     EDIT_ = 360,
     ECLIPTIC_ = 361,
     ELEVATION_ = 362,
     ELLIPTIC_ = 363,
     ELLIPSE_ = 364,
     ELLIPSEANNULUS_ = 365,
     END_ = 366,
     ENVI_ = 367,
     EPANDA_ = 368,
     EPSILON_ = 369,
     EQUATORIAL_ = 370,
     ERASE_ = 371,
     EXT_ = 372,
     FACTOR_ = 373,
     FALSE_ = 374,
     FILE_ = 375,
     FILL_ = 376,
     FILTER_ = 377,
     FIT_ = 378,
     FITS_ = 379,
     FITSY_ = 380,
     FIXED_ = 381,
     FK4_ = 382,
     FK5_ = 383,
     FONT_ = 384,
     FORMAT_ = 385,
     FOOTPRINT_ = 386,
     FROM_ = 387,
     FRONT_ = 388,
     FULL_ = 389,
     FUNCTION_ = 390,
     GALACTIC_ = 391,
     GAUSSIAN_ = 392,
     GET_ = 393,
     GLOBAL_ = 394,
     GRAPHICS_ = 395,
     GRAY_ = 396,
     GRID_ = 397,
     GZ_ = 398,
     HANDLE_ = 399,
     HAS_ = 400,
     HEAD_ = 401,
     HEADER_ = 402,
     HEIGHT_ = 403,
     HIDE_ = 404,
     HIGHLITE_ = 405,
     HISTEQU_ = 406,
     HISTOGRAM_ = 407,
     HORIZONTAL_ = 408,
     ICRS_ = 409,
     ID_ = 410,
     IIS_ = 411,
     IMAGE_ = 412,
     INCLUDE_ = 413,
     INCR_ = 414,
     INFO_ = 415,
     ITERATION_ = 416,
     IRAF_ = 417,
     IRAFMIN_ = 418,
     J2000_ = 419,
     KEY_ = 420,
     KEYWORD_ = 421,
     LABEL_ = 422,
     LENGTH_ = 423,
     LEVEL_ = 424,
     LITTLE_ = 425,
     LITTLEENDIAN_ = 426,
     LINE_ = 427,
     LINEAR_ = 428,
     LIST_ = 429,
     LOAD_ = 430,
     LOCAL_ = 431,
     LOG_ = 432,
     MACOSX_ = 433,
     MAGNIFIER_ = 434,
     MATCH_ = 435,
     MAP_ = 436,
     MARK_ = 437,
     MARKER_ = 438,
     MASK_ = 439,
     MESSAGE_ = 440,
     METHOD_ = 441,
     MINMAX_ = 442,
     MINOR_ = 443,
     MIP_ = 444,
     MMAP_ = 445,
     MMAPINCR_ = 446,
     MOSAIC_ = 447,
     MODE_ = 448,
     MOTION_ = 449,
     MOVE_ = 450,
     NAME_ = 451,
     NAN_ = 452,
     NATIVE_ = 453,
     NAXES_ = 454,
     NEW_ = 455,
     NEXT_ = 456,
     NO_ = 457,
     NONE_ = 458,
     NONNAN_ = 459,
     NONZERO_ = 460,
     NOW_ = 461,
     NRRD_ = 462,
     NUMBER_ = 463,
     OBJECT_ = 464,
     OFF_ = 465,
     ON_ = 466,
     ONLY_ = 467,
     OPTION_ = 468,
     ORIENT_ = 469,
     PAN_ = 470,
     PANNER_ = 471,
     PARSER_ = 472,
     PASTE_ = 473,
     PERF_ = 474,
     PHOTO_ = 475,
     PHYSICAL_ = 476,
     PIXEL_ = 477,
     PLOT2D_ = 478,
     PLOT3D_ = 479,
     POINT_ = 480,
     POINTER_ = 481,
     POLYGON_ = 482,
     POSTSCRIPT_ = 483,
     POW_ = 484,
     PRECISION_ = 485,
     PRINT_ = 486,
     PRESERVE_ = 487,
     PROJECTION_ = 488,
     PROPERTY_ = 489,
     PUBLICATION_ = 490,
     PROS_ = 491,
     QUERY_ = 492,
     RADIAL_ = 493,
     RADIUS_ = 494,
     RANGE_ = 495,
     REGION_ = 496,
     REPLACE_ = 497,
     RESAMPLE_ = 498,
     RESET_ = 499,
     RESOLUTION_ = 500,
     RGB_ = 501,
     ROOT_ = 502,
     ROTATE_ = 503,
     RULER_ = 504,
     SAMPLE_ = 505,
     SAOIMAGE_ = 506,
     SAOTNG_ = 507,
     SAVE_ = 508,
     SCALE_ = 509,
     SCAN_ = 510,
     SCIENTIFIC_ = 511,
     SCOPE_ = 512,
     SEGMENT_ = 513,
     SELECT_ = 514,
     SET_ = 515,
     SEXAGESIMAL_ = 516,
     SHAPE_ = 517,
     SHARED_ = 518,
     SHIFT_ = 519,
     SHMID_ = 520,
     SHOW_ = 521,
     SIGMA_ = 522,
     SINH_ = 523,
     SIZE_ = 524,
     SLICE_ = 525,
     SMMAP_ = 526,
     SMOOTH_ = 527,
     SOCKET_ = 528,
     SOCKETGZ_ = 529,
     SOURCE_ = 530,
     SQRT_ = 531,
     SQUARED_ = 532,
     SSHARED_ = 533,
     STATS_ = 534,
     STATUS_ = 535,
     SUM_ = 536,
     SYSTEM_ = 537,
     TABLE_ = 538,
     TAG_ = 539,
     TEMPLATE_ = 540,
     TEXT_ = 541,
     THREADS_ = 542,
     THREED_ = 543,
     THRESHOLD_ = 544,
     THICK_ = 545,
     TRANSPARENCY_ = 546,
     TO_ = 547,
     TOGGLE_ = 548,
     TOPHAT_ = 549,
     TRUE_ = 550,
     TYPE_ = 551,
     UNDO_ = 552,
     UNHIGHLITE_ = 553,
     UNLOAD_ = 554,
     UNSELECT_ = 555,
     UPDATE_ = 556,
     USER_ = 557,
     VALUE_ = 558,
     VAR_ = 559,
     VIEW_ = 560,
     VECTOR_ = 561,
     VERSION_ = 562,
     VERTEX_ = 563,
     VERTICAL_ = 564,
     WARP_ = 565,
     WCS_ = 566,
     WCSA_ = 567,
     WCSB_ = 568,
     WCSC_ = 569,
     WCSD_ = 570,
     WCSE_ = 571,
     WCSF_ = 572,
     WCSG_ = 573,
     WCSH_ = 574,
     WCSI_ = 575,
     WCSJ_ = 576,
     WCSK_ = 577,
     WCSL_ = 578,
     WCSM_ = 579,
     WCSN_ = 580,
     WCSO_ = 581,
     WCSP_ = 582,
     WCSQ_ = 583,
     WCSR_ = 584,
     WCSS_ = 585,
     WCST_ = 586,
     WCSU_ = 587,
     WCSV_ = 588,
     WCSW_ = 589,
     WCSX_ = 590,
     WCSY_ = 591,
     WCSZ_ = 592,
     WCS0_ = 593,
     WFPC2_ = 594,
     WIDTH_ = 595,
     WIN32_ = 596,
     XML_ = 597,
     XY_ = 598,
     YES_ = 599,
     ZERO_ = 600,
     ZMAX_ = 601,
     ZSCALE_ = 602,
     ZOOM_ = 603
   };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define POINTER 261
#define ANGDEGREE 262
#define ANGRADIAN 263
#define SEXSTR 264
#define HMSSTR 265
#define DMSSTR 266
#define ABOUT_ 267
#define AIP_ 268
#define ALLOC_ 269
#define ALLOCGZ_ 270
#define ALIGN_ 271
#define ALL_ 272
#define ALT_ 273
#define AMPLIFIER_ 274
#define ANALYSIS_ 275
#define ANGLE_ 276
#define ANNULUS_ 277
#define APPEND_ 278
#define ARCMIN_ 279
#define ARCSEC_ 280
#define ARRAY_ 281
#define ARROW_ 282
#define ASINH_ 283
#define AST_ 284
#define AUTO_ 285
#define AUX_ 286
#define AVERAGE_ 287
#define AXES_ 288
#define AZIMUTH_ 289
#define B1950_ 290
#define BACK_ 291
#define BACKGROUND_ 292
#define BASE_ 293
#define BBOX_ 294
#define BEGIN_ 295
#define BG_ 296
#define BIG_ 297
#define BIGENDIAN_ 298
#define BIN_ 299
#define BITPIX_ 300
#define BLOCK_ 301
#define BORDER_ 302
#define BOX_ 303
#define BOXANNULUS_ 304
#define BOXCAR_ 305
#define BOXCIRCLE_ 306
#define BPANDA_ 307
#define BUFFER_ 308
#define BW_ 309
#define CALLBACK_ 310
#define CANVAS_ 311
#define CATALOG_ 312
#define CELESTIAL_ 313
#define CENTER_ 314
#define CENTROID_ 315
#define CHANNEL_ 316
#define CIRCLE_ 317
#define CIAO_ 318
#define CLEAR_ 319
#define CLIP_ 320
#define COLOR_ 321
#define COLORBAR_ 322
#define COLORMAP_ 323
#define COLORSCALE_ 324
#define COLORSPACE_ 325
#define COLS_ 326
#define COLUMN_ 327
#define COMMAND_ 328
#define COMPASS_ 329
#define COMPOSITE_ 330
#define COMPRESS_ 331
#define CONTOUR_ 332
#define CONTRAST_ 333
#define COORDINATES_ 334
#define COPY_ 335
#define COUNT_ 336
#define CPANDA_ 337
#define CREATE_ 338
#define CROP_ 339
#define CROSS_ 340
#define CROSSHAIR_ 341
#define CUBE_ 342
#define CURSOR_ 343
#define CUT_ 344
#define CMYK_ 345
#define DASH_ 346
#define DASHLIST_ 347
#define DATA_ 348
#define DATAMIN_ 349
#define DATASEC_ 350
#define DEBUG_ 351
#define DEGREES_ 352
#define DEFAULT_ 353
#define DELETE_ 354
#define DEPTH_ 355
#define DETECTOR_ 356
#define DIAMOND_ 357
#define DIM_ 358
#define DS9_ 359
#define EDIT_ 360
#define ECLIPTIC_ 361
#define ELEVATION_ 362
#define ELLIPTIC_ 363
#define ELLIPSE_ 364
#define ELLIPSEANNULUS_ 365
#define END_ 366
#define ENVI_ 367
#define EPANDA_ 368
#define EPSILON_ 369
#define EQUATORIAL_ 370
#define ERASE_ 371
#define EXT_ 372
#define FACTOR_ 373
#define FALSE_ 374
#define FILE_ 375
#define FILL_ 376
#define FILTER_ 377
#define FIT_ 378
#define FITS_ 379
#define FITSY_ 380
#define FIXED_ 381
#define FK4_ 382
#define FK5_ 383
#define FONT_ 384
#define FORMAT_ 385
#define FOOTPRINT_ 386
#define FROM_ 387
#define FRONT_ 388
#define FULL_ 389
#define FUNCTION_ 390
#define GALACTIC_ 391
#define GAUSSIAN_ 392
#define GET_ 393
#define GLOBAL_ 394
#define GRAPHICS_ 395
#define GRAY_ 396
#define GRID_ 397
#define GZ_ 398
#define HANDLE_ 399
#define HAS_ 400
#define HEAD_ 401
#define HEADER_ 402
#define HEIGHT_ 403
#define HIDE_ 404
#define HIGHLITE_ 405
#define HISTEQU_ 406
#define HISTOGRAM_ 407
#define HORIZONTAL_ 408
#define ICRS_ 409
#define ID_ 410
#define IIS_ 411
#define IMAGE_ 412
#define INCLUDE_ 413
#define INCR_ 414
#define INFO_ 415
#define ITERATION_ 416
#define IRAF_ 417
#define IRAFMIN_ 418
#define J2000_ 419
#define KEY_ 420
#define KEYWORD_ 421
#define LABEL_ 422
#define LENGTH_ 423
#define LEVEL_ 424
#define LITTLE_ 425
#define LITTLEENDIAN_ 426
#define LINE_ 427
#define LINEAR_ 428
#define LIST_ 429
#define LOAD_ 430
#define LOCAL_ 431
#define LOG_ 432
#define MACOSX_ 433
#define MAGNIFIER_ 434
#define MATCH_ 435
#define MAP_ 436
#define MARK_ 437
#define MARKER_ 438
#define MASK_ 439
#define MESSAGE_ 440
#define METHOD_ 441
#define MINMAX_ 442
#define MINOR_ 443
#define MIP_ 444
#define MMAP_ 445
#define MMAPINCR_ 446
#define MOSAIC_ 447
#define MODE_ 448
#define MOTION_ 449
#define MOVE_ 450
#define NAME_ 451
#define NAN_ 452
#define NATIVE_ 453
#define NAXES_ 454
#define NEW_ 455
#define NEXT_ 456
#define NO_ 457
#define NONE_ 458
#define NONNAN_ 459
#define NONZERO_ 460
#define NOW_ 461
#define NRRD_ 462
#define NUMBER_ 463
#define OBJECT_ 464
#define OFF_ 465
#define ON_ 466
#define ONLY_ 467
#define OPTION_ 468
#define ORIENT_ 469
#define PAN_ 470
#define PANNER_ 471
#define PARSER_ 472
#define PASTE_ 473
#define PERF_ 474
#define PHOTO_ 475
#define PHYSICAL_ 476
#define PIXEL_ 477
#define PLOT2D_ 478
#define PLOT3D_ 479
#define POINT_ 480
#define POINTER_ 481
#define POLYGON_ 482
#define POSTSCRIPT_ 483
#define POW_ 484
#define PRECISION_ 485
#define PRINT_ 486
#define PRESERVE_ 487
#define PROJECTION_ 488
#define PROPERTY_ 489
#define PUBLICATION_ 490
#define PROS_ 491
#define QUERY_ 492
#define RADIAL_ 493
#define RADIUS_ 494
#define RANGE_ 495
#define REGION_ 496
#define REPLACE_ 497
#define RESAMPLE_ 498
#define RESET_ 499
#define RESOLUTION_ 500
#define RGB_ 501
#define ROOT_ 502
#define ROTATE_ 503
#define RULER_ 504
#define SAMPLE_ 505
#define SAOIMAGE_ 506
#define SAOTNG_ 507
#define SAVE_ 508
#define SCALE_ 509
#define SCAN_ 510
#define SCIENTIFIC_ 511
#define SCOPE_ 512
#define SEGMENT_ 513
#define SELECT_ 514
#define SET_ 515
#define SEXAGESIMAL_ 516
#define SHAPE_ 517
#define SHARED_ 518
#define SHIFT_ 519
#define SHMID_ 520
#define SHOW_ 521
#define SIGMA_ 522
#define SINH_ 523
#define SIZE_ 524
#define SLICE_ 525
#define SMMAP_ 526
#define SMOOTH_ 527
#define SOCKET_ 528
#define SOCKETGZ_ 529
#define SOURCE_ 530
#define SQRT_ 531
#define SQUARED_ 532
#define SSHARED_ 533
#define STATS_ 534
#define STATUS_ 535
#define SUM_ 536
#define SYSTEM_ 537
#define TABLE_ 538
#define TAG_ 539
#define TEMPLATE_ 540
#define TEXT_ 541
#define THREADS_ 542
#define THREED_ 543
#define THRESHOLD_ 544
#define THICK_ 545
#define TRANSPARENCY_ 546
#define TO_ 547
#define TOGGLE_ 548
#define TOPHAT_ 549
#define TRUE_ 550
#define TYPE_ 551
#define UNDO_ 552
#define UNHIGHLITE_ 553
#define UNLOAD_ 554
#define UNSELECT_ 555
#define UPDATE_ 556
#define USER_ 557
#define VALUE_ 558
#define VAR_ 559
#define VIEW_ 560
#define VECTOR_ 561
#define VERSION_ 562
#define VERTEX_ 563
#define VERTICAL_ 564
#define WARP_ 565
#define WCS_ 566
#define WCSA_ 567
#define WCSB_ 568
#define WCSC_ 569
#define WCSD_ 570
#define WCSE_ 571
#define WCSF_ 572
#define WCSG_ 573
#define WCSH_ 574
#define WCSI_ 575
#define WCSJ_ 576
#define WCSK_ 577
#define WCSL_ 578
#define WCSM_ 579
#define WCSN_ 580
#define WCSO_ 581
#define WCSP_ 582
#define WCSQ_ 583
#define WCSR_ 584
#define WCSS_ 585
#define WCST_ 586
#define WCSU_ 587
#define WCSV_ 588
#define WCSW_ 589
#define WCSX_ 590
#define WCSY_ 591
#define WCSZ_ 592
#define WCS0_ 593
#define WFPC2_ 594
#define WIDTH_ 595
#define WIN32_ 596
#define XML_ 597
#define XY_ 598
#define YES_ 599
#define ZERO_ 600
#define ZMAX_ 601
#define ZSCALE_ 602
#define ZOOM_ 603




/* Copy the first part of user declarations.  */
#line 10 "frame/parser.Y"

#define YYDEBUG 1

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "frame3d.h"
#include "fitsimage.h"
#include "fitsmask.h"
#include "marker.h"

#undef yyFlexLexer
#define yyFlexLexer frFlexLexer
#include <FlexLexer.h>

extern int frlex(void*, frFlexLexer*);
extern void frerror(Base*, frFlexLexer*, const char*);

static Coord::CoordSystem currentCoord = Coord::IMAGE;
static Coord::SkyFrame currentSky = Coord::FK5;

static unsigned short defaultProps = Marker::SELECT | Marker::HIGHLITE |
		Marker::EDIT | Marker::MOVE | Marker::ROTATE | 
		Marker::DELETE | Marker::INCLUDE | Marker::SOURCE;
static unsigned short currentProps;
static char currentColor[16];
static int currentWidth;
static int currentDash[2];
static char currentFont[32];
static char currentText[80];

static List<Tag> taglist;
static List<CallBack> cblist;

static unsigned short propQMask;
static unsigned short propQValue;

static void setProps(unsigned short* props, unsigned short prop, int value);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 52 "frame/parser.Y"
{
#define FRBUFSIZE 4096
  char chr;
  char str[FRBUFSIZE];
  void* ptr;
  int integer;
  double real;
  double vector[3];
  int dash[2];
}
/* Line 193 of yacc.c.  */
#line 853 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 866 "frame/parser.C"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  356
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5392

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  353
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1258
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2786

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   603

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   352,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   350,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   351,   349,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    20,    22,    24,
      27,    31,    34,    37,    40,    43,    46,    49,    52,    55,
      58,    61,    64,    66,    69,    72,    76,    79,    82,    85,
      88,    92,    95,    99,   102,   105,   108,   111,   114,   117,
     119,   123,   126,   129,   132,   134,   137,   140,   143,   145,
     148,   150,   153,   156,   159,   162,   164,   166,   168,   170,
     173,   176,   179,   182,   185,   188,   191,   194,   197,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   219,
     222,   225,   227,   229,   230,   232,   234,   236,   238,   240,
     242,   244,   247,   250,   253,   256,   258,   260,   262,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   284,
     286,   288,   290,   292,   294,   296,   298,   300,   302,   304,
     306,   308,   310,   312,   314,   316,   318,   320,   322,   324,
     326,   327,   329,   331,   333,   335,   337,   339,   341,   343,
     345,   347,   349,   351,   353,   355,   357,   359,   361,   363,
     364,   366,   368,   370,   372,   374,   376,   378,   379,   381,
     383,   384,   386,   388,   390,   391,   393,   395,   396,   398,
     400,   401,   403,   405,   406,   408,   410,   412,   414,   416,
     418,   420,   421,   423,   425,   427,   429,   431,   433,   435,
     436,   438,   440,   441,   443,   445,   447,   449,   451,   454,
     457,   460,   463,   466,   469,   472,   474,   477,   479,   482,
     484,   487,   489,   492,   495,   502,   505,   510,   513,   516,
     519,   523,   526,   529,   531,   534,   536,   539,   544,   550,
     553,   557,   563,   570,   572,   574,   576,   584,   596,   605,
     618,   620,   623,   626,   628,   630,   633,   636,   639,   642,
     646,   650,   653,   656,   658,   660,   662,   664,   666,   668,
     670,   673,   676,   679,   683,   686,   689,   692,   699,   710,
     712,   715,   717,   724,   735,   737,   740,   743,   746,   749,
     752,   755,   769,   783,   796,   809,   811,   812,   814,   816,
     821,   828,   830,   832,   834,   836,   838,   840,   842,   844,
     846,   851,   855,   860,   861,   868,   877,   880,   884,   888,
     892,   893,   898,   903,   908,   913,   917,   921,   923,   927,
     933,   938,   943,   947,   950,   951,   953,   955,   959,   962,
     965,   968,   971,   974,   977,   980,   983,   986,   989,   992,
     995,   998,  1001,  1003,  1006,  1009,  1014,  1024,  1027,  1030,
    1033,  1035,  1039,  1042,  1045,  1047,  1050,  1059,  1062,  1064,
    1067,  1069,  1072,  1074,  1079,  1089,  1092,  1094,  1096,  1098,
    1100,  1103,  1105,  1107,  1110,  1112,  1113,  1116,  1119,  1121,
    1122,  1125,  1128,  1130,  1132,  1135,  1138,  1141,  1143,  1145,
    1147,  1149,  1151,  1153,  1154,  1156,  1159,  1161,  1166,  1172,
    1173,  1176,  1178,  1184,  1187,  1190,  1192,  1194,  1196,  1199,
    1201,  1204,  1206,  1208,  1209,  1211,  1213,  1214,  1216,  1222,
    1229,  1233,  1240,  1244,  1246,  1250,  1252,  1254,  1256,  1260,
    1267,  1275,  1281,  1283,  1285,  1290,  1296,  1298,  1302,  1303,
    1305,  1308,  1310,  1315,  1317,  1320,  1322,  1325,  1329,  1332,
    1334,  1337,  1339,  1344,  1347,  1349,  1351,  1355,  1357,  1360,
    1364,  1367,  1368,  1370,  1375,  1378,  1379,  1384,  1390,  1396,
    1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,  1415,
    1417,  1419,  1421,  1423,  1425,  1428,  1430,  1433,  1435,  1438,
    1441,  1444,  1447,  1449,  1451,  1453,  1454,  1456,  1457,  1459,
    1460,  1462,  1463,  1465,  1466,  1469,  1472,  1473,  1475,  1478,
    1480,  1487,  1493,  1495,  1497,  1499,  1502,  1505,  1507,  1509,
    1511,  1513,  1516,  1518,  1520,  1522,  1525,  1527,  1529,  1531,
    1534,  1537,  1540,  1541,  1543,  1544,  1546,  1548,  1550,  1552,
    1554,  1556,  1558,  1560,  1563,  1566,  1569,  1571,  1574,  1578,
    1580,  1583,  1586,  1591,  1598,  1600,  1611,  1613,  1616,  1620,
    1624,  1627,  1630,  1633,  1636,  1639,  1642,  1645,  1650,  1655,
    1660,  1664,  1668,  1674,  1679,  1684,  1689,  1693,  1697,  1701,
    1705,  1708,  1711,  1716,  1720,  1724,  1728,  1732,  1737,  1742,
    1747,  1752,  1758,  1763,  1770,  1778,  1783,  1788,  1794,  1797,
    1801,  1805,  1809,  1812,  1816,  1820,  1824,  1828,  1833,  1837,
    1843,  1850,  1854,  1858,  1863,  1867,  1871,  1875,  1879,  1883,
    1889,  1893,  1897,  1902,  1906,  1909,  1912,  1914,  1918,  1923,
    1928,  1933,  1938,  1943,  1950,  1955,  1960,  1966,  1971,  1976,
    1981,  1986,  1992,  1997,  2004,  2012,  2017,  2022,  2028,  2034,
    2040,  2046,  2052,  2058,  2066,  2072,  2078,  2085,  2090,  2095,
    2100,  2105,  2110,  2117,  2122,  2127,  2133,  2139,  2145,  2151,
    2157,  2164,  2170,  2178,  2187,  2193,  2199,  2206,  2210,  2214,
    2218,  2222,  2227,  2231,  2237,  2244,  2248,  2252,  2257,  2261,
    2265,  2269,  2273,  2277,  2283,  2287,  2291,  2296,  2301,  2306,
    2310,  2316,  2321,  2326,  2329,  2333,  2340,  2347,  2349,  2351,
    2353,  2356,  2359,  2362,  2366,  2370,  2373,  2386,  2389,  2392,
    2394,  2398,  2403,  2406,  2407,  2411,  2413,  2415,  2418,  2421,
    2424,  2427,  2430,  2435,  2440,  2445,  2449,  2454,  2460,  2469,
    2476,  2481,  2491,  2498,  2506,  2517,  2529,  2542,  2552,  2558,
    2563,  2570,  2574,  2580,  2586,  2593,  2599,  2604,  2614,  2625,
    2637,  2647,  2654,  2661,  2668,  2675,  2682,  2689,  2696,  2703,
    2710,  2718,  2726,  2729,  2734,  2739,  2744,  2749,  2755,  2760,
    2765,  2771,  2777,  2781,  2786,  2791,  2796,  2801,  2809,  2819,
    2826,  2837,  2849,  2862,  2872,  2876,  2879,  2883,  2889,  2897,
    2902,  2906,  2910,  2917,  2925,  2933,  2938,  2943,  2948,  2958,
    2963,  2967,  2972,  2980,  2988,  2991,  2995,  2999,  3003,  3008,
    3011,  3014,  3019,  3030,  3034,  3036,  3040,  3043,  3046,  3049,
    3052,  3056,  3062,  3067,  3073,  3076,  3084,  3088,  3091,  3094,
    3098,  3101,  3104,  3107,  3111,  3114,  3118,  3123,  3127,  3131,
    3138,  3143,  3146,  3150,  3153,  3156,  3161,  3165,  3169,  3172,
    3176,  3178,  3181,  3183,  3186,  3189,  3192,  3194,  3196,  3198,
    3200,  3203,  3205,  3208,  3211,  3213,  3216,  3219,  3221,  3224,
    3226,  3228,  3230,  3232,  3234,  3236,  3238,  3240,  3241,  3243,
    3246,  3249,  3252,  3256,  3262,  3270,  3278,  3285,  3292,  3299,
    3306,  3312,  3319,  3326,  3333,  3340,  3347,  3354,  3361,  3373,
    3381,  3389,  3397,  3407,  3417,  3428,  3441,  3454,  3457,  3460,
    3464,  3469,  3474,  3479,  3482,  3487,  3492,  3494,  3496,  3498,
    3500,  3502,  3504,  3506,  3508,  3511,  3513,  3515,  3517,  3521,
    3525,  3534,  3541,  3552,  3561,  3569,  3575,  3578,  3581,  3585,
    3590,  3596,  3600,  3606,  3612,  3616,  3621,  3627,  3633,  3639,
    3643,  3649,  3652,  3656,  3660,  3666,  3670,  3674,  3678,  3683,
    3689,  3695,  3699,  3705,  3711,  3715,  3720,  3726,  3732,  3735,
    3738,  3742,  3748,  3755,  3762,  3766,  3770,  3774,  3781,  3787,
    3793,  3796,  3800,  3804,  3810,  3817,  3821,  3824,  3827,  3831,
    3834,  3838,  3841,  3845,  3851,  3858,  3861,  3864,  3867,  3869,
    3874,  3879,  3881,  3884,  3887,  3890,  3893,  3896,  3899,  3902,
    3906,  3909,  3913,  3916,  3920,  3922,  3924,  3926,  3928,  3930,
    3931,  3934,  3935,  3938,  3939,  3941,  3942,  3943,  3945,  3947,
    3949,  3951,  3953,  3961,  3970,  3973,  3978,  3981,  3986,  3993,
    3996,  3998,  4000,  4004,  4008,  4010,  4015,  4018,  4020,  4024,
    4028,  4033,  4037,  4041,  4045,  4047,  4049,  4051,  4053,  4055,
    4057,  4059,  4061,  4063,  4065,  4067,  4069,  4071,  4073,  4076,
    4077,  4078,  4081,  4083,  4087,  4089,  4093,  4095,  4098,  4101,
    4103,  4107,  4108,  4109,  4112,  4115,  4117,  4121,  4127,  4129,
    4132,  4135,  4139,  4142,  4145,  4148,  4150,  4152,  4154,  4156,
    4161,  4164,  4168,  4172,  4175,  4179,  4182,  4185,  4188,  4192,
    4196,  4200,  4203,  4207,  4209,  4213,  4217,  4219,  4222,  4225,
    4228,  4231,  4241,  4248,  4250,  4252,  4254,  4256,  4259,  4262,
    4266,  4270,  4272,  4275,  4279,  4283,  4285,  4288,  4290,  4292,
    4294,  4296,  4298,  4301,  4304,  4309,  4311,  4314,  4317,  4320,
    4324,  4326,  4328,  4330,  4333,  4336,  4339,  4342,  4345,  4349,
    4353,  4357,  4361,  4365,  4369,  4373,  4375,  4378,  4381,  4384,
    4388,  4391,  4395,  4399,  4402,  4405,  4408,  4411,  4414,  4417,
    4420,  4423,  4426,  4429,  4432,  4435,  4438,  4441,  4445,  4449,
    4453,  4456,  4459,  4462,  4465,  4468,  4471,  4474,  4477,  4480,
    4483,  4486,  4489,  4493,  4497,  4501,  4506,  4513,  4516,  4518,
    4520,  4522,  4524,  4526,  4527,  4533,  4535,  4542,  4546,  4548,
    4552,  4555,  4558,  4562,  4566,  4569,  4572,  4575,  4578,  4581,
    4584,  4588,  4591,  4594,  4598,  4600,  4604,  4609,  4611,  4614,
    4620,  4627,  4634,  4637,  4639,  4642,  4645,  4651,  4658
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     354,     0,    -1,    96,   356,    -1,    44,   387,    -1,    41,
      66,     5,    -1,    41,    66,   141,    -1,    46,   392,    -1,
      59,    -1,    64,    -1,    65,   394,    -1,    67,   284,     5,
      -1,    68,   399,    -1,    69,   401,    -1,    77,   402,    -1,
      84,   411,    -1,    86,   413,    -1,    87,   414,    -1,    95,
     357,    -1,   125,   416,    -1,   138,   417,    -1,   142,   459,
      -1,   145,   462,    -1,   149,    -1,   150,   357,    -1,   156,
     468,    -1,   162,    16,     4,    -1,   175,   471,    -1,   178,
     489,    -1,   179,   490,    -1,   180,   491,    -1,   183,   507,
     492,    -1,   184,   526,    -1,   197,    66,     5,    -1,   214,
     527,    -1,   215,   528,    -1,   216,   531,    -1,   237,    88,
      -1,   230,   533,    -1,   228,   532,    -1,   244,    -1,   241,
     507,   535,    -1,   246,   540,    -1,   248,   541,    -1,   253,
     543,    -1,   266,    -1,   272,   558,    -1,   287,     4,    -1,
     288,   382,    -1,   299,    -1,   301,   560,    -1,   307,    -1,
     310,   562,    -1,   311,   563,    -1,   341,   567,    -1,   348,
     568,    -1,     3,    -1,     4,    -1,   211,    -1,   210,    -1,
     192,   357,    -1,   217,   357,    -1,   219,   357,    -1,   311,
     357,    -1,    44,   357,    -1,    46,   357,    -1,    76,   357,
      -1,    84,   357,    -1,   143,   357,    -1,   246,   357,    -1,
       4,    -1,   344,    -1,   349,    -1,   211,    -1,   295,    -1,
     202,    -1,   350,    -1,   210,    -1,   119,    -1,    -1,   247,
      38,    -1,   134,    38,    -1,   247,    -1,   134,    -1,    -1,
     360,    -1,   355,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,   361,   361,    -1,   362,   363,    -1,
     363,   363,    -1,   355,   355,    -1,   157,    -1,   221,    -1,
     101,    -1,    19,    -1,   366,    -1,   311,    -1,   312,    -1,
     313,    -1,   314,    -1,   315,    -1,   316,    -1,   317,    -1,
     318,    -1,   319,    -1,   320,    -1,   321,    -1,   322,    -1,
     323,    -1,   324,    -1,   325,    -1,   326,    -1,   327,    -1,
     328,    -1,   329,    -1,   330,    -1,   331,    -1,   332,    -1,
     333,    -1,   334,    -1,   335,    -1,   336,    -1,   337,    -1,
     338,    -1,    56,    -1,   216,    -1,    -1,   345,    -1,   205,
      -1,   197,    -1,   204,    -1,   240,    -1,   173,    -1,   177,
      -1,   229,    -1,   276,    -1,   277,    -1,    28,    -1,   268,
      -1,   151,    -1,    30,    -1,   255,    -1,   250,    -1,    94,
      -1,   163,    -1,    -1,   127,    -1,    35,    -1,   128,    -1,
     164,    -1,   154,    -1,   136,    -1,   106,    -1,    -1,    97,
      -1,   261,    -1,    -1,    97,    -1,    24,    -1,    25,    -1,
      -1,   265,    -1,   165,    -1,    -1,    17,    -1,   159,    -1,
      -1,   157,    -1,   184,    -1,    -1,    62,    -1,    48,    -1,
     102,    -1,    85,    -1,   351,    -1,    27,    -1,    51,    -1,
      -1,     4,    -1,    82,    -1,   152,    -1,   223,    -1,   224,
      -1,   238,    -1,   279,    -1,    -1,    32,    -1,   281,    -1,
      -1,   198,    -1,    42,    -1,    43,    -1,   170,    -1,   171,
      -1,   305,   386,    -1,    47,   383,    -1,    74,   384,    -1,
     150,   385,    -1,   186,   538,    -1,    37,   539,    -1,   254,
     355,    -1,   232,    -1,   289,   355,    -1,   357,    -1,    66,
       5,    -1,   357,    -1,    66,     5,    -1,   357,    -1,    66,
       5,    -1,   355,   355,    -1,   225,   355,   355,   355,   355,
     355,    -1,    12,   388,    -1,    71,     5,     5,     5,    -1,
     100,     4,    -1,   118,   389,    -1,   135,   390,    -1,    53,
     269,     4,    -1,   292,   391,    -1,   122,     5,    -1,    59,
      -1,   355,   355,    -1,   355,    -1,   355,   355,    -1,   355,
      12,   355,   355,    -1,   355,   355,    12,   355,   355,    -1,
     292,   355,    -1,   292,   355,   355,    -1,   292,   355,    12,
     355,   355,    -1,   292,   355,   355,    12,   355,   355,    -1,
      32,    -1,   281,    -1,   123,    -1,   355,   355,    12,    59,
       5,     5,     5,    -1,   355,   355,     4,   355,   355,    12,
      59,     5,     5,     5,     5,    -1,   355,   355,    12,   355,
     355,     5,     5,     5,    -1,   355,   355,     4,   355,   355,
      12,   355,   355,     5,     5,     5,     5,    -1,   355,    -1,
     355,   355,    -1,   292,   393,    -1,   123,    -1,   355,    -1,
     355,   355,    -1,   257,   395,    -1,   193,   396,    -1,   187,
     397,    -1,   302,   355,   355,    -1,   302,   197,   197,    -1,
     347,   398,    -1,   232,   357,    -1,   139,    -1,   176,    -1,
     355,    -1,   187,    -1,   347,    -1,   346,    -1,   302,    -1,
       4,   370,    -1,   193,   370,    -1,   250,     4,    -1,   355,
       4,     4,    -1,    78,   355,    -1,   250,     4,    -1,   172,
       4,    -1,     4,   355,   355,     4,     6,     4,    -1,   246,
     355,   355,   355,   355,   355,   355,     4,     6,     4,    -1,
      40,    -1,   194,   400,    -1,   111,    -1,     4,   355,   355,
       4,     6,     4,    -1,   246,   355,   355,   355,   355,   355,
     355,     4,     6,     4,    -1,   369,    -1,   177,   355,    -1,
      83,   403,    -1,    99,   404,    -1,   175,   405,    -1,   218,
     409,    -1,   253,   410,    -1,     5,     4,     4,   408,     4,
       4,   369,   355,   406,   407,   355,   355,     5,    -1,     5,
       4,     4,   408,     4,     4,   369,   355,   355,   407,   355,
     355,     5,    -1,     5,     4,     4,   408,     4,     4,   369,
     355,   406,   355,   355,     5,    -1,     5,     4,     4,   408,
       4,     4,   369,   355,   355,   355,   355,     5,    -1,   227,
      -1,    -1,    31,    -1,     5,    -1,     5,     5,     4,   357,
      -1,     5,     4,   357,     5,   365,   371,    -1,   187,    -1,
     347,    -1,   346,    -1,   302,    -1,   139,    -1,   176,    -1,
     272,    -1,    46,    -1,     5,    -1,     5,     5,     4,   357,
      -1,     5,   365,   371,    -1,    31,     5,   365,   371,    -1,
      -1,   355,   355,   355,   355,   365,   371,    -1,    59,   364,
     365,   371,   355,   355,   365,   373,    -1,   288,   412,    -1,
      40,   355,   355,    -1,   194,   355,   355,    -1,   111,   355,
     355,    -1,    -1,   355,   355,   365,   371,    -1,    40,   355,
     355,     4,    -1,   194,   355,   355,     4,    -1,   111,   355,
     355,     4,    -1,   367,   355,   355,    -1,   365,   371,   364,
      -1,   357,    -1,   310,   355,   355,    -1,    40,   194,   367,
     355,   355,    -1,   194,   367,   355,   355,    -1,    40,   194,
     365,   364,    -1,   194,   365,   364,    -1,    33,     4,    -1,
      -1,    32,    -1,   281,    -1,   145,   117,     5,    -1,    41,
      66,    -1,    44,   418,    -1,    46,   420,    -1,    65,   421,
      -1,    68,   425,    -1,    67,   424,    -1,    69,   427,    -1,
      77,   429,    -1,    79,   432,    -1,    84,   433,    -1,    86,
     434,    -1,    88,   436,    -1,    87,   435,    -1,    93,   437,
      -1,    95,    -1,   124,   441,    -1,   142,   447,    -1,   152,
       5,     5,     4,    -1,   153,    89,     5,     5,   355,   355,
     367,     4,   415,    -1,   156,   439,    -1,   160,   438,    -1,
     162,    16,    -1,   187,    -1,   183,   507,   501,    -1,   184,
     448,    -1,   197,    66,    -1,   214,    -1,   215,   449,    -1,
     222,   283,   367,   355,   355,     4,     4,     5,    -1,   246,
     450,    -1,   248,    -1,   272,   451,    -1,   287,    -1,   288,
     452,    -1,   296,    -1,   303,   367,   355,   355,    -1,   309,
      89,     5,     5,   355,   355,   367,     4,   415,    -1,   311,
     457,    -1,   348,    -1,   100,    -1,   118,    -1,   135,    -1,
      53,   269,    -1,    88,    -1,   122,    -1,    71,   419,    -1,
     174,    -1,    -1,   187,     5,    -1,   103,     5,    -1,   118,
      -1,    -1,   406,   407,    -1,   355,   407,    -1,   257,    -1,
     193,    -1,   187,   422,    -1,   302,   169,    -1,   347,   423,
      -1,   232,    -1,   193,    -1,   250,    -1,    78,    -1,   250,
      -1,   172,    -1,    -1,   284,    -1,   169,   426,    -1,     4,
      -1,     4,   367,   355,   355,    -1,     4,   355,   355,   369,
     355,    -1,    -1,   169,   428,    -1,   177,    -1,     4,   355,
     355,   369,   355,    -1,   365,   371,    -1,    65,   430,    -1,
      66,    -1,    91,    -1,   169,    -1,   208,   169,    -1,   186,
      -1,    69,   431,    -1,   272,    -1,   340,    -1,    -1,   193,
      -1,   257,    -1,    -1,   177,    -1,   355,   355,   365,   371,
     372,    -1,   367,   355,   355,   365,   371,   372,    -1,   365,
     371,   372,    -1,    59,   365,   371,   372,   365,   373,    -1,
     288,   365,   371,    -1,   367,    -1,   365,   371,   372,    -1,
     280,    -1,    33,    -1,   367,    -1,   365,   371,   372,    -1,
     365,   371,   364,   355,   355,     5,    -1,     4,   365,   371,
     364,   355,   355,     5,    -1,   367,   355,   355,     4,     4,
      -1,     5,    -1,    65,    -1,   367,   355,   355,     5,    -1,
       6,     4,     4,     4,     4,    -1,    88,    -1,   120,   196,
     440,    -1,    -1,     4,    -1,   355,   355,    -1,   199,    -1,
      59,   365,   371,   372,    -1,    81,    -1,   100,   444,    -1,
      45,    -1,   117,   442,    -1,   120,   196,   445,    -1,   147,
     443,    -1,   148,    -1,   209,   196,    -1,   269,    -1,   269,
     365,   371,   373,    -1,   270,   446,    -1,   340,    -1,     4,
      -1,   367,   355,   355,    -1,     4,    -1,   166,     5,    -1,
       4,   166,     5,    -1,   311,     4,    -1,    -1,   358,    -1,
     358,   367,   355,   355,    -1,   358,     4,    -1,    -1,   132,
     157,   365,   371,    -1,   132,   157,     4,   365,   371,    -1,
     292,   157,   355,   365,   371,    -1,    -1,   213,    -1,   304,
      -1,    66,    -1,   182,    -1,   240,    -1,   282,    -1,   291,
      -1,    81,    -1,   232,    -1,    61,    -1,   282,    -1,   305,
      -1,   135,    -1,   239,    -1,   239,   188,    -1,   267,    -1,
     267,   188,    -1,    21,    -1,   305,   456,    -1,    47,   453,
      -1,    74,   454,    -1,   150,   455,    -1,   186,    -1,    37,
      -1,   254,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,
      66,    -1,    -1,   225,    -1,    -1,    16,   458,    -1,   196,
     366,    -1,    -1,   226,    -1,    83,   460,    -1,    99,    -1,
     365,   371,   372,   461,     5,     5,    -1,   365,   371,   372,
     461,     5,    -1,    20,    -1,   235,    -1,    19,    -1,    44,
     463,    -1,    77,   464,    -1,    84,    -1,    94,    -1,    95,
      -1,   101,    -1,   124,   465,    -1,   142,    -1,   156,    -1,
     163,    -1,   183,   466,    -1,   221,    -1,   157,    -1,   272,
      -1,   282,   365,    -1,   311,   467,    -1,    72,     5,    -1,
      -1,    31,    -1,    -1,    44,    -1,    87,    -1,   192,    -1,
     150,    -1,   259,    -1,   218,    -1,   297,    -1,   365,    -1,
      58,   365,    -1,   115,   365,    -1,   173,   365,    -1,    18,
      -1,   288,   365,    -1,   200,     4,     4,    -1,   116,    -1,
     185,     5,    -1,    88,   470,    -1,   260,   120,   196,   469,
      -1,   260,     6,     4,     4,     4,     4,    -1,   301,    -1,
     311,   355,   355,   355,   355,   355,   355,   355,   355,     4,
      -1,     5,    -1,     5,     4,    -1,     4,     4,    56,    -1,
       4,     4,   365,    -1,   193,   357,    -1,    26,   472,    -1,
     112,   474,    -1,   124,   475,    -1,   159,   488,    -1,   207,
     486,    -1,   220,   487,    -1,     5,    14,     5,   376,    -1,
       5,    15,     5,   376,    -1,     5,    61,     5,   376,    -1,
       5,   190,   376,    -1,     5,   191,   376,    -1,     5,   263,
     374,     4,   376,    -1,     5,   273,     4,   376,    -1,     5,
     274,     4,   376,    -1,     5,   304,     5,   376,    -1,   246,
      87,   473,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   190,    -1,     5,   191,
      -1,     5,   263,   374,     4,    -1,     5,   273,     4,    -1,
       5,   274,     4,    -1,     5,   304,     5,    -1,     5,     5,
     271,    -1,     5,    14,     5,   376,    -1,     5,    15,     5,
     376,    -1,     5,    61,     5,   376,    -1,     5,   190,   375,
     376,    -1,     5,     5,   271,   375,   376,    -1,     5,   191,
     375,   376,    -1,     5,   263,   374,     4,   375,   376,    -1,
       5,   278,   374,     4,     4,   375,   376,    -1,     5,   273,
       4,   376,    -1,     5,   274,     4,   376,    -1,     5,   304,
       5,   375,   376,    -1,   270,   476,    -1,   117,    87,   477,
      -1,   246,   157,   485,    -1,   246,    87,   484,    -1,   192,
     478,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   190,   375,    -1,     5,     5,
     271,   375,    -1,     5,   191,   375,    -1,     5,   263,   374,
       4,   375,    -1,     5,   278,   374,     4,     4,   375,    -1,
       5,   273,     4,    -1,     5,   274,     4,    -1,     5,   304,
       5,   375,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   190,   375,    -1,     5,
     191,   375,    -1,     5,   263,   374,     4,   375,    -1,     5,
     273,     4,    -1,     5,   274,     4,    -1,     5,   304,     5,
     375,    -1,   157,   162,   479,    -1,   162,   480,    -1,   157,
     481,    -1,   483,    -1,   157,   339,   482,    -1,     5,    14,
       5,   376,    -1,     5,    15,     5,   376,    -1,     5,    61,
       5,   376,    -1,     5,   190,   375,   376,    -1,     5,   191,
     375,   376,    -1,     5,   263,   374,     4,   375,   376,    -1,
       5,   273,     4,   376,    -1,     5,   274,     4,   376,    -1,
       5,   304,     5,   375,   376,    -1,     5,    14,     5,   376,
      -1,     5,    15,     5,   376,    -1,     5,    61,     5,   376,
      -1,     5,   190,   375,   376,    -1,     5,     5,   271,   375,
     376,    -1,     5,   191,   375,   376,    -1,     5,   263,   374,
       4,   375,   376,    -1,     5,   278,   374,     4,     4,   375,
     376,    -1,     5,   273,     4,   376,    -1,     5,   274,     4,
     376,    -1,     5,   304,     5,   375,   376,    -1,   366,     5,
      14,     5,   376,    -1,   366,     5,    15,     5,   376,    -1,
     366,     5,    61,     5,   376,    -1,   366,     5,   190,   375,
     376,    -1,   366,     5,   191,   375,   376,    -1,   366,     5,
     263,   374,     4,   375,   376,    -1,   366,     5,   273,     4,
     376,    -1,   366,     5,   274,     4,   376,    -1,   366,     5,
     304,     5,   375,   376,    -1,     5,    14,     5,   376,    -1,
       5,    15,     5,   376,    -1,     5,    61,     5,   376,    -1,
       5,   190,   375,   376,    -1,     5,   191,   375,   376,    -1,
       5,   263,   374,     4,   375,   376,    -1,     5,   273,     4,
     376,    -1,     5,   274,     4,   376,    -1,     5,   304,     5,
     375,   376,    -1,   366,     5,    14,     5,   376,    -1,   366,
       5,    15,     5,   376,    -1,   366,     5,    61,     5,   376,
      -1,   366,     5,   190,   375,   376,    -1,   366,     5,     5,
     271,   375,   376,    -1,   366,     5,   191,   375,   376,    -1,
     366,     5,   263,   374,     4,   375,   376,    -1,   366,     5,
     278,   374,     4,     4,   375,   376,    -1,   366,     5,   273,
       4,   376,    -1,   366,     5,   274,     4,   376,    -1,   366,
       5,   304,     5,   375,   376,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   190,
     375,    -1,     5,     5,   271,   375,    -1,     5,   191,   375,
      -1,     5,   263,   374,     4,   375,    -1,     5,   278,   374,
       4,     4,   375,    -1,     5,   273,     4,    -1,     5,   274,
       4,    -1,     5,   304,     5,   375,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     190,   375,    -1,     5,   191,   375,    -1,     5,   263,   374,
       4,   375,    -1,     5,   273,     4,    -1,     5,   274,     4,
      -1,     5,   304,     5,   375,    -1,     5,    14,     5,   376,
      -1,     5,    61,     5,   376,    -1,     5,   190,   376,    -1,
       5,   263,   374,     4,   376,    -1,     5,   273,     4,   376,
      -1,     5,   304,     5,   376,    -1,     5,     5,    -1,   270,
       5,     5,    -1,    93,     4,     4,     4,     4,     4,    -1,
     187,     4,     4,     4,     4,     4,    -1,   111,    -1,   231,
      -1,   357,    -1,   140,   357,    -1,    88,   357,    -1,    66,
       5,    -1,     5,     4,     4,    -1,   301,   355,   355,    -1,
     348,   355,    -1,     5,     5,   366,   371,     5,     5,   366,
     371,   355,   366,   373,     5,    -1,    60,   495,    -1,    66,
       5,    -1,    80,    -1,    73,   500,     5,    -1,    73,   500,
     304,     5,    -1,    75,    99,    -1,    -1,    83,   493,   496,
      -1,    89,    -1,    99,    -1,    99,    17,    -1,   105,   499,
      -1,   114,     4,    -1,   129,     5,    -1,   150,    17,    -1,
     150,   212,   355,   355,    -1,   150,   293,   355,   355,    -1,
       4,    20,   379,   357,    -1,     4,    21,   360,    -1,     4,
      21,   360,   367,    -1,     4,    21,   360,   365,   371,    -1,
       4,    22,   239,   355,   355,     4,   365,   373,    -1,     4,
      22,   239,     5,   365,   373,    -1,     4,    48,   121,   357,
      -1,     4,    49,   239,   355,   355,   355,     4,   365,   373,
      -1,     4,    49,   239,     5,   365,   373,    -1,     4,    48,
     239,   355,   355,   365,   373,    -1,     4,    52,   105,   360,
     360,     4,   355,   355,   355,     4,    -1,     4,    52,   105,
     360,   360,     4,   355,   355,   355,     4,   367,    -1,     4,
      52,   105,   360,   360,     4,   355,   355,   355,     4,   365,
     371,    -1,     4,    52,   105,     5,     5,   365,   371,   365,
     373,    -1,     4,    55,   494,     5,     5,    -1,     4,    62,
     121,   357,    -1,     4,    62,   239,   355,   365,   373,    -1,
       4,    66,     5,    -1,     4,    74,    27,   357,   357,    -1,
       4,    74,   167,     5,     5,    -1,     4,    74,   239,   355,
     365,   373,    -1,     4,    74,   282,   365,   371,    -1,     4,
      75,   139,   357,    -1,     4,    82,   105,   360,   360,     4,
     355,   355,     4,    -1,     4,    82,   105,   360,   360,     4,
     355,   355,     4,   367,    -1,     4,    82,   105,   360,   360,
       4,   355,   355,     4,   365,   371,    -1,     4,    82,   105,
       5,     5,   365,   371,   365,   373,    -1,     4,    83,    22,
     239,   355,   355,    -1,     4,    83,    49,   239,   355,   355,
      -1,     4,    83,    52,    21,   355,   355,    -1,     4,    83,
      52,   239,   355,   355,    -1,     4,    83,   110,   239,   355,
     355,    -1,     4,    83,   113,    21,   355,   355,    -1,     4,
      83,   113,   239,   355,   355,    -1,     4,    83,    82,    21,
     355,   355,    -1,     4,    83,    82,   239,   355,   355,    -1,
       4,    83,   227,   308,     4,   355,   355,    -1,     4,    83,
     258,   308,     4,   355,   355,    -1,     4,    99,    -1,     4,
      99,    22,     4,    -1,     4,    99,    49,     4,    -1,     4,
      99,    52,     4,    -1,     4,    99,   110,     4,    -1,     4,
      99,    55,   494,     5,    -1,     4,    99,   113,     4,    -1,
       4,    99,    82,     4,    -1,     4,    99,   227,   308,     4,
      -1,     4,    99,   258,   308,     4,    -1,     4,    99,   284,
      -1,     4,    99,   284,     5,    -1,     4,    99,   284,     4,
      -1,     4,   105,    40,     4,    -1,     4,   109,   121,   357,
      -1,     4,   109,   239,   355,   355,   365,   373,    -1,     4,
     110,   239,   355,   355,   355,     4,   365,   373,    -1,     4,
     110,   239,     5,   365,   373,    -1,     4,   113,   105,   360,
     360,     4,   355,   355,   355,     4,    -1,     4,   113,   105,
     360,   360,     4,   355,   355,   355,     4,   367,    -1,     4,
     113,   105,   360,   360,     4,   355,   355,   355,     4,   365,
     371,    -1,     4,   113,   105,     5,     5,   365,   371,   365,
     373,    -1,     4,   129,     5,    -1,     4,   150,    -1,     4,
     150,   212,    -1,     4,   172,    27,   357,   357,    -1,     4,
     172,   225,   365,   371,   364,   364,    -1,     4,   195,   355,
     355,    -1,     4,   195,   133,    -1,     4,   195,    36,    -1,
       4,   195,   292,   365,   371,   364,    -1,     4,   227,   244,
     355,   355,   365,   373,    -1,     4,   258,   244,   355,   355,
     365,   373,    -1,     4,   225,   262,   377,    -1,     4,   225,
     269,     4,    -1,     4,   227,   121,   357,    -1,     4,   233,
     365,   371,   364,   364,   355,   365,   373,    -1,     4,   234,
     513,   357,    -1,     4,   248,    40,    -1,     4,   249,   130,
       5,    -1,     4,   249,   225,   365,   371,   364,   364,    -1,
       4,   249,   282,   365,   371,   365,   373,    -1,     4,   259,
      -1,     4,   259,   212,    -1,     4,   284,     5,    -1,     4,
     286,     5,    -1,     4,   286,   248,   357,    -1,     4,   298,
      -1,     4,   300,    -1,     4,   306,    27,   357,    -1,     4,
     306,   225,   365,   371,   364,   365,   373,   355,   360,    -1,
       4,   340,     4,    -1,   165,    -1,   165,   355,   355,    -1,
     174,   508,    -1,   175,   509,    -1,   195,   510,    -1,   232,
     357,    -1,   234,   513,   357,    -1,   234,   513,   357,   355,
     355,    -1,   248,    40,   355,   355,    -1,   248,   194,   355,
     355,     4,    -1,   248,   111,    -1,   253,     5,   500,   365,
     371,   372,   357,    -1,   253,   285,     5,    -1,   259,   517,
      -1,   266,   518,    -1,     5,    66,     5,    -1,     5,    80,
      -1,     5,    99,    -1,     5,    89,    -1,     5,   129,     5,
      -1,     5,   150,    -1,     5,   150,   212,    -1,     5,   195,
     355,   355,    -1,     5,   195,   133,    -1,     5,   195,    36,
      -1,     5,   195,   292,   365,   371,   364,    -1,     5,   234,
     513,   357,    -1,     5,   259,    -1,     5,   259,   212,    -1,
       5,   298,    -1,     5,   300,    -1,   284,   105,     5,     5,
      -1,   284,    99,     5,    -1,   284,    99,    17,    -1,   284,
       5,    -1,   284,   301,     5,    -1,   218,    -1,   218,   365,
      -1,   297,    -1,   298,    17,    -1,   300,    17,    -1,   340,
       4,    -1,   259,    -1,   300,    -1,   150,    -1,   298,    -1,
      40,   195,    -1,   195,    -1,   111,   195,    -1,    40,   105,
      -1,   105,    -1,   111,   105,    -1,    40,   248,    -1,   248,
      -1,   111,   248,    -1,    99,    -1,   286,    -1,    66,    -1,
     340,    -1,   234,    -1,   129,    -1,   165,    -1,   301,    -1,
      -1,     4,    -1,    30,   357,    -1,   239,   355,    -1,   161,
       4,    -1,   213,     4,   355,    -1,    62,   355,   355,   355,
     514,    -1,   109,   355,   355,   355,   355,   359,   514,    -1,
      48,   355,   355,   355,   355,   359,   514,    -1,   227,   355,
     355,   355,   355,   514,    -1,   258,   355,   355,   355,   355,
     514,    -1,   172,   355,   355,   355,   355,   514,    -1,   306,
     355,   355,   355,   355,   514,    -1,   286,   355,   355,   359,
     514,    -1,    62,   225,   355,   355,   378,   514,    -1,    48,
     225,   355,   355,   378,   514,    -1,   102,   225,   355,   355,
     378,   514,    -1,    85,   225,   355,   355,   378,   514,    -1,
     351,   225,   355,   355,   378,   514,    -1,    27,   225,   355,
     355,   378,   514,    -1,    51,   225,   355,   355,   378,   514,
      -1,   249,   355,   355,   355,   355,   365,   371,   365,   373,
       5,   514,    -1,    74,   355,   355,   355,   365,   371,   514,
      -1,   233,   355,   355,   355,   355,   355,   514,    -1,    22,
     355,   355,   355,   355,     4,   514,    -1,   110,   355,   355,
     355,   355,   355,     4,   359,   514,    -1,    49,   355,   355,
     355,   355,   355,     4,   359,   514,    -1,    82,   355,   355,
     360,   360,     4,   355,   355,     4,   514,    -1,   113,   355,
     355,   360,   360,     4,   355,   355,   355,     4,   359,   514,
      -1,    52,   355,   355,   360,   360,     4,   355,   355,   355,
       4,   359,   514,    -1,    75,   514,    -1,   285,   497,    -1,
       5,   355,   355,    -1,   304,     5,   355,   355,    -1,   355,
     355,   304,     5,    -1,     5,   365,   371,   364,    -1,     4,
       4,    -1,    40,   355,   355,     4,    -1,   194,   355,   355,
       4,    -1,   111,    -1,   104,    -1,   342,    -1,    63,    -1,
     252,    -1,   251,    -1,   236,    -1,   343,    -1,    60,   502,
      -1,    66,    -1,   129,    -1,   114,    -1,   144,   355,   355,
      -1,   155,   355,   355,    -1,     4,    20,    82,     5,     5,
       5,   365,     4,    -1,     4,    20,   152,     5,     5,     4,
      -1,     4,    20,   223,     5,     5,     5,     5,   365,   371,
     380,    -1,     4,    20,   224,     5,     5,   365,   371,   380,
      -1,     4,    20,   238,     5,     5,     5,   365,    -1,     4,
      20,   279,   365,   371,    -1,   155,    17,    -1,     4,    21,
      -1,     4,    21,   367,    -1,     4,    21,   365,   371,    -1,
       4,    22,   239,   365,   373,    -1,     4,    48,   121,    -1,
       4,    49,   239,   365,   373,    -1,     4,    48,   239,   365,
     373,    -1,     4,    52,    21,    -1,     4,    52,    21,   367,
      -1,     4,    52,    21,   365,   371,    -1,     4,    52,   239,
     365,   373,    -1,     4,    59,   365,   371,   372,    -1,     4,
      62,   121,    -1,     4,    62,   239,   365,   373,    -1,     4,
      66,    -1,     4,    74,    27,    -1,     4,    74,   167,    -1,
       4,    74,   239,   365,   373,    -1,     4,    74,   282,    -1,
       4,    75,   139,    -1,     4,    82,    21,    -1,     4,    82,
      21,   367,    -1,     4,    82,    21,   365,   371,    -1,     4,
      82,   239,   365,   373,    -1,     4,   109,   121,    -1,     4,
     109,   239,   365,   373,    -1,     4,   110,   239,   365,   373,
      -1,     4,   113,    21,    -1,     4,   113,    21,   367,    -1,
       4,   113,    21,   365,   371,    -1,     4,   113,   239,   365,
     373,    -1,     4,   129,    -1,     4,   150,    -1,     4,   172,
      27,    -1,     4,   172,   168,   365,   373,    -1,     4,   172,
     225,   365,   371,   372,    -1,     4,   181,   168,   355,   365,
     373,    -1,     4,   227,   121,    -1,     4,   225,   262,    -1,
       4,   225,   269,    -1,     4,   233,   225,   365,   371,   372,
      -1,     4,   233,   168,   365,   373,    -1,     4,   233,   290,
     365,   373,    -1,     4,   234,    -1,     4,   234,   513,    -1,
       4,   249,   130,    -1,     4,   249,   168,   365,   373,    -1,
       4,   249,   225,   365,   371,   372,    -1,     4,   249,   282,
      -1,     4,   259,    -1,     4,   284,    -1,     4,   284,     4,
      -1,     4,   286,    -1,     4,   286,   248,    -1,     4,   296,
      -1,     4,   306,    27,    -1,     4,   306,   168,   365,   373,
      -1,     4,   306,   225,   365,   371,   372,    -1,     4,   340,
      -1,   150,   503,    -1,   150,   208,    -1,   208,    -1,   227,
     258,   355,   355,    -1,   258,   258,   355,   355,    -1,   232,
      -1,   234,   513,    -1,   259,   504,    -1,   259,   208,    -1,
     266,   505,    -1,     5,    66,    -1,     5,   129,    -1,     5,
     155,    -1,     5,   234,   513,    -1,     5,   284,    -1,     5,
     284,   208,    -1,   284,    17,    -1,   284,    98,   196,    -1,
     340,    -1,    30,    -1,   239,    -1,   161,    -1,   213,    -1,
      -1,   355,   355,    -1,    -1,   355,   355,    -1,    -1,   286,
      -1,    -1,    -1,   241,    -1,    57,    -1,   131,    -1,   226,
      -1,   302,    -1,   500,   365,   371,   372,   357,   515,   521,
      -1,   259,   500,   365,   371,   372,   357,   515,   521,    -1,
     500,     5,    -1,   500,     5,   365,   371,    -1,   500,     4,
      -1,   500,     4,   365,   371,    -1,   124,     5,     5,   498,
       4,     5,    -1,   355,   355,    -1,   133,    -1,    36,    -1,
      40,   355,   355,    -1,   194,   355,   355,    -1,   111,    -1,
     292,   365,   371,   364,    -1,   511,   512,    -1,   512,    -1,
     513,   352,   357,    -1,    66,   352,     5,    -1,    92,   352,
       4,     4,    -1,   340,   352,     4,    -1,   129,   352,     5,
      -1,   286,   352,     5,    -1,   524,    -1,   525,    -1,   203,
      -1,   259,    -1,   150,    -1,    91,    -1,   126,    -1,   105,
      -1,   195,    -1,   248,    -1,    99,    -1,   158,    -1,   275,
      -1,   506,    -1,   506,   511,    -1,    -1,    -1,   516,   519,
      -1,    17,    -1,   212,   355,   355,    -1,   293,    -1,   293,
     355,   355,    -1,   357,    -1,   286,   357,    -1,   519,   520,
      -1,   520,    -1,   513,   352,   357,    -1,    -1,    -1,   522,
     523,    -1,   523,   524,    -1,   524,    -1,   284,   352,     5,
      -1,    55,   352,   494,     5,     5,    -1,    64,    -1,    66,
       5,    -1,   182,   368,    -1,   240,   355,   355,    -1,   282,
     365,    -1,   291,   355,    -1,   182,     4,    -1,   351,    -1,
     349,    -1,   343,    -1,   203,    -1,   355,   355,   355,   355,
      -1,   355,   355,    -1,   367,   355,   355,    -1,   365,   371,
     364,    -1,   292,   529,    -1,    39,   355,   355,    -1,   194,
     530,    -1,   232,   357,    -1,   355,   355,    -1,   367,   355,
     355,    -1,   365,   371,   364,    -1,    40,   355,   355,    -1,
     355,   355,    -1,   111,   355,   355,    -1,   357,    -1,   311,
     366,   371,    -1,     5,     4,     4,    -1,   301,    -1,    70,
     534,    -1,   169,     4,    -1,   245,     4,    -1,   254,   355,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    54,    -1,
     141,    -1,   246,    -1,    90,    -1,   150,   536,    -1,   259,
     537,    -1,    40,   355,   355,    -1,   194,   355,   355,    -1,
     111,    -1,   264,   111,    -1,    40,   355,   355,    -1,   194,
     355,   355,    -1,   111,    -1,   264,   111,    -1,   189,    -1,
      13,    -1,   203,    -1,    34,    -1,   107,    -1,    61,     5,
      -1,   282,   365,    -1,   305,     4,     4,     4,    -1,   355,
      -1,   355,    97,    -1,   194,   542,    -1,   292,   355,    -1,
     292,   355,    97,    -1,    40,    -1,   355,    -1,   111,    -1,
      26,   544,    -1,   124,   546,    -1,   207,   556,    -1,   112,
     557,    -1,   220,     5,    -1,   120,     5,   381,    -1,    61,
       5,   381,    -1,   273,     4,   381,    -1,   246,    87,   545,
      -1,   120,     5,   381,    -1,    61,     5,   381,    -1,   273,
       4,   381,    -1,   547,    -1,   157,   547,    -1,   283,   548,
      -1,   270,   549,    -1,   117,    87,   550,    -1,   192,   551,
      -1,   246,   157,   553,    -1,   246,    87,   554,    -1,   243,
     555,    -1,   120,     5,    -1,    61,     5,    -1,   273,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   273,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   273,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   273,     4,    -1,   157,   552,
      -1,   120,     5,     4,    -1,    61,     5,     4,    -1,   273,
       4,     4,    -1,   120,     5,    -1,    61,     5,    -1,   273,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   273,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   273,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   273,     4,    -1,   120,
       5,   381,    -1,    61,     5,   381,    -1,   273,     4,   381,
      -1,   120,     5,     5,   381,    -1,   559,     4,     4,   355,
     355,   360,    -1,   559,     4,    -1,    99,    -1,    50,    -1,
     294,    -1,   137,    -1,   108,    -1,    -1,     4,   355,   355,
     355,   355,    -1,   206,    -1,   206,     4,   355,   355,   355,
     355,    -1,   124,   270,   561,    -1,     4,    -1,   355,   365,
     371,    -1,     4,     4,    -1,   355,   355,    -1,   292,   355,
     355,    -1,   366,   371,   372,    -1,    16,   566,    -1,   244,
       4,    -1,   242,   565,    -1,    23,   564,    -1,     4,     4,
      -1,     4,     5,    -1,   286,     4,     5,    -1,     4,     4,
      -1,     4,     5,    -1,   286,     4,     5,    -1,     4,    -1,
       4,   366,   371,    -1,     4,     6,   366,   371,    -1,   231,
      -1,   355,   355,    -1,   355,   355,    12,   355,   355,    -1,
     355,   355,    12,   367,   355,   355,    -1,   355,   355,    12,
     365,   371,   364,    -1,   292,   569,    -1,   123,    -1,   123,
     355,    -1,   355,   355,    -1,   355,   355,    12,   355,   355,
      -1,   355,   355,    12,   367,   355,   355,    -1,   355,   355,
      12,   365,   371,   364,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   457,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   512,   513,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   530,
     532,   533,   534,   535,   537,   538,   539,   540,   543,   544,
     545,   546,   547,   550,   551,   554,   555,   556,   559,   562,
     565,   568,   580,   587,   594,   602,   603,   604,   605,   606,
     609,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   639,   640,
     643,   644,   645,   646,   647,   648,   651,   652,   653,   654,
     655,   656,   657,   658,   661,   662,   663,   664,   665,   668,
     669,   670,   671,   672,   673,   674,   675,   678,   679,   680,
     683,   684,   685,   686,   689,   690,   691,   694,   695,   696,
     699,   700,   701,   704,   705,   706,   707,   708,   709,   710,
     711,   714,   715,   718,   719,   720,   721,   722,   723,   726,
     727,   728,   731,   732,   733,   734,   735,   736,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   751,   752,   755,
     756,   759,   760,   763,   764,   768,   769,   770,   771,   772,
     773,   774,   775,   778,   779,   782,   783,   784,   786,   788,
     789,   790,   792,   796,   797,   800,   801,   803,   806,   808,
     814,   815,   816,   819,   820,   821,   824,   825,   826,   827,
     828,   829,   830,   836,   837,   840,   841,   842,   843,   844,
     847,   848,   849,   852,   853,   858,   863,   870,   872,   874,
     875,   876,   879,   881,   884,   885,   888,   889,   890,   891,
     892,   895,   897,   899,   904,   909,   912,   913,   916,   917,
     918,   925,   926,   927,   928,   931,   932,   935,   936,   939,
     940,   943,   945,   949,   950,   953,   955,   956,   957,   958,
     961,   962,   964,   965,   966,   969,   971,   973,   974,   976,
     978,   980,   982,   986,   989,   990,   991,   994,   997,   998,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1017,  1018,  1019,
    1020,  1021,  1022,  1023,  1024,  1025,  1026,  1028,  1029,  1030,
    1031,  1032,  1033,  1034,  1036,  1038,  1039,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1052,  1053,  1054,  1057,  1060,
    1061,  1063,  1065,  1066,  1067,  1068,  1069,  1070,  1077,  1078,
    1081,  1082,  1083,  1086,  1087,  1090,  1093,  1094,  1096,  1100,
    1101,  1102,  1105,  1109,  1111,  1112,  1113,  1114,  1115,  1116,
    1117,  1118,  1119,  1122,  1123,  1124,  1127,  1128,  1131,  1133,
    1141,  1143,  1145,  1149,  1150,  1152,  1155,  1158,  1159,  1163,
    1165,  1168,  1173,  1174,  1175,  1179,  1180,  1181,  1184,  1185,
    1186,  1189,  1190,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1203,  1204,  1207,  1208,  1211,  1212,  1213,
    1214,  1217,  1220,  1222,  1225,  1229,  1230,  1232,  1234,  1238,
    1239,  1240,  1243,  1244,  1245,  1246,  1247,  1248,  1251,  1254,
    1255,  1256,  1259,  1260,  1261,  1262,  1263,  1264,  1267,  1268,
    1269,  1270,  1271,  1272,  1273,  1276,  1277,  1280,  1281,  1284,
    1285,  1288,  1289,  1292,  1293,  1294,  1297,  1298,  1301,  1302,
    1305,  1308,  1316,  1317,  1320,  1321,  1322,  1323,  1324,  1325,
    1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1335,
    1336,  1339,  1342,  1343,  1346,  1347,  1348,  1349,  1352,  1353,
    1354,  1355,  1358,  1359,  1360,  1361,  1362,  1363,  1366,  1367,
    1368,  1369,  1370,  1371,  1373,  1374,  1379,  1380,  1383,  1385,
    1387,  1390,  1391,  1392,  1393,  1394,  1395,  1398,  1400,  1402,
    1404,  1405,  1407,  1409,  1411,  1413,  1415,  1418,  1419,  1420,
    1421,  1422,  1423,  1425,  1426,  1427,  1430,  1433,  1435,  1437,
    1439,  1441,  1443,  1445,  1447,  1450,  1452,  1454,  1456,  1457,
    1458,  1459,  1460,  1463,  1464,  1465,  1466,  1467,  1468,  1469,
    1471,  1473,  1474,  1475,  1478,  1479,  1480,  1481,  1482,  1483,
    1485,  1486,  1487,  1490,  1491,  1492,  1493,  1494,  1497,  1500,
    1503,  1506,  1509,  1512,  1515,  1518,  1521,  1526,  1529,  1532,
    1535,  1538,  1541,  1544,  1547,  1550,  1553,  1556,  1561,  1564,
    1567,  1570,  1573,  1576,  1579,  1582,  1585,  1590,  1592,  1594,
    1596,  1598,  1600,  1605,  1607,  1609,  1613,  1616,  1619,  1622,
    1625,  1628,  1631,  1634,  1637,  1640,  1643,  1648,  1649,  1650,
    1651,  1652,  1653,  1654,  1656,  1658,  1659,  1660,  1663,  1664,
    1665,  1666,  1667,  1668,  1670,  1671,  1672,  1675,  1677,  1679,
    1680,  1682,  1684,  1688,  1689,  1692,  1693,  1694,  1697,  1704,
    1705,  1706,  1707,  1708,  1709,  1710,  1713,  1721,  1722,  1723,
    1724,  1726,  1728,  1729,  1729,  1730,  1731,  1732,  1733,  1734,
    1735,  1737,  1738,  1740,  1743,  1746,  1747,  1748,  1751,  1754,
    1757,  1758,  1762,  1765,  1768,  1771,  1775,  1780,  1785,  1787,
    1788,  1790,  1791,  1793,  1795,  1797,  1799,  1800,  1802,  1804,
    1808,  1813,  1815,  1817,  1819,  1821,  1823,  1825,  1827,  1829,
    1831,  1833,  1836,  1837,  1839,  1841,  1842,  1844,  1846,  1847,
    1848,  1850,  1852,  1853,  1854,  1856,  1857,  1858,  1861,  1865,
    1868,  1871,  1875,  1880,  1886,  1887,  1888,  1890,  1891,  1895,
    1897,  1898,  1899,  1902,  1905,  1908,  1910,  1912,  1913,  1918,
    1921,  1922,  1923,  1926,  1930,  1931,  1933,  1934,  1935,  1937,
    1938,  1940,  1941,  1946,  1948,  1949,  1951,  1952,  1953,  1954,
    1955,  1956,  1958,  1960,  1962,  1963,  1965,  1966,  1968,  1970,
    1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1979,  1980,
    1982,  1984,  1985,  1986,  1987,  1989,  1990,  1991,  1992,  1993,
    1995,  1996,  1997,  1998,  1999,  2000,  2003,  2004,  2005,  2006,
    2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,  2015,  2016,
    2017,  2018,  2019,  2020,  2021,  2022,  2023,  2026,  2027,  2028,
    2029,  2030,  2031,  2039,  2046,  2055,  2064,  2071,  2078,  2086,
    2094,  2101,  2106,  2111,  2116,  2121,  2126,  2131,  2137,  2147,
    2157,  2167,  2174,  2184,  2194,  2203,  2215,  2228,  2233,  2236,
    2238,  2240,  2245,  2249,  2252,  2254,  2256,  2259,  2260,  2261,
    2262,  2263,  2264,  2265,  2268,  2269,  2270,  2271,  2272,  2273,
    2275,  2277,  2279,  2281,  2283,  2285,  2288,  2289,  2290,  2291,
    2293,  2296,  2297,  2299,  2301,  2302,  2303,  2305,  2308,  2311,
    2312,  2314,  2315,  2316,  2317,  2319,  2320,  2321,  2322,  2323,
    2325,  2327,  2328,  2330,  2333,  2334,  2335,  2337,  2339,  2340,
    2341,  2342,  2344,  2347,  2351,  2352,  2353,  2354,  2357,  2360,
    2362,  2363,  2364,  2365,  2367,  2370,  2371,  2373,  2374,  2375,
    2376,  2377,  2379,  2380,  2382,  2385,  2386,  2387,  2388,  2389,
    2391,  2393,  2394,  2395,  2396,  2398,  2400,  2401,  2402,  2403,
    2404,  2405,  2407,  2408,  2410,  2413,  2414,  2415,  2416,  2419,
    2420,  2423,  2424,  2427,  2428,  2431,  2444,  2445,  2446,  2447,
    2448,  2452,  2458,  2463,  2470,  2472,  2475,  2477,  2480,  2484,
    2485,  2486,  2487,  2488,  2489,  2490,  2494,  2495,  2498,  2499,
    2500,  2501,  2502,  2503,  2504,  2505,  2508,  2509,  2510,  2511,
    2512,  2513,  2514,  2515,  2516,  2517,  2518,  2521,  2522,  2525,
    2526,  2526,  2529,  2530,  2531,  2532,  2535,  2536,  2539,  2540,
    2543,  2547,  2548,  2548,  2551,  2552,  2555,  2558,  2562,  2563,
    2564,  2565,  2566,  2567,  2568,  2574,  2575,  2576,  2577,  2580,
    2582,  2583,  2588,  2590,  2591,  2592,  2593,  2596,  2597,  2602,
    2606,  2607,  2608,  2611,  2612,  2617,  2618,  2621,  2623,  2624,
    2625,  2630,  2632,  2638,  2639,  2640,  2641,  2644,  2645,  2648,
    2650,  2652,  2653,  2656,  2658,  2659,  2660,  2663,  2664,  2667,
    2668,  2669,  2672,  2673,  2674,  2677,  2678,  2679,  2680,  2681,
    2684,  2685,  2686,  2689,  2690,  2691,  2692,  2693,  2696,  2698,
    2700,  2702,  2705,  2707,  2709,  2712,  2713,  2714,  2715,  2716,
    2717,  2718,  2719,  2720,  2723,  2724,  2725,  2728,  2729,  2730,
    2733,  2734,  2735,  2738,  2739,  2740,  2743,  2744,  2745,  2746,
    2749,  2750,  2751,  2754,  2755,  2756,  2759,  2760,  2761,  2764,
    2765,  2766,  2769,  2771,  2773,  2777,  2781,  2783,  2788,  2791,
    2792,  2793,  2794,  2797,  2798,  2800,  2801,  2803,  2806,  2807,
    2809,  2815,  2816,  2819,  2821,  2822,  2823,  2824,  2827,  2828,
    2829,  2832,  2833,  2834,  2837,  2838,  2843,  2847,  2854,  2855,
    2857,  2862,  2864,  2867,  2868,  2869,  2870,  2872,  2877
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INT", "STRING", "POINTER",
  "ANGDEGREE", "ANGRADIAN", "SEXSTR", "HMSSTR", "DMSSTR", "ABOUT_", "AIP_",
  "ALLOC_", "ALLOCGZ_", "ALIGN_", "ALL_", "ALT_", "AMPLIFIER_",
  "ANALYSIS_", "ANGLE_", "ANNULUS_", "APPEND_", "ARCMIN_", "ARCSEC_",
  "ARRAY_", "ARROW_", "ASINH_", "AST_", "AUTO_", "AUX_", "AVERAGE_",
  "AXES_", "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_", "BASE_", "BBOX_",
  "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_", "BITPIX_", "BLOCK_",
  "BORDER_", "BOX_", "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_", "BPANDA_",
  "BUFFER_", "BW_", "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTIAL_",
  "CENTER_", "CENTROID_", "CHANNEL_", "CIRCLE_", "CIAO_", "CLEAR_",
  "CLIP_", "COLOR_", "COLORBAR_", "COLORMAP_", "COLORSCALE_",
  "COLORSPACE_", "COLS_", "COLUMN_", "COMMAND_", "COMPASS_", "COMPOSITE_",
  "COMPRESS_", "CONTOUR_", "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_",
  "CPANDA_", "CREATE_", "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_",
  "CURSOR_", "CUT_", "CMYK_", "DASH_", "DASHLIST_", "DATA_", "DATAMIN_",
  "DATASEC_", "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_", "DEPTH_",
  "DETECTOR_", "DIAMOND_", "DIM_", "DS9_", "EDIT_", "ECLIPTIC_",
  "ELEVATION_", "ELLIPTIC_", "ELLIPSE_", "ELLIPSEANNULUS_", "END_",
  "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXT_",
  "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_", "FIT_", "FITS_",
  "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_", "FOOTPRINT_",
  "FROM_", "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_",
  "GET_", "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_",
  "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_",
  "HISTOGRAM_", "HORIZONTAL_", "ICRS_", "ID_", "IIS_", "IMAGE_",
  "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_",
  "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LENGTH_", "LEVEL_", "LITTLE_",
  "LITTLEENDIAN_", "LINE_", "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_",
  "MACOSX_", "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_",
  "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_",
  "MOSAIC_", "MODE_", "MOTION_", "MOVE_", "NAME_", "NAN_", "NATIVE_",
  "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NONNAN_", "NONZERO_", "NOW_",
  "NRRD_", "NUMBER_", "OBJECT_", "OFF_", "ON_", "ONLY_", "OPTION_",
  "ORIENT_", "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_",
  "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_",
  "POLYGON_", "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_", "PRESERVE_",
  "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_",
  "RADIUS_", "RANGE_", "REGION_", "REPLACE_", "RESAMPLE_", "RESET_",
  "RESOLUTION_", "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_",
  "SAOIMAGE_", "SAOTNG_", "SAVE_", "SCALE_", "SCAN_", "SCIENTIFIC_",
  "SCOPE_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_",
  "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_",
  "SLICE_", "SMMAP_", "SMOOTH_", "SOCKET_", "SOCKETGZ_", "SOURCE_",
  "SQRT_", "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "SUM_", "SYSTEM_",
  "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_",
  "THRESHOLD_", "THICK_", "TRANSPARENCY_", "TO_", "TOGGLE_", "TOPHAT_",
  "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_", "UNSELECT_",
  "UPDATE_", "USER_", "VALUE_", "VAR_", "VIEW_", "VECTOR_", "VERSION_",
  "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_", "WCSB_", "WCSC_",
  "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_", "WCSJ_", "WCSK_",
  "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_", "WCSR_", "WCSS_",
  "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_", "WCSZ_", "WCS0_",
  "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_", "ZERO_", "ZMAX_",
  "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'", "'='", "$accept", "command",
  "numeric", "debug", "yesno", "fileNameType", "optangle", "angle",
  "sexagesimal", "hms", "dms", "coord", "coordSystem", "wcsSystem",
  "internalSystem", "maskType", "scaleType", "minmaxMode", "skyFrame",
  "skyFormat", "skyDist", "shmType", "incrLoad", "layerType", "pointShape",
  "pointSize", "analysisMethod", "analysisParam", "endian", "threed",
  "threedBorder", "threedCompass", "threedHighlite", "threedView", "bin",
  "binAbout", "binFactor", "binFunction", "binTo", "block", "blockTo",
  "clip", "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
  "colormapMotion", "colorscale", "contour", "contourCreate",
  "contourDelete", "contourLoad", "contourClipMode", "contourClipScope",
  "contourMethod", "contourPaste", "contourSave", "crop", "crop3d",
  "crosshair", "cube", "cutMethod", "fitsy", "get", "getBin", "getBinCols",
  "getBlock", "getClip", "getClipMinMax", "getClipZScale", "getColorbar",
  "getColorMap", "getColorMapLevel", "getColorScale", "getColorScaleLevel",
  "getContour", "getContourClip", "getContourColorScale", "getCoord",
  "getCrop", "getCrosshair", "getCube", "getCursor", "getData", "getInfo",
  "getiis", "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
  "getFitsDepth", "getFitsFileName", "getFitsSlice", "getGrid", "getMask",
  "getPan", "getRGB", "getSmooth", "getThreed", "getThreedBorder",
  "getThreedCompass", "getThreedHighlite", "getThreedView", "getWCS",
  "getWCSAlign", "grid", "gridCreate", "gridType", "has", "hasBin",
  "hasContour", "hasFits", "hasMarker", "hasWCS", "iis", "iisSetFileName",
  "iiscursor", "load", "loadArr", "loadArrayRGBCube", "loadENVI",
  "loadFits", "loadFitsSlice", "loadFitsExtCube", "loadFitsMosaic",
  "loadFitsMosaicImageIRAF", "loadFitsMosaicIRAF",
  "loadFitsMosaicImageWCS", "loadFitsMosaicImageWFPC2",
  "loadFitsMosaicWCS", "loadFitsRGBCube", "loadFitsRGBImage", "loadNRRD",
  "loadPhoto", "loadIncr", "macosx", "magnifier", "match", "marker", "@1",
  "markerCallBack", "markerCentroid", "markerCreate",
  "markerCreateTemplate", "markerDash", "markerEdit", "markerFormat",
  "markerGet", "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2",
  "markerSelect", "markerShow", "queries", "query", "markerTags", "@3",
  "tags", "tag", "callback", "mask", "orient", "pan", "panTo", "panMotion",
  "panner", "postscript", "precision", "pscolorspace", "region",
  "regionHighlite", "regionSelect", "renderMethod", "renderBackground",
  "rgb", "rotate", "rotateMotion", "save", "saveArray", "saveArrayRGBCube",
  "saveFits", "saveFitsImage", "saveFitsTable", "saveFitsSlice",
  "saveFitsExtCube", "saveFitsMosaic", "saveFitsMosaicImage",
  "saveFitsRGBImage", "saveFitsRGBCube", "saveFitsResample", "saveNRRD",
  "saveENVI", "smooth", "smoothFunction", "update", "updateFitsSlice",
  "warp", "wcs", "wcsAppend", "wcsReplace", "wcsAlign", "win32", "zoom",
  "zoomTo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,    89,
      78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   353,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   355,   355,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   358,   358,
     358,   358,   358,   359,   359,   360,   360,   360,   361,   362,
     363,   364,   364,   364,   364,   365,   365,   365,   365,   365,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   367,   367,
     368,   368,   368,   368,   368,   368,   369,   369,   369,   369,
     369,   369,   369,   369,   370,   370,   370,   370,   370,   371,
     371,   371,   371,   371,   371,   371,   371,   372,   372,   372,
     373,   373,   373,   373,   374,   374,   374,   375,   375,   375,
     376,   376,   376,   377,   377,   377,   377,   377,   377,   377,
     377,   378,   378,   379,   379,   379,   379,   379,   379,   380,
     380,   380,   381,   381,   381,   381,   381,   381,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   383,   383,   384,
     384,   385,   385,   386,   386,   387,   387,   387,   387,   387,
     387,   387,   387,   388,   388,   389,   389,   389,   389,   389,
     389,   389,   389,   390,   390,   391,   391,   391,   391,   391,
     392,   392,   392,   393,   393,   393,   394,   394,   394,   394,
     394,   394,   394,   395,   395,   396,   396,   396,   396,   396,
     397,   397,   397,   398,   398,   398,   398,   399,   399,   399,
     399,   399,   400,   400,   401,   401,   402,   402,   402,   402,
     402,   403,   403,   403,   403,   403,   404,   404,   405,   405,
     405,   406,   406,   406,   406,   407,   407,   408,   408,   409,
     409,   410,   410,   411,   411,   411,   411,   411,   411,   411,
     412,   412,   412,   412,   412,   413,   413,   413,   413,   413,
     413,   413,   413,   414,   415,   415,   415,   416,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   418,   418,   418,
     418,   418,   418,   418,   418,   419,   419,   419,   420,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   422,   422,
     423,   423,   423,   424,   424,   425,   426,   426,   426,   427,
     427,   427,   428,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   430,   430,   430,   431,   431,   432,   432,
     433,   433,   433,   434,   434,   434,   435,   436,   436,   437,
     437,   437,   438,   438,   438,   439,   439,   439,   440,   440,
     440,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   442,   442,   443,   443,   443,
     443,   444,   445,   445,   445,   446,   446,   446,   446,   447,
     447,   447,   448,   448,   448,   448,   448,   448,   449,   450,
     450,   450,   451,   451,   451,   451,   451,   451,   452,   452,
     452,   452,   452,   452,   452,   453,   453,   454,   454,   455,
     455,   456,   456,   457,   457,   457,   458,   458,   459,   459,
     460,   460,   461,   461,   462,   462,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   462,   462,   462,   462,
     462,   463,   464,   464,   465,   465,   465,   465,   466,   466,
     466,   466,   467,   467,   467,   467,   467,   467,   468,   468,
     468,   468,   468,   468,   468,   468,   469,   469,   470,   470,
     470,   471,   471,   471,   471,   471,   471,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   474,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   478,   478,   478,   478,   478,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   486,   486,   486,
     486,   486,   486,   487,   487,   488,   488,   488,   489,   490,
     490,   490,   490,   490,   490,   490,   491,   492,   492,   492,
     492,   492,   492,   493,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   495,   495,   495,
     495,   495,   495,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   497,
     497,   497,   497,   498,   499,   499,   499,   500,   500,   500,
     500,   500,   500,   500,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   502,   502,   502,   502,   503,
     503,   504,   504,   505,   505,   506,   507,   507,   507,   507,
     507,   507,   508,   508,   509,   509,   509,   509,   509,   510,
     510,   510,   510,   510,   510,   510,   511,   511,   512,   512,
     512,   512,   512,   512,   512,   512,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   514,   514,   515,
     516,   515,   517,   517,   517,   517,   518,   518,   519,   519,
     520,   521,   522,   521,   523,   523,   524,   525,   526,   526,
     526,   526,   526,   526,   526,   527,   527,   527,   527,   528,
     528,   528,   528,   528,   528,   528,   528,   529,   529,   529,
     530,   530,   530,   531,   531,   531,   531,   532,   532,   532,
     532,   533,   533,   534,   534,   534,   534,   535,   535,   536,
     536,   536,   536,   537,   537,   537,   537,   538,   538,   539,
     539,   539,   540,   540,   540,   541,   541,   541,   541,   541,
     542,   542,   542,   543,   543,   543,   543,   543,   544,   544,
     544,   544,   545,   545,   545,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   547,   547,   547,   548,   548,   548,
     549,   549,   549,   550,   550,   550,   551,   551,   551,   551,
     552,   552,   552,   553,   553,   553,   554,   554,   554,   555,
     555,   555,   556,   556,   556,   557,   558,   558,   558,   559,
     559,   559,   559,   560,   560,   560,   560,   560,   561,   561,
     561,   562,   562,   563,   563,   563,   563,   563,   564,   564,
     564,   565,   565,   565,   566,   566,   566,   567,   568,   568,
     568,   568,   568,   569,   569,   569,   569,   569,   569
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     3,     2,     2,     2,     2,
       3,     2,     3,     2,     2,     2,     2,     2,     2,     1,
       3,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       2,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     0,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2,     6,     2,     4,     2,     2,     2,
       3,     2,     2,     1,     2,     1,     2,     4,     5,     2,
       3,     5,     6,     1,     1,     1,     7,    11,     8,    12,
       1,     2,     2,     1,     1,     2,     2,     2,     2,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     3,     2,     2,     2,     6,    10,     1,
       2,     1,     6,    10,     1,     2,     2,     2,     2,     2,
       2,    13,    13,    12,    12,     1,     0,     1,     1,     4,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     0,     6,     8,     2,     3,     3,     3,
       0,     4,     4,     4,     4,     3,     3,     1,     3,     5,
       4,     4,     3,     2,     0,     1,     1,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     4,     9,     2,     2,     2,
       1,     3,     2,     2,     1,     2,     8,     2,     1,     2,
       1,     2,     1,     4,     9,     2,     1,     1,     1,     1,
       2,     1,     1,     2,     1,     0,     2,     2,     1,     0,
       2,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     1,     4,     5,     0,
       2,     1,     5,     2,     2,     1,     1,     1,     2,     1,
       2,     1,     1,     0,     1,     1,     0,     1,     5,     6,
       3,     6,     3,     1,     3,     1,     1,     1,     3,     6,
       7,     5,     1,     1,     4,     5,     1,     3,     0,     1,
       2,     1,     4,     1,     2,     1,     2,     3,     2,     1,
       2,     1,     4,     2,     1,     1,     3,     1,     2,     3,
       2,     0,     1,     4,     2,     0,     4,     5,     5,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     2,     2,     0,     1,     2,     1,
       6,     5,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       2,     2,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     2,     3,     1,
       2,     2,     4,     6,     1,    10,     1,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     4,     4,     4,
       3,     3,     5,     4,     4,     4,     3,     3,     3,     3,
       2,     2,     4,     3,     3,     3,     3,     4,     4,     4,
       4,     5,     4,     6,     7,     4,     4,     5,     2,     3,
       3,     3,     2,     3,     3,     3,     3,     4,     3,     5,
       6,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     3,     2,     2,     1,     3,     4,     4,
       4,     4,     4,     6,     4,     4,     5,     4,     4,     4,
       4,     5,     4,     6,     7,     4,     4,     5,     5,     5,
       5,     5,     5,     7,     5,     5,     6,     4,     4,     4,
       4,     4,     6,     4,     4,     5,     5,     5,     5,     5,
       6,     5,     7,     8,     5,     5,     6,     3,     3,     3,
       3,     4,     3,     5,     6,     3,     3,     4,     3,     3,
       3,     3,     3,     5,     3,     3,     4,     4,     4,     3,
       5,     4,     4,     2,     3,     6,     6,     1,     1,     1,
       2,     2,     2,     3,     3,     2,    12,     2,     2,     1,
       3,     4,     2,     0,     3,     1,     1,     2,     2,     2,
       2,     2,     4,     4,     4,     3,     4,     5,     8,     6,
       4,     9,     6,     7,    10,    11,    12,     9,     5,     4,
       6,     3,     5,     5,     6,     5,     4,     9,    10,    11,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       7,     7,     2,     4,     4,     4,     4,     5,     4,     4,
       5,     5,     3,     4,     4,     4,     4,     7,     9,     6,
      10,    11,    12,     9,     3,     2,     3,     5,     7,     4,
       3,     3,     6,     7,     7,     4,     4,     4,     9,     4,
       3,     4,     7,     7,     2,     3,     3,     3,     4,     2,
       2,     4,    10,     3,     1,     3,     2,     2,     2,     2,
       3,     5,     4,     5,     2,     7,     3,     2,     2,     3,
       2,     2,     2,     3,     2,     3,     4,     3,     3,     6,
       4,     2,     3,     2,     2,     4,     3,     3,     2,     3,
       1,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     2,     3,     5,     7,     7,     6,     6,     6,     6,
       5,     6,     6,     6,     6,     6,     6,     6,    11,     7,
       7,     7,     9,     9,    10,    12,    12,     2,     2,     3,
       4,     4,     4,     2,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     3,     3,
       8,     6,    10,     8,     7,     5,     2,     2,     3,     4,
       5,     3,     5,     5,     3,     4,     5,     5,     5,     3,
       5,     2,     3,     3,     5,     3,     3,     3,     4,     5,
       5,     3,     5,     5,     3,     4,     5,     5,     2,     2,
       3,     5,     6,     6,     3,     3,     3,     6,     5,     5,
       2,     3,     3,     5,     6,     3,     2,     2,     3,     2,
       3,     2,     3,     5,     6,     2,     2,     2,     1,     4,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     0,     1,     0,     0,     1,     1,     1,
       1,     1,     7,     8,     2,     4,     2,     4,     6,     2,
       1,     1,     3,     3,     1,     4,     2,     1,     3,     3,
       4,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       0,     2,     1,     3,     1,     3,     1,     2,     2,     1,
       3,     0,     0,     2,     2,     1,     3,     5,     1,     2,
       2,     3,     2,     2,     2,     1,     1,     1,     1,     4,
       2,     3,     3,     2,     3,     2,     2,     2,     3,     3,
       3,     2,     3,     1,     3,     3,     1,     2,     2,     2,
       2,     9,     6,     1,     1,     1,     1,     2,     2,     3,
       3,     1,     2,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     4,     1,     2,     2,     2,     3,
       1,     1,     1,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     3,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     4,     6,     2,     1,     1,
       1,     1,     1,     0,     5,     1,     6,     3,     1,     3,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     2,     2,     3,     1,     3,     4,     1,     2,     5,
       6,     6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   303,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,  1036,     0,
       0,     0,     0,     0,     0,     0,     0,  1036,    39,     0,
       0,     0,    44,     0,     0,     0,    48,  1223,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    55,    56,     0,   240,     6,     0,
       0,     0,     0,     0,     0,     9,     0,     0,   269,   271,
       0,     0,    11,   141,   143,   136,   137,   138,   142,   139,
     140,   274,    12,     0,   286,     0,     0,     0,    13,     0,
       0,     0,     0,   310,     0,    14,    69,    98,     0,   128,
      97,    77,    95,     0,    74,    76,    72,   129,    96,    73,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    70,
      71,    75,   317,   149,    99,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    58,    57,     0,     0,
       0,     0,     2,     0,    18,     0,     0,     0,   379,   393,
       0,   399,     0,     0,     0,     0,     0,     0,     0,   342,
       0,   469,     0,     0,     0,     0,     0,  1036,     0,   350,
       0,   354,     0,     0,     0,   358,     0,   360,     0,   362,
       0,     0,   503,   366,    19,     0,   509,    20,   514,     0,
     532,   517,   518,   519,   520,   534,   522,   523,   527,   524,
       0,   526,   528,     0,     0,    21,    23,     0,   549,     0,
       0,     0,   554,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    26,   708,    27,     0,     0,     0,     0,     0,
       0,   709,    28,     0,    29,  1038,  1039,  1040,  1037,  1041,
       0,  1098,     0,   130,     0,     0,     0,    31,     0,  1108,
    1107,  1106,  1105,    33,     0,     0,     0,     0,     0,   149,
       0,    34,     0,  1126,     0,  1123,    35,     0,     0,     0,
       0,    38,     0,    37,    36,     0,     0,     0,     0,    41,
       0,     0,  1155,    42,     0,     0,     0,     0,     0,    43,
    1219,  1218,  1222,  1221,  1220,    45,     0,    46,     0,     0,
       0,     0,     0,   205,     0,     0,     0,    47,     0,     0,
    1225,    49,     0,     0,    51,     0,     0,     0,     0,   149,
      52,  1247,    53,     0,     0,    54,     1,     4,     5,   223,
       0,   215,     0,     0,   217,     0,   225,   218,   222,   233,
     234,   219,   235,     0,   221,   243,   244,   242,   241,     0,
       0,     0,   248,   256,   259,   258,   257,   255,   247,   252,
     253,   254,   246,     0,     0,     0,     0,     0,     0,   251,
      10,     0,     0,     0,   270,     0,   275,     0,   285,   276,
     287,   277,   288,   278,   299,   279,     0,     0,   280,     0,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   306,     0,     0,     0,     0,     0,
     151,   156,   150,   152,   155,   154,   153,     0,     0,   323,
      63,    64,    65,    66,    67,    59,    60,    61,    68,    62,
       0,   328,     0,   375,   371,   367,   368,   372,   369,   374,
     329,   378,   330,   291,   383,   387,   382,   294,   293,   292,
       0,     0,   331,   394,   333,     0,   332,     0,   401,   334,
     413,   405,   416,   406,   407,   409,     0,   411,   412,   149,
     335,     0,     0,   336,     0,     0,   149,   337,   425,   149,
     423,   338,   426,   340,   149,   427,   339,     0,   149,     0,
     341,   445,     0,   443,   461,     0,     0,     0,   449,   441,
       0,   451,   465,   454,   343,   470,   471,   344,     0,     0,
       0,   436,     0,   347,   432,   433,     0,   348,   349,     0,
     472,   477,   473,   474,   475,   476,   352,   353,   478,   355,
       0,   479,   480,   481,   357,   487,   482,   483,   485,   359,
     493,   495,   497,   499,   492,   494,   501,   361,     0,     0,
     506,     0,   365,   149,   508,     0,   515,   533,   516,   535,
     536,   537,   521,   538,   540,   539,   541,   525,   529,   546,
       0,     0,     0,     0,   542,   530,     0,     0,   551,   550,
       0,     0,     0,     0,    25,     0,     0,   561,     0,   562,
       0,     0,     0,     0,     0,   563,     0,   707,     0,   564,
       0,   565,     0,     0,   566,     0,   712,   711,   710,     0,
     715,     0,     0,     0,   887,     0,     0,     0,   719,   723,
     725,   726,     0,     0,     0,     0,   824,     0,     0,     0,
     860,     0,     0,     0,     0,     0,     0,     0,   862,     0,
       0,     0,    30,  1099,  1104,   133,   134,   132,   135,   131,
    1100,     0,  1102,  1103,    32,     0,     0,     0,     0,  1115,
    1116,     0,   149,     0,  1113,  1110,     0,     0,     0,   149,
    1133,  1136,  1134,  1135,  1127,  1128,  1129,  1130,     0,     0,
       0,    40,  1152,  1153,     0,  1160,  1162,  1161,  1157,  1158,
    1156,     0,     0,     0,     0,  1163,     0,  1166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1164,  1175,
       0,     0,     0,  1165,  1167,  1217,  1150,  1151,  1149,   203,
       0,   207,   199,     0,   209,   200,     0,   211,   201,  1148,
    1147,   202,   204,   206,     0,     0,   198,     0,     0,     0,
       0,  1231,  1244,  1234,     0,     0,  1237,     0,     0,  1236,
    1235,   157,  1253,     0,  1252,  1248,   224,   220,     0,   229,
       0,   226,     0,   245,   144,   147,   148,   146,   145,   260,
     261,   262,   250,   249,   264,   266,   265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   149,     0,   307,    94,
      91,    92,    93,   149,   309,   308,     0,     0,     0,     0,
       0,     0,     0,   322,     0,   318,   316,   315,   327,   370,
       0,     0,   373,   388,   389,   384,   385,   390,   392,   391,
     386,   295,   296,   381,   380,   396,   395,     0,   400,   414,
     415,   404,   417,   410,   408,   403,     0,     0,   149,   149,
     157,   157,   157,   149,     0,     0,   149,   444,   455,     0,
     446,    78,   457,     0,     0,   448,   450,   149,     0,     0,
     453,     0,     0,     0,   438,     0,     0,     0,     0,   935,
     937,   936,     0,  1029,     0,  1008,     0,  1011,     0,     0,
    1031,  1033,     0,  1024,   351,     0,   484,   486,   496,   489,
     498,   490,   500,   491,   502,   488,     0,     0,   507,   504,
     505,   157,   531,   543,   544,   545,   547,     0,   560,   548,
       0,     0,     0,     0,     0,     0,   170,   170,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,   167,
     164,     0,     0,   164,     0,     0,     0,     0,     0,   602,
     626,     0,     0,     0,   598,     0,     0,     0,     0,   170,
     164,     0,     0,   703,     0,   713,   714,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   772,     0,     0,     0,     0,     0,   795,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   814,     0,     0,
     819,   820,     0,     0,     0,   840,   842,   841,     0,   844,
       0,     0,   851,   853,   854,   888,     0,     0,     0,     0,
     717,   718,   929,   927,   932,   931,   930,   928,   933,     0,
     722,     0,   727,     0,   926,     0,   728,   729,   730,   731,
       0,     0,     0,     0,     0,   826,     0,     0,   827,  1051,
       0,  1054,  1050,     0,     0,     0,   828,   861,   829,  1069,
    1074,  1071,  1070,  1068,  1075,  1072,  1066,  1073,  1067,  1076,
       0,     0,   834,     0,     0,     0,  1082,     0,  1084,   837,
       0,  1086,   838,   858,     0,     0,     0,   863,   864,   865,
    1101,  1114,     0,     0,  1121,  1117,     0,     0,     0,  1112,
    1111,  1125,  1124,     0,     0,  1141,     0,     0,  1137,     0,
    1145,     0,     0,  1138,     0,  1159,   192,   192,     0,   192,
       0,  1185,     0,  1184,  1176,     0,     0,     0,     0,  1180,
       0,     0,     0,  1183,     0,     0,     0,     0,     0,  1178,
    1186,     0,     0,     0,  1177,   192,   192,   192,     0,   208,
     210,   212,     0,   213,     0,    56,     0,  1227,     0,  1232,
       0,   149,  1238,  1239,     0,  1241,  1242,     0,   158,   159,
    1233,  1254,  1255,     0,   216,     0,   230,     0,     0,     0,
       0,   263,     0,     0,     0,     0,     0,     0,     0,     0,
     301,   149,     0,     0,     0,     0,   149,     0,   321,     0,
     320,   377,   376,     0,     0,     0,   149,     0,   157,   422,
     420,   424,   428,     0,     0,     0,   157,     0,    82,    81,
     462,   447,     0,   458,   460,   160,     0,     0,   345,     0,
       0,    56,     0,   437,     0,     0,   947,     0,     0,     0,
       0,     0,     0,   961,     0,     0,     0,     0,     0,     0,
     978,   979,     0,     0,     0,     0,     0,   990,     0,   996,
     997,   999,  1001,     0,  1005,  1016,  1017,  1018,     0,  1020,
    1025,  1027,  1028,  1026,   934,     0,  1007,     0,  1006,   946,
       0,     0,  1012,     0,  1014,     0,  1013,  1034,  1015,  1022,
       0,     0,   363,     0,     0,   558,   559,     0,   556,   552,
       0,   170,   170,   170,   171,   172,   570,   571,   166,   165,
       0,   170,   170,   170,     0,   576,   586,   167,   170,   170,
     170,   168,   169,   170,   170,     0,   170,   170,     0,   167,
       0,   599,     0,     0,     0,   625,     0,   624,     0,     0,
     601,     0,   600,     0,     0,     0,     0,   167,   167,   164,
       0,     0,   164,     0,     0,     0,   170,   170,   699,     0,
     170,   170,   704,     0,   183,   184,   185,   186,   187,   188,
       0,    86,    87,    85,   735,     0,     0,     0,     0,     0,
       0,   881,   879,   874,     0,   884,   868,   885,   871,   883,
     877,   866,   880,   869,   867,   886,   882,     0,     0,     0,
     751,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   782,     0,     0,     0,     0,     0,
     794,   796,     0,     0,   801,   800,     0,     0,   173,     0,
       0,     0,   149,     0,   810,     0,     0,     0,     0,   815,
     816,   817,     0,     0,     0,   823,   839,   843,   845,   848,
     847,     0,     0,     0,   852,   889,   891,     0,   890,   720,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1035,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   724,     0,     0,     0,     0,
     825,     0,   149,     0,  1046,  1044,     0,     0,   149,  1049,
     830,     0,     0,     0,   836,     0,     0,  1087,   856,   857,
       0,   859,  1120,  1122,  1119,  1118,  1109,     0,     0,     0,
    1142,     0,     0,  1146,  1154,   194,   195,   196,   197,   193,
    1169,  1168,     0,     0,     0,  1171,  1170,   192,     0,     0,
       0,  1179,     0,     0,     0,     0,     0,  1196,     0,  1210,
    1209,  1211,     0,     0,     0,  1182,     0,     0,     0,  1181,
    1191,  1190,  1192,  1188,  1187,  1189,  1213,  1212,  1214,     0,
       0,     0,  1230,   149,     0,   149,  1245,  1240,  1243,     0,
       0,   149,     0,     0,     0,   227,     0,     0,     0,     0,
       0,     0,     0,     0,   298,   297,     0,     0,   289,   300,
     302,     0,   312,   314,   313,   311,   149,   319,     0,     0,
       0,   157,   149,     0,     0,     0,     0,   442,   456,    80,
      79,   464,     0,   459,   162,   163,   161,   452,     0,   149,
       0,     0,     0,   440,   434,     0,     0,     0,     0,     0,
       0,   149,   948,     0,   951,     0,     0,   954,     0,   149,
     959,     0,   962,   963,     0,   965,   966,   967,     0,   971,
       0,     0,   974,     0,   980,     0,     0,     0,   985,   986,
     984,     0,     0,     0,   991,   992,     0,     0,   995,   998,
    1000,  1002,     0,     0,  1019,  1021,   938,  1030,   939,     0,
       0,  1032,  1023,     0,     0,   512,   513,     0,     0,   557,
       0,   567,   568,   569,   170,   573,   574,   575,     0,     0,
       0,   580,   581,   164,     0,     0,     0,   170,   587,   588,
     589,   590,   592,   167,   595,   596,     0,   170,     0,     0,
       0,   167,   167,   164,     0,     0,     0,     0,   623,     0,
     627,     0,     0,     0,     0,     0,   167,   167,   164,     0,
       0,   164,     0,     0,     0,     0,     0,   167,   167,   164,
       0,     0,   164,     0,     0,     0,     0,     0,   167,   167,
     164,     0,     0,   164,     0,     0,     0,     0,   167,   167,
     164,     0,     0,     0,   167,   603,   604,   605,   606,   608,
       0,   611,   612,     0,   167,     0,     0,   697,   698,   170,
     701,   702,     0,   734,   149,   736,     0,     0,   740,     0,
       0,     0,     0,     0,   873,   870,   876,   875,   872,   878,
       0,   749,     0,     0,     0,     0,   149,   756,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   773,   774,   775,     0,   779,   776,   778,     0,     0,
     784,   783,   785,   786,     0,     0,     0,     0,     0,     0,
     149,   149,   799,   179,   175,   180,   174,   177,   176,   178,
     805,   806,   807,     0,     0,   809,   811,   149,   149,     0,
     818,   821,   149,   149,   846,   850,   892,   721,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1077,   917,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   918,     0,     0,     0,     0,     0,
     732,   733,   149,   157,     0,   149,   149,  1052,  1053,     0,
       0,   832,     0,   149,  1083,  1085,   855,     0,  1139,  1140,
    1143,  1144,   192,   192,   192,  1215,  1194,  1193,  1195,  1198,
    1197,  1201,  1200,  1202,  1199,  1207,  1206,  1208,  1204,  1203,
    1205,     0,     0,  1224,  1229,     0,  1246,     0,   149,     0,
    1249,     0,     0,   231,     0,   228,     0,     0,     0,   267,
       0,     0,     0,     0,   149,     0,   304,   137,     0,   397,
       0,   418,   157,   160,     0,     0,   431,     0,   149,   466,
     149,     0,   435,     0,     0,     0,     0,     0,   149,   949,
     160,   160,   160,   149,   955,   160,   157,   160,   160,   149,
     968,   160,   160,   160,   149,   975,   160,   160,   149,     0,
     160,   149,   160,   160,   149,   160,   149,  1009,  1010,     0,
       0,   511,   553,     0,   572,   577,   578,   579,     0,   583,
     584,   585,   591,   170,   167,   597,   614,   615,   616,   617,
     618,     0,   620,   621,   167,     0,     0,     0,   167,   167,
     164,     0,     0,     0,     0,     0,     0,   167,   167,   164,
       0,     0,     0,     0,     0,     0,   167,   167,   164,     0,
       0,     0,   167,   170,   170,   170,   170,   170,     0,   170,
     170,     0,   167,   167,   170,   170,   170,   170,   170,     0,
     170,   170,     0,   167,   167,   677,   678,   679,   680,   682,
       0,   685,   686,     0,   167,   688,   689,   690,   691,   692,
       0,   694,   695,   167,   607,   167,     0,   613,     0,     0,
     700,     0,   737,   160,     0,     0,   160,     0,     0,     0,
     748,   160,   752,   753,   160,   755,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   777,
     780,   781,     0,   160,     0,     0,     0,   797,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1078,  1057,     0,  1064,  1065,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   149,     0,     0,    83,     0,     0,   924,   925,   157,
       0,     0,     0,  1047,  1045,  1055,   831,   833,   157,  1132,
    1173,  1172,  1174,  1216,     0,  1226,  1256,     0,     0,  1251,
    1250,   232,     0,     0,     0,   272,     0,     0,     0,   290,
     160,   398,   402,   419,   421,     0,   429,   463,   467,   468,
       0,     0,     0,     0,     0,     0,   945,   950,   953,   952,
     956,   957,   958,   960,   964,   969,   970,   972,   973,   976,
     977,   981,   157,   160,   988,   157,   989,   993,   157,  1003,
     157,     0,     0,   510,     0,   582,   593,   170,   167,   622,
     170,   170,   170,   170,   170,     0,   170,   170,   167,   170,
     170,   170,   170,   170,     0,   170,   170,   167,   170,   170,
     170,   170,   170,     0,   170,   170,   167,   170,   637,   638,
     639,   640,   642,   167,   645,   646,     0,   170,   170,   666,
     667,   668,   669,   671,   167,   674,   675,     0,   170,   681,
     167,     0,   687,   167,   696,   609,   167,   705,   706,   149,
     739,     0,   160,   742,     0,   149,     0,   750,   754,   149,
       0,   761,   762,   763,   764,   768,   769,   765,   766,   767,
       0,     0,   160,   789,     0,   149,     0,     0,   802,   160,
       0,     0,   160,   160,     0,   849,     0,   181,   181,     0,
       0,   181,     0,   181,  1035,     0,     0,     0,     0,     0,
       0,     0,     0,  1056,     0,     0,   181,   181,     0,     0,
       0,     0,     0,     0,     0,     0,   919,     0,     0,     0,
    1035,    84,     0,   181,     0,  1080,   923,     0,     0,     0,
     214,  1258,  1257,     0,     0,   236,     0,     0,     0,     0,
     305,   430,   324,     0,   941,     0,   149,     0,   982,   983,
     987,   994,  1004,   356,   324,     0,   594,   619,   628,   629,
     630,   631,   632,   167,   634,   635,   170,   657,   658,   659,
     660,   661,   167,   663,   664,   170,   648,   649,   650,   651,
     652,   167,   654,   655,   170,   641,   170,   167,   647,   670,
     170,   167,   676,   683,   167,   693,   610,     0,   160,   743,
       0,     0,     0,     0,     0,   770,   771,   787,     0,     0,
       0,   798,   803,     0,   812,   813,   804,   160,     0,   182,
    1035,  1035,    83,     0,  1035,     0,  1035,   893,   149,     0,
    1059,     0,  1062,  1096,  1063,  1061,  1058,     0,  1035,  1035,
      83,     0,     0,  1035,  1035,     0,     0,  1035,   922,   920,
     921,   900,  1035,  1035,  1080,  1091,     0,  1048,   835,     0,
       0,     0,   238,     0,     0,     0,   325,   326,   346,     0,
       0,   189,   944,   364,     0,   170,   636,   170,   665,   170,
     656,   643,   170,   672,   170,   684,     0,   738,   160,   160,
       0,   160,     0,   160,   160,     0,   160,     0,  1035,   906,
     902,  1035,     0,   907,     0,   901,  1035,     0,  1060,     0,
     904,   903,  1035,     0,     0,   898,   896,  1035,   149,   897,
     899,   905,  1091,  1042,     0,     0,  1081,  1089,  1131,     0,
       0,     0,   268,   291,   294,   292,     0,     0,   940,   149,
     190,   191,   943,   555,   633,   662,   653,   644,   673,   160,
     741,   747,     0,   760,   757,   788,   793,     0,   808,     0,
     911,   895,    83,     0,   909,  1097,     0,   894,    83,     0,
     910,     0,  1043,  1093,  1095,     0,  1088,     0,     0,   273,
       0,     0,     0,     0,   189,     0,   744,   149,   758,   790,
     822,  1035,     0,     0,  1035,     0,   160,  1094,  1090,   237,
       0,     0,     0,     0,     0,   942,   716,   149,   745,   759,
     149,   791,   913,     0,  1035,   912,     0,     0,   239,   284,
       0,   283,     0,   746,   792,    83,   914,    83,  1035,   282,
     281,  1035,  1035,   908,   916,   915
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1393,   172,   152,  1240,  2470,  2471,   424,   425,
     426,   427,   153,   154,   155,   680,    91,   799,   447,  1190,
    1657,  1330,  1343,  1326,  1900,  2570,  1390,  2692,  1560,   337,
     752,   755,   758,   766,    63,   361,   367,   371,   374,    68,
     377,    75,   392,   388,   382,   399,    82,   404,    92,    98,
     409,   411,   413,   481,   853,  1626,   415,   418,   105,   434,
     156,   158,  2618,   174,   214,   470,   842,   472,   482,   845,
     850,   484,   486,   856,   489,   858,   500,   861,   863,   503,
     507,   511,   513,   516,   520,   547,   543,  1253,   534,   880,
     885,   877,  1241,   890,   537,   556,   559,   564,   569,   577,
     919,   921,   923,   925,   582,   929,   217,   584,  1727,   235,
     586,   588,   592,   597,   605,   244,  1319,   608,   252,   617,
    1335,   619,   625,   974,  1351,   969,  1768,  1357,  1355,  1770,
     970,  1360,  1362,   631,   634,   629,   254,   262,   264,   672,
    1051,  1417,  1040,  1515,  1944,  2262,  1056,  1049,   914,  1294,
    1298,  1306,  1308,  1928,   270,  1065,  1068,  1076,  2234,  2235,
    2236,  1929,  2605,  2606,  1099,  1102,  2676,  2677,  2673,  2674,
    2723,  2237,  2238,   277,   283,   291,   694,   689,   296,   301,
     303,   704,   711,  1128,  1133,   761,   749,   309,   313,   718,
     319,   725,  1565,   738,   739,  1164,  1159,  1571,  1149,  1577,
    1589,  1585,  1153,   743,   727,   325,   326,   341,  1177,   344,
     350,   776,   779,   773,   352,   355,   784
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2554
static const yytype_int16 yypact[] =
{
    4892,    95,   437,    44, -2554, -2554,  1145,  -142,   538,   763,
    1152,   195,  2843,   162,   184,  2403,    59,  5044,    55,  2014,
   -2554,   184,   555,   191,  1423,   127,   136,   212,   436,   576,
     438,   203,  1029,   177,    14,   237,   404,   436, -2554,   -19,
      20,  1061, -2554,   450,   505,   851, -2554,   333, -2554,    77,
    1495,   294,    88,   544,    97,   992,   284,   564,   575,   109,
     585,    63,   129, -2554, -2554, -2554,   626,   923, -2554,    40,
      50,   184,    -9,   144,   493, -2554,   606,   923, -2554, -2554,
      71,   923, -2554, -2554, -2554, -2554,   923, -2554, -2554, -2554,
   -2554, -2554, -2554,    72,   600,   636,   641,   126, -2554,   923,
    1378,   923,   923,   892,   923, -2554, -2554, -2554,   454, -2554,
   -2554, -2554, -2554,  4396, -2554, -2554, -2554, -2554, -2554, -2554,
     923, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,  1436, -2554,   923, -2554,   651, -2554, -2554,
     184,   184,   184,   184,   184,   184, -2554, -2554,   184,   184,
     184,   184, -2554,   572, -2554,   614,  1486,   573,    18,   455,
     588,   -32,  3277,   562,  4472,  4354,   708,  4396,  2893, -2554,
     898,   -55,   800,   732,   832,  1060,   810,   436,   578, -2554,
     764, -2554,   565,   553,   103, -2554,   166, -2554,  1024, -2554,
      54,   750,    35, -2554, -2554,  4594, -2554, -2554, -2554,   778,
     830, -2554, -2554, -2554, -2554,   432, -2554, -2554, -2554, -2554,
     -68, -2554, -2554,  4594,  4029, -2554, -2554,    90, -2554,   888,
     901,   488, -2554,   923, -2554,   920,    26,   936,    52,   820,
     944,    56, -2554, -2554, -2554,   943,   956,   184,   184,   923,
     923, -2554, -2554,   961, -2554, -2554, -2554, -2554, -2554, -2554,
    3916, -2554,   966,    11,   923,  4594,   923, -2554,   976, -2554,
   -2554, -2554, -2554, -2554,   923,   942,   184,  1466,   923,  1436,
     923, -2554,   980, -2554,  4565, -2554, -2554,   714,   998,  1006,
     923, -2554,  1010, -2554, -2554,   -34,  1012,  4594,  1018, -2554,
    1178,   923,   946, -2554,   691,   934,  1482,   457,  1059, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554,  1062, -2554,   478,    -1,
      10,   173,    47, -2554,   923,   923,   104, -2554,   923,   808,
    1080, -2554,   923,   923, -2554,  1085,    23,    24,  1092,  1436,
   -2554, -2554, -2554,   654,   923, -2554, -2554, -2554, -2554, -2554,
     923, -2554,  1100,  1101, -2554,   923,   964, -2554, -2554, -2554,
   -2554, -2554, -2554,   923, -2554, -2554,   923, -2554, -2554,   377,
     377,  1104, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,   914,   923,   923,  1120,  1128,  1130, -2554,
   -2554,   923,   923,   923, -2554,   923, -2554,  1132, -2554, -2554,
   -2554, -2554,   969, -2554,  1122, -2554,  4594,  1142, -2554,   923,
   -2554, -2554, -2554,   923,  1140,  1146,  1146,  4594,   923,   923,
     923,   923,   923,   923, -2554,   923,  4396,  1378,   923,   923,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554,  1378,   923, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
    1167, -2554,   911,   426, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,   -78, -2554, -2554, -2554,  1022, -2554,   -23,
      37,    37, -2554, -2554, -2554,  1183, -2554,  1196, -2554, -2554,
     345, -2554,  1026, -2554, -2554, -2554,  1039, -2554, -2554,  1436,
   -2554,   923,   923, -2554,  4594,  4594,  1436, -2554, -2554,  1436,
   -2554, -2554, -2554, -2554,  1436, -2554, -2554,  4594,  1436,   923,
   -2554, -2554,  4594, -2554, -2554,   417,  1021,    13, -2554, -2554,
    1023,  4594,   272, -2554, -2554, -2554, -2554, -2554,  1209,  1224,
    1237, -2554,  1051, -2554, -2554, -2554,   923, -2554, -2554,   815,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
      54, -2554, -2554, -2554, -2554, -2554, -2554,  1067,  1072, -2554,
   -2554,  1182,  1199,  1204, -2554, -2554,  1037, -2554,   923,  1274,
    1054,  4565, -2554,  1436, -2554,  1277, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
    4594,  4594,  4594,  4594, -2554, -2554,  1279,   184, -2554, -2554,
    1282,  1286,  1095,   923, -2554,   889,  1206, -2554,  1302, -2554,
     496,  1222,  4678,   725,  1306, -2554,  1311, -2554,  1312, -2554,
     232, -2554,  1315,  1317, -2554,  1319, -2554, -2554, -2554,   923,
   -2554,  4565,  4357,  1174,   434,  1320,   251,  1231, -2554, -2554,
   -2554,  1314,    28,  1329,  1331,    41,   923,   309,   499,    86,
    4594,   184,  2198,   684,    36,    49,    32,    29, -2554,  1322,
    1357,  1330, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554,   923, -2554, -2554, -2554,   923,   923,   923,   923, -2554,
   -2554,   923,  1436,   923, -2554,   923,  1378,   923,  1333,  1436,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,  1381,   473,
     534, -2554, -2554, -2554,  1387, -2554, -2554, -2554, -2554,  1296,
   -2554,  1396,  1401,  1326,  1403, -2554,  1410, -2554,  1412,  1332,
    1413,   469,   869,   502,   781,   530,  1417,   702, -2554, -2554,
    1418,  1437,  1439, -2554, -2554,  1442, -2554, -2554, -2554, -2554,
    1443, -2554, -2554,  1445, -2554, -2554,  1446, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554,   923,   923, -2554,   923,   996,   923,
     923, -2554,   384, -2554,  1096,  1448, -2554,  1113,  1449, -2554,
   -2554,   -35,   923,   923, -2554,  1444, -2554, -2554,  1452,  1195,
     923,  1447,   777, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554,  1456,  1457,   923,
     923,   923,  1459,   184,  1460,  1462,  1436,  4594, -2554, -2554,
   -2554, -2554, -2554,  1436, -2554, -2554,   923,   923,   923,  4594,
     923,  1378,   923, -2554,   923, -2554, -2554, -2554, -2554, -2554,
    1463,  1472, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554,   562, -2554,   923, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554,  4594,   923,  1436,  1436,
     -35,   -35,   -35,  1436,  1378,   923,  1436, -2554, -2554,   923,
   -2554,   422,  1316,  1473,  1477, -2554, -2554,  1436,  1310,  1339,
   -2554,  1479,  1484,  1515,  1208,   923,  3600,   441,  1000, -2554,
   -2554, -2554,   923,    69,   779, -2554,  1262, -2554,  2198,  1267,
      83,  1240,    76, -2554, -2554,   923, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554,   923,  1525, -2554, -2554,
   -2554,   -35, -2554, -2554, -2554, -2554, -2554,  4537, -2554, -2554,
    1527,  1529,   923,  1532,  1533,  1535,   -11,   -11,   -62,  1537,
    1540,  1545,  1548,  1283,  1284,  1551,  1553,  1554,   453,   453,
     -62,  1556,  1557,   -62,  1560,  1561,  5045,  1563,  1564, -2554,
   -2554,  1565,  1566,   536, -2554,  1558,  1569,  1571,  1572,   -11,
     -62,  1575,  1579, -2554,  1580, -2554, -2554,  1436,  1160,  1249,
    1341,   -33,  1348,  1483,   843,    -7,  1584,   128,  1453,  1488,
     906,   931,  1555,   341,  1355,  1498,  1600,  1400,   242,   132,
    -106,   393,  4594,  2198,  1577,   624,  1371,  1406,  1617,    30,
   -2554, -2554,   252,  1621,  1622, -2554, -2554, -2554,  1624,  1414,
     182,  2198,  1419, -2554, -2554, -2554,   184,  1628,  1633,   923,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,    21,
   -2554,  2055, -2554,   923, -2554,   923, -2554, -2554, -2554, -2554,
     923,   923,   923,   251,  4594, -2554,  1635,  1173, -2554, -2554,
     923, -2554, -2554,   923,  4594,   923, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
     184,   923, -2554,   923,   251,  1639, -2554,   923,   923, -2554,
     184, -2554, -2554, -2554,   161,  1640,  1641, -2554, -2554, -2554,
   -2554, -2554,   923,   923, -2554, -2554,  1378,   923,   923, -2554,
   -2554, -2554, -2554,  1634,   923, -2554,   923,  1536, -2554,   923,
   -2554,   923,  1539, -2554,  1644, -2554,   792,   792,   712,   792,
    1649, -2554,   724, -2554, -2554,  1650,  1651,   782,  1653, -2554,
    1654,  1656,  1658, -2554,   796,   849,  1659,  1661,  1664, -2554,
   -2554,  1665,  1666,  1668, -2554,   792,   792,   792,   923, -2554,
   -2554, -2554,   923, -2554,   923,   666,  4594, -2554,   923, -2554,
    4565,  1436, -2554, -2554,  1670, -2554, -2554,  1671, -2554, -2554,
   -2554, -2554,  1657,  1466, -2554,   923,  1667,   923,   923,   923,
    1017, -2554,  1647,  1669,   923,   923,   -14,  1672,   184,   184,
   -2554,  1436,   923,  1674,  1677,  1679,  1436,  4594, -2554,   923,
   -2554, -2554, -2554,   923,   923,   923,  1436,  4594,   -35, -2554,
   -2554, -2554, -2554,  1378,   923,  1680,   -35,   923,  1625,  1652,
     419, -2554,  1684, -2554, -2554,   894,  3244,   923, -2554,   923,
    1681,  1691,   923, -2554,  1687,  1176,  4396,  1454,   399,  1458,
     106,  4594,   533, -2554,   135,  1559,   138,   696,  1461,   175,
   -2554, -2554,   439,  1528,   262,  1574,   563,  2198,   857, -2554,
    1695,  1464, -2554,   508, -2554, -2554, -2554, -2554,  2198,  1493,
   -2554, -2554, -2554, -2554, -2554,   923, -2554,   923, -2554, -2554,
     923,   923, -2554,   923, -2554,   923, -2554, -2554, -2554, -2554,
    1506,   923, -2554,   923,    25, -2554, -2554,  1700,  1701, -2554,
     923,   -11,   -11,   -11, -2554, -2554, -2554, -2554, -2554, -2554,
    1702,   -11,   -11,   -11,   963, -2554, -2554,   453,   -11,   -11,
     -11, -2554, -2554,   -11,   -11,  1703,   -11,   -11,  1705,   453,
    1014, -2554,  1708,  1709,  1713, -2554,   611, -2554,   731,   872,
   -2554,  1105, -2554,  1451,  1714,  1715,  1718,   453,   453,   -62,
    1706,  1720,   -62,  1721,  1726,  1727,   -11,   -11, -2554,  1728,
     -11,   -11, -2554,  1729, -2554, -2554, -2554, -2554, -2554, -2554,
     184, -2554, -2554, -2554,  4396,  1301,   184,   923,  1368,  1421,
     386, -2554, -2554, -2554,   642, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554,  1730,   184,   923,
   -2554,   184,  1733,   923,  4594,   184,  1427,  1494,  1501,   179,
     202,  1502,   226,  1435,  1438,  1740,  1741,  1743,   843,  1744,
    1747,  1750,  1450,  1467,  1220,  1753,   184,   923,  1407,  1433,
   -2554, -2554,   184,  4594, -2554, -2554,  4594,   923,    58,  1755,
     184,   923,  1436,   184, -2554,  1756,  4594,  4594,   923, -2554,
   -2554, -2554,   184,   184,  4594, -2554, -2554, -2554, -2554, -2554,
   -2554,  4594,   923,   184, -2554, -2554, -2554,   923, -2554, -2554,
    1759,   923,  1542,   186,   923,  1543,   923,   190,   923, -2554,
     923,  1544,  1547,   923,   923,   923,   923,   923,   923,   923,
     923,    15,   923,   923,  1549, -2554,   923,   923,   923,   923,
   -2554,  4594,  1436,  1765,  4594,  4594,   923,   923,  1436, -2554,
     923,   923,   923,  4594, -2554,   923,   923, -2554, -2554, -2554,
    1771, -2554, -2554, -2554, -2554, -2554, -2554,  1831,   923,   923,
   -2554,   923,   923, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554,  1832,  1834,  1838, -2554, -2554,   792,  1840,  1844,
    1842, -2554,  1846,  1847,  1848,  1849,  1851, -2554,  1852, -2554,
   -2554, -2554,  1861,  1862,  1864, -2554,  1865,  1866,  1868, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,   923,
     923,   923, -2554,  1436,   923,  1436, -2554, -2554, -2554,  1466,
     923,  1436,   923,   923,   923, -2554,   923,   923,  1869,   923,
    1871,  1754,   923,   923, -2554, -2554,  1872,  4594, -2554, -2554,
   -2554,   923, -2554, -2554, -2554, -2554,  1436, -2554,   883,   923,
     883,   -35,  1436,  4594,   923,   923,  1873, -2554, -2554, -2554,
   -2554, -2554,   923, -2554, -2554, -2554, -2554, -2554,  4594,  1436,
    4594,   923,  1874, -2554, -2554,  1875,  1877,  1879,  1880,  1881,
    4594,  1436, -2554,  4594, -2554,  4594,  4594,  4396,  4594,  1436,
   -2554,  4594, -2554, -2554,  4594, -2554, -2554,  4396,  4594, -2554,
    4594,  4594,  4396,  4594, -2554,  4594,  4594,   923, -2554, -2554,
   -2554,  4594,  4594,  4594, -2554, -2554,  4594,  4594, -2554, -2554,
   -2554, -2554,  4594,  4594, -2554, -2554, -2554, -2554, -2554,   923,
     923, -2554, -2554,  1883,   923, -2554, -2554,  1884,  1886, -2554,
     923, -2554, -2554, -2554,   -11, -2554, -2554, -2554,  1887,  1888,
    1889, -2554, -2554,   -62,  1891,  1892,  1893,   -11, -2554, -2554,
   -2554, -2554, -2554,   453, -2554, -2554,  1895,   -11,  1897,  1898,
    1899,   453,   453,   -62,  1901,  1903,  1905,  1123, -2554,  1213,
   -2554,  1361,  1581,  1906,  1907,  1908,   453,   453,   -62,  1904,
    1910,   -62,  1920,  1608,  1921,  1934,  1936,   453,   453,   -62,
    1941,  1943,   -62,  1944,  1620,  1945,  1946,  1947,   453,   453,
     -62,  1949,  1951,   -62,  1953,  1982,  1983,  1985,   453,   453,
     -62,  1987,  1989,  1990,   453, -2554, -2554, -2554, -2554, -2554,
    1993, -2554, -2554,  1996,   453,  1998,  1999, -2554, -2554,   -11,
   -2554, -2554,  2000, -2554,  1436, -2554,  4594,   923, -2554,   923,
    4594,   923,  2001,  1249, -2554, -2554, -2554, -2554, -2554, -2554,
    2002, -2554,  4594,   184,  2005,  4594,  1436, -2554,  2006,  1249,
     923,   923,   923,   923,   923,   923,   923,   923,   923,  2008,
    2009, -2554, -2554, -2554,  2013, -2554, -2554, -2554,  2010,  2015,
   -2554, -2554, -2554, -2554,   923,  4594,   923,  2017,  1249,   184,
    1436,  1436, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,   923,  1378, -2554, -2554,  1436,  1436,   923,
   -2554, -2554,  1436,  1436, -2554, -2554, -2554, -2554,   923,   923,
     923,   923,   923,   923,   923,   923,   923,   923,  2473, -2554,
     923,   923,   923,   923,   923,   923,   923,   923,   923,   923,
     923,  1648,  2022,   923, -2554,   923,   923,   923,  2016,  2026,
   -2554, -2554,  1436,   -35,  2027,  1436,  1436, -2554, -2554,  1378,
     923, -2554,  2028,  1436, -2554, -2554, -2554,  2030, -2554, -2554,
   -2554, -2554,   792,   792,   792, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554,  1249,   923, -2554, -2554,   923, -2554,   923,  1436,   923,
   -2554,  1378,   923, -2554,   923, -2554,  1876,  2031,  2032, -2554,
    2034,   923,   923,  2035,  1436,  4594, -2554, -2554,   923, -2554,
     923, -2554,   -35,   894,   923,  2036, -2554,   923,  1436, -2554,
    1436,    54, -2554,  2037,  2038,  2039,  2040,  2041,  1436, -2554,
     894,   894,   894,  1436, -2554,   894,   -35,   894,   894,  1436,
   -2554,   894,   894,   894,  1436, -2554,   894,   894,  1436,  4594,
     894,  1436,   894,   894,  1436,   894,  1436, -2554, -2554,  2043,
      54,  2044, -2554,   923, -2554, -2554, -2554, -2554,  2046, -2554,
   -2554, -2554, -2554,   -11,   453, -2554, -2554, -2554, -2554, -2554,
   -2554,  2047, -2554, -2554,   453,  2048,  2049,  2050,   453,   453,
     -62,  2053,  2056,  2057,  2059,  2060,  2061,   453,   453,   -62,
    2063,  2064,  2066,  2067,  2068,  2071,   453,   453,   -62,  2065,
    2074,  2075,   453,   -11,   -11,   -11,   -11,   -11,  2079,   -11,
     -11,  2080,   453,   453,   -11,   -11,   -11,   -11,   -11,  2081,
     -11,   -11,  2082,   453,   453, -2554, -2554, -2554, -2554, -2554,
    2083, -2554, -2554,  2084,   453, -2554, -2554, -2554, -2554, -2554,
    2085, -2554, -2554,   453, -2554,   453,  2086, -2554,  2088,  2090,
   -2554,  4565, -2554,   894,  2091,  4594,   894,   923,  4594,  2092,
   -2554,   894, -2554, -2554,   894, -2554,  4594,  2093,   923,   923,
     923,   923,   923,   923,   923,   923,   923,   923,   923, -2554,
   -2554, -2554,  4594,   894,   923,  4594,  2096, -2554,  1378,  1378,
    4594,  1378,  1378,  4594,  4594,  1378,  1378,   923,   923,   923,
     923,   923,   923,  1249,   923,   923,   923,  1596,  1683,  1688,
    1696,  1761,  1762,  1766,  2473, -2554,  1767, -2554, -2554,  1249,
     923,   923,   923,   923,  1249,   923,   923,   923,   923,   923,
     923,  1436,   923,  1593,  1249,   923,   923, -2554, -2554,   -35,
     184,  2098,  2101, -2554, -2554, -2554, -2554, -2554,   -35,  2116,
   -2554, -2554, -2554, -2554,   923, -2554, -2554,  1378,   923, -2554,
   -2554, -2554,  1089,  2118,  2119, -2554,   923,  2117,   883, -2554,
     894, -2554, -2554, -2554, -2554,  2120, -2554, -2554, -2554, -2554,
    2122,  2126,  2123,  2127,  4594,  2128, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554,   -35,   894, -2554,   -35, -2554, -2554,   -35, -2554,
     -35,  2129,  2131, -2554,   923, -2554, -2554,   -11,   453, -2554,
     -11,   -11,   -11,   -11,   -11,  2132,   -11,   -11,   453,   -11,
     -11,   -11,   -11,   -11,  2135,   -11,   -11,   453,   -11,   -11,
     -11,   -11,   -11,  2137,   -11,   -11,   453,   -11, -2554, -2554,
   -2554, -2554, -2554,   453, -2554, -2554,  2138,   -11,   -11, -2554,
   -2554, -2554, -2554, -2554,   453, -2554, -2554,  2140,   -11, -2554,
     453,  2141, -2554,   453, -2554, -2554,   453, -2554, -2554,  1436,
   -2554,  4594,   894, -2554,  2142,  1436,   923, -2554, -2554,  1436,
     923, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
     923,   923,   894, -2554,  2143,  1436,   923,  1378, -2554,   894,
     923,  1378,   894,   894,  4594, -2554,   923,  2146,  2146,   923,
     923,  2146,  1249,  2146, -2554,  4594,   843,  2147,  2149,  2150,
    2153,  2154,  2156, -2554,   184,  1249,  2146,  2146,   923,   923,
    1249,   923,   923,   923,   923,   923, -2554,  1378,   923,  2157,
   -2554, -2554,   923,  2146,   184,    16, -2554,  2158,   184,  2162,
   -2554, -2554, -2554,  2164,   923, -2554,  2167,  2163,  2073,   923,
   -2554, -2554,    87,  4594, -2554,  2168,  1436,  4594, -2554, -2554,
   -2554, -2554, -2554, -2554,    87,   923, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,   453, -2554, -2554,   -11, -2554, -2554, -2554,
   -2554, -2554,   453, -2554, -2554,   -11, -2554, -2554, -2554, -2554,
   -2554,   453, -2554, -2554,   -11, -2554,   -11,   453, -2554, -2554,
     -11,   453, -2554, -2554,   453, -2554, -2554,   923,   894, -2554,
    4594,  4594,   923,  4594,   923, -2554, -2554, -2554,  4594,  4594,
     923, -2554, -2554,  4594, -2554, -2554, -2554,   894,  2171, -2554,
   -2554, -2554,  1249,   923, -2554,  2172, -2554, -2554,  1436,  2173,
   -2554,  2176, -2554, -2554, -2554, -2554, -2554,  2177, -2554, -2554,
    1249,   923,  2178, -2554, -2554,   923,  4594, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554,    16,  1768,  2198, -2554, -2554,  2179,
    2191,  2193, -2554,  2145,  2180,   101, -2554, -2554, -2554,  2195,
    4594,   112, -2554, -2554,  2196,   -11, -2554,   -11, -2554,   -11,
   -2554, -2554,   -11, -2554,   -11, -2554,  4565, -2554,   894,   894,
     923,   894,  2199,   894,   894,   923,   894,   923, -2554, -2554,
   -2554, -2554,  2200, -2554,   923, -2554, -2554,  2197, -2554,   923,
   -2554, -2554, -2554,  2203,   923, -2554, -2554, -2554,  1436, -2554,
   -2554, -2554,  1768, -2554,  1777,  1802,  2198, -2554, -2554,  2215,
    2219,  2221, -2554, -2554, -2554, -2554,   595,   595, -2554,  1436,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,   894,
   -2554, -2554,  2222, -2554,  4396, -2554, -2554,  2224, -2554,  1249,
   -2554, -2554,  1249,   923, -2554, -2554,   923, -2554,  1249,   923,
   -2554,  4594, -2554,  1777, -2554,   184, -2554,  2225,  2226, -2554,
     923,   923,   923,   923,   112,  2227,  4396,  1436, -2554,  4396,
   -2554, -2554,   923,  2229, -2554,   923,   894, -2554, -2554, -2554,
    2231,  2236,   923,  2243,   923, -2554, -2554,  1436, -2554, -2554,
    1436, -2554, -2554,  2230, -2554, -2554,  2246,  2249, -2554, -2554,
    2250, -2554,  2251, -2554, -2554,  1249, -2554,  1249, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2554, -2554,    -3, -2554,   290, -2554, -2547,  -980,  1805, -2554,
     807,  -368,  1841,   -49,    79, -2554, -1627,  1878,  1812,  -747,
     334,  -930,   744,  1607, -2554, -1172, -2554,  -730, -1127, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,  -364,  -476, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554,  -245, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -1434, -2554, -2554, -2554, -2554, -2554,  -651, -2554, -2554,
   -2554, -2554, -2554, -2554,   116, -2554, -2554, -2554, -2554,    27,
    -660, -1988,  -344, -2554, -2554, -2554, -2554,  -414,  -409, -2554,
   -2554, -2553, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554,  1534, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1229
static const yytype_int16 yytable[] =
{
      67,   349,  1090,   106,  1874,   854,  1064,  1067,   104,  1394,
    1561,  2018,  1566,  2020,   106,   674, -1079,   882,    64,    65,
    1941,    64,    65,    64,    65,  2651,  1489,   774,   777,   288,
    1345,   615,  1624,  1348,  1103,  1471,   106,   312,  1596,  1597,
    1598,  1094,   306,  2662,   379,  1725,   343,    64,    65,   354,
    1379,   580,   360,    64,    65,   847,   366,   620,  1059,   373,
     759,   632,  1188,   376,   378,   750,  1096,   387,  1053,   833,
     394,   398,    64,    65,   401,   402,   753,   407,   405,   836,
      64,    65,   593,   406,   297,  1893,    64,    65,  1396,    64,
      65,    64,    65,  1309,   606,   369,   419,   423,   428,   429,
     433,   435,   357,  1328,    64,    65,  1894,    64,    65,  1895,
     109,   290,    64,    65,  1418,   843,   709,   439,   111,  2616,
    1896,  2724,  1069,  1230,  1231,  1232,  1070,  1677,  1104,   111,
     390,   416,    64,    65,  1105,    64,    65,   487,   215,  1054,
     106,   255,    76,  1897,  2690,   488,  1324,    64,    65,   848,
     594,   111,   448,   305,   216,  1421,  1458,   417,   535,  1687,
    1898,    54,  1682,  1459,   561,  2741,  1538,   391,  1454,   621,
    2747,  2744,   844,  1325,  1310,   480,   851,   106,  1539,   883,
     501,   106,   292,   298,  1314,    64,    65,   565,   106,    64,
      65,   595,   438,    64,    65,   157,  1692,  1071,    64,    65,
    1862,   114,   256,  1329,   173,   473,  1397,   245,   675,   115,
     116,   474,   114,   852,   310,   676,   677,   263,  1479,  1072,
     115,   116,  1055,  1864,   257,   710,  1189,   849,  2781,   596,
    2782,   581,  1419,   380,   114,    99,   760,   383,   358,   756,
     613,   302,   115,   116,   622,   699,   977,  1867,  1302,   536,
     475,   678,   372,  1060,   100,   111,   639,   640,  1625,   299,
    1726,  1097,   502,   307,   510,  1455,   515,   519,   300,  1452,
     117,   681,   616,   683,   546,   476,   258,  1296,  1472,  1473,
    1073,   685,   688,   607,   691,   695,   308,   697,  2683,   578,
     381,  1304,   111,   978,   119,  1422,   111,   707,   623,   408,
   -1079,   566,  1683,   111,   159,   119,   101,   717,   719,   775,
     778,   236,   311,   549,  1042,  1480,   261,   403,  1100,  1942,
     477,  1095,   624,   295,   884,  1490,   633,   119,  1119,   764,
    1106,   762,   763,   765,  1061,   767,    66,   338,   114,   770,
     771,   393,  1098,   149,   370,  1678,   115,   116,   150,   151,
     783,   785,   384,  1463,   149,  1043,   679,   786,   253,   150,
     151,   389,   789,   791,   478,   479,   693,  1423,  2617,   342,
     792,  1483,  1042,   793,  1684,   114,   149,  1688,  1074,   114,
     353,   150,   151,   115,   116,   562,   114,   115,   116,   102,
    1180,   803,   804,  2691,   115,   116,   385,   386,   808,   809,
     810,   365,   811,  2684,   888,   567,   279,   794,   563,  1899,
    1424,  1920,  1521,  1043,  1693,  1925,   818,  1685,  1863,  1843,
     819,   878,   979,  1651,  1456,   824,   825,   826,   827,   828,
     829,   119,   830,   568,   423,   834,   835,   259,  1035,  1820,
    1975,  1865,  1823,  1533,   423,   837,  1859,   478,  2685,    55,
     450,   451,   452,   453,   454,   455,  2577,   339,   456,   457,
     458,   459,  1446,  1218,  1036,  1868,  1694,  1453,   119,  1888,
    1341,   795,   119,   109,  1481,   109,   589,  1474,   293,   119,
     149,  1643,  2601,   103,   260,   150,   151,  1044,   294,  1647,
      56,  1844,   304,   265,   611,   980,    64,    65,   866,   867,
     320,   954,  1045,  1046,   278,   981,  1234,  1285,    57,   327,
     955,   956,   746,  1124,  1460,   832,   875,   149,   740,   590,
    1674,   149,   150,   151,  1698,   351,   150,   151,   149,   840,
     728,  1699,   930,   150,   151,  1711,   982,    58,   859,   340,
     796,  1363,    77,   895,   356,  1044,   280,   637,   638,   321,
    1364,  1365,   281,   362,   282,    59,  1238,   957,   322,    60,
    1045,  1046,  1042,  1150,   889,    64,    65,   266,  1063,   363,
    1286,   395,    61,   968,  1129,   926,   690,   741,    78,   364,
    1447,  1845,  2649,  2650,  1125,   747,  2653,   323,  2655,   730,
     368,  1156,   987,  1047,  1048,  1037,  1287,  1366,    64,    65,
    2660,  2661,   860,  1043,   879,  2665,  2666,  1695,   612,  2669,
     942,   400,  1342,   841,  2670,  2671,  1772,  1704,   109,   751,
     754,   757,  1151,  1066,   591,  1773,  1774,   797,  1714,    64,
      65,   410,   798,   117,  1846,   117,   986,  1461,  1675,   915,
     271,   412,   272,   237,   550,  1130,   414,  1038,   436,    79,
    1157,  1047,  1048,  1062,  1680,   449,  1075,    64,    65,   551,
    2710,  2489,   267,  2711,  1696,   396, -1228,  1126,  2714,  1239,
    1602,   238,  1775,  1039,  2717,  1288,  1712,   268,  1110,  2720,
     461,   748,  1111,  1112,  1113,  1114,   958,   959,  1115,   460,
    1117,   471,  1118,   423,  1120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,  1181,  1091,  1289,  1367,  1368,  1131,    62,
     742,  1701,    80,  1713,   851,  1044,  1783,  1127,   269,   483,
     239,   512,   736,   397,   324,  1784,  1785,  1847,  1544,   375,
    1045,  1046,   721,  2762,  1465,   240,  2765,   485,   273,   960,
     552,  1172,  1173,  1161,  1174,  1176,  1178,  1179,   700,   961,
     962,   852,  1681,  1562,   963,  1152,  2776,   782,   117,  1191,
    1192,  1199,    64,    65,    81,  1568,  1196,  1197,  1702,  1200,
    2783,    83,  1786,  2784,  2785,  1092,  1299,   558,  1132,  1369,
     964,  1776,  1777,  1158,   701,   538,  1203,  1204,  1205,  1370,
    1371,   722,   971,  2078,  1372,   241,   274,  1689,   553,   896,
     897,   539,  1162,  1213,  1214,  1215,   548,  1217,   423,  1219,
     557,  1220,  1563,  2091,  1555,  1556,   560,  1848,   540,   579,
    1373,  1047,  1048,  1574,  1569,  2270,  2271,  2272,  2128,  1466,
     585,  2131,  1223,  1703,  1225,   702,   242,  1582,   275,  2139,
     554,   587,  2142,  2179,  1227,  1644,   243,   276,  1154,   555,
    2150,   423,  1235,  2153,  1778,   898,  1237,  1794,  1093,  2187,
    2160,   899,   972,  1400,  1779,  1780,  1795,  1796,   328,  1781,
    1849,  1252,  1254,   609,  2021,    64,    65,   938,   329,  1295,
    1297,  1300,  1575,   943,   944,   610,  1467,  1305,  2206,  1401,
    1586,    83,  1311,   626,    84,  1782,  1583,  1354,  1654,  1655,
     541,  1787,  1788,  1312,   614,   330,    64,    65,  1427,   900,
    1145,   627,   430,  1797,  1224,  1690,    85,   723,  1155,  1320,
      86,   618,  1402,   521,   901,    64,    65,   635,  1403,   630,
     945,  1078,   542,  1435,  1404,  1428,  1101,   522,  1429,   902,
     703,   636,  1557,  1558,   724,   903,   641,    64,    65,  1587,
     904,   673,  1405,   813,   814,  1163,   790,  1738,  1739,   523,
    1436,   684,   686,  1437,   698,  1564,  1438,  1705,  1430,  1146,
    1559,  1656,    87,  1406,  1789,    64,    65,  1570,   524,    64,
    1175,   331,   705,   431,  1790,  1791,  1457,   628,  1407,  1792,
     706,  2273,  2579,  1439,   708,   525,  1431,   712,   526,  1432,
      64,    65,   714,   905,  1740,  1706,  1147,  1482,  1758,  1759,
    1290,    88,    64,    65,    84,  1793,  1488,   332,  1408,    89,
      90,  1440,   906,   720,  1441,   527,   528,   907,   107,   908,
    1516,   359,  1517,   687,   726,  1576,    85,  1518,  1519,  1520,
    2017,   570,  1798,  1799,   744,   544,   745,  1526,   284,  1584,
    1527,   571,  1529,   909,   910,  1760,  1618,  1409,   768,   946,
     947,   911,  1707,   333,   769,   109,   432,   314,  1531,   772,
    1532,  1410,    64,    65,  1535,  1536,   780,   529,   572,   912,
    1182,  1183,  1411,  1207,   787,   334,   788,   530,   801,  1542,
    1543,   802,    87,   423,  1545,  1546,   109,  1185,  1186,  1805,
    1806,  1548,  1588,  1549,   805,   545,  1551,   815,  1552,  1412,
     110,  1605,   806,  1433,   807,  1800,   812,  2095,  2096,  1708,
     335,  1413,  1148,  1414,  1415,  1801,  1802,   817,  2483,   420,
    1803,    88,   948,  1741,  1742,   913,   336,   422,  1442,    89,
      90,  1291,   949,   950,  1434,  1599,  1807,   531,   532,  1600,
    2345,  1601,   838,   315,   573,  1604,  1804,  1524,  1525,  2354,
     839,    64,    65,  1416,  2097,   316,   112,   855,  2363,  1443,
    1610,   846,  1613,   951,  1615,  1616,  1617,  1619,    64,    65,
     857,  1622,  1623,   862,  1761,  1762,  2260,  1195,   864,  1631,
     574,    64,  1251,  1292,   891,  1444,  1637,   881,   715,   886,
    1638,  1639,  1640,   285,  1880,  1881,  1743,  2104,  2105,   892,
     423,  1645,   821,   822,  1648,    93,  1744,  1745,   533,  1293,
    1024,   893,  1384,  2442,  1660,   117,  1661,   894,   918,  1663,
     118,    94,    64,    65,  1025,   916,  1391,  1392,  1665,  2455,
     917,   286,   924,  1026,  2460,   920,  2571,  1746,   317,  2574,
     922,  2576,  1612,  1027,  2106,  2293,   117,  1763,   575,   927,
     928,   318,   932,   937,  2588,  2589,   939,  1764,  1765,   716,
     940,   941,  1716,   952,  1717,  1808,  1809,  1718,  1719,  2312,
    1720,  2603,  1721,  1028,    64,    65,  1836,   953,  1723,   965,
    1724,   973,  1385,  2098,  2099,   975,   976,  1730,  1766,  1652,
     983,   287,   984,   985,  1029,  1041,  1485,    95,  1666,   576,
    1050,  1052,    69,  1057,  1109,  1672,  1058,  1121,    70,  1107,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,  1810,  1030,
      96,    64,    65,  1840,  1108,  2113,  2114,    71,  1811,  1812,
    1530,    64,    65,  1386,  1387,  1123,  2100,   420,   421,   422,
    1537,  1134,  1837,  1135,  1839,  1841,  2101,  2102,  1388,  1667,
    1668,  1136,    72,  2107,  2108,    97,  1137,  1139,  1031,  1813,
      64,    65,  1885,  1138,  1669,  1140,  1852,  1141,  1143,  1142,
    1855,  1160,  2115,  1165,    64,    65,  1842,  2103,  1391,  1392,
      64,    65,  1858,  1032,  1391,  1392,    64,    65,  1887,  1389,
    1391,  1392,  1166,  1167,  1884,  1886,  1168,    73,  1169,   246,
    1170,  1171,  1184,  1187,  1892,  1670,  1193,  1194,  1903,  1198,
    1201,  1202,  2575,  1206,  1208,  1909,  1209,  1246,  1221,    64,
      65,   440,  1033,  1835,  1034,  2587,  2109,  1222,  1243,  1914,
    2592,  1244,  1242,  1248,  1916,   107,  2110,  2111,  1918,  1249,
    1921,  1922,    74,  1924,  1926,  1927,  1247,  1930,  1628,  1629,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1943,  1945,
    1946,   345,  2474,  1948,  1949,  1950,  1951,  2112,   346,  1250,
    1301,  2478,   109,  1957,  1958,  1303,  1307,  1960,  1961,  1962,
    1313,  1317,  1964,  1965,  1318,   247,  2211,  1321,  1322,   462,
    1323,  1331,   441,   728,  1332,  1968,  1969,   248,  1970,  1971,
    1333,  2116,  2117,  1334,  1336,  1337,  1338,   463,  1339,  1340,
    1346,  1347,  1374,   442,   443,  1349,  1350,   110,  1356,  1358,
    1359,  1361,   444,  1375,   464,  2498,  1376,  1377,  2500,  1380,
    1395,  2501,   249,  2502,  1381,  1382,   465,  1398,  1399,  1420,
     445,  2265,  1425,  1426,  1448,  1445,  1991,  1992,  1993,   729,
     446,  1995,   730,  1449,   466,  1450,  1997,  2000,   467,  2002,
    2003,  2004,  1451,  2005,  2006,  1468,  2008,  1464,  1469,  2011,
    2012,   468,  1470,   112,  2118,  1475,  1478,  1476,  2015,  1477,
     250,  1484,  1486,  2279,  2119,  2120,  2019,  1487,  1547,   731,
    1523,  2024,  2025,   251,  1534,  1540,  1541,  1550,  1554,  2027,
    1553,    64,    65,  1620,  1567,  1572,  1573,  1578,  2031,  1579,
     469,  1580,  1581,  1649,  1590,  2121,  1591,   107,  1592,  1609,
    1593,  1594,  1595,  1621,   732,  1607,  1608,  1627,  1632,  1614,
    1833,  1633,   117,  1634,  1646,  1662,  1838,   118,  1999,  1653,
    1650,  -439,  1664,  1673,  2059,  1700,  1697,  1676,  1686,  1709,
    1691,  1715,  1722,  1344,  1728,  1729,  1734,  1753,  1851,  1756,
    1821,  1853,  1710,  1767,  1769,  1857,  2067,  2068,  1771,  1815,
    1816,  2070,  1814,  1817,  1822,   733,  1824,  2073,   734,  2740,
    1825,  1826,  1829,  1860,  1832,  1850,  1883,   347,  1854,   348,
    1861,  1866,  1889,  1869,  1871,  1872,  1870,  1873,  1875,   110,
    1902,  1876,   735,  1905,  1877,   736,  2044,  1882,  1878,  1901,
    2010,  1906,  1910,  1911,  1917,   737,  2050,  1919,  1923,  1931,
    1954,  2055,  1932,  1915,  1947,  1879,  1966,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   112,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  2174,  1967,  2175,  1972,  2177,  1973,
    2427,  2428,  1974,  2430,  2431,  1976,  1978,  2434,  2435,  1977,
    1979,  1980,  2122,  1981,  1982,  1983,  1984,  2188,  2189,  2190,
    2191,  2192,  2193,  2194,  2195,  2196,  1985,  1986,  1987,   118,
    1988,  1989,  1990,   289,  2007,  2009,  2013,  2026,  2032,  2133,
    2033,  2202,  2034,  2204,  2035,  2036,  2037,  2069,  2282,  2071,
    2072,  2144,  2075,  2076,  2077,  2079,  2080,  2469,  2081,  2084,
    2210,   423,  2086,  2087,  2088,  2092,  2214,  2093,  2129,  2481,
    2094,  2123,  2124,  2125,  2130,  2217,  2218,  2219,  2220,  2221,
    2222,  2223,  2224,  2225,  2226,  2132,  2134,  2239,  2240,  2241,
    2242,  2243,  2244,  2245,  2246,  2247,  2248,  2249,  2250,  2135,
    2253,  2136,  2254,  2255,  2256,  2140,  2675,  2141,  2446,  2143,
    2145,  2146,  2147,  2151,   437,  2152,   423,  2266,  2154,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  2155,  2156,  2274,
    2157,  2161,  2275,  2162,  2276,  2163,  2278,  2165,   423,  2280,
    2166,  2281,  2168,  2169,  2755,  2171,  2178,  2180,  2286,  2287,
    2183,  2186,  2197,  2198,  2200,  2291,  2675,  2292,  2199,  2201,
    2257,  2295,  2205,   499,  2297,   506,   509,  2252,   514,   518,
    2258,  2261,  2267,   218,  2269,  2447,  2283,  2284,  2285,  2288,
    2448,  2296,  2301,  2302,  2303,  2304,  2305,  2331,  2449,  2333,
    2335,  2338, -1092,  2340,  2341,  2342,   583,  2346,   219,  2561,
    2347,  2231,  2348,  2564,  2349,  2350,  2351,  2355,  2356,  2364,
    2334,  2357,  2358,  2359,   598,   604,  2360,  1491,  2365,  2614,
    2366,  1747,  1492,  2373,  2376,  2384,  2387,  2390,  2391,  2393,
    2396,   220,  2397,  1757,  2398,  2401,  2406,  2410,   221,  2598,
    2426,   696,  2476,  1493,  1494,  2477,  1495,  1496,   222,   223,
    2300,  1818,  1819,  2450,  2451,   224,   682,  1497,  2452,  2454,
    2479,  2488,  2399,  2485,  2486,  2491,  2492,  2494,   692,  1498,
    1499,  2493,  2495,  2497,  2503,  2504,  2513,  1500,   225,  2522,
    1501,  2531,  2537,  2182,  2541,  2544,  2550,  2558,   713,  2332,
    2569,  2681,  2580,  2581,  2725,  2582,   226,  1502,  2583,  2584,
    2585,   781,  2600,  2607,  1503,  1504,  2609,  2613,  1505,  2610,
     227,   228,  2612,  2620,  2404,  2648,  2654,   229,  2657,  2207,
    2658,  2659,  2664,  2678,  2682,  2411,  2412,  2413,  2414,  2415,
    2416,  2417,  2418,  2419,  2420,  2421,  2679,   230,  2680,  2688,
    2693,  2424,  2715,  2704,  2712,   423,   423,  2718,   423,   423,
    2731,  2733,   423,   423,  2436,  2437,  2438,  2439,  2440,  2441,
    2727,  2443,  2444,  2445,  2728,  2729,  2736,  1506,  2739,   820,
    2749,  2750,  2756,  2764,  2775,   231,  2768,  2456,  2457,  2458,
    2459,  2769,  2461,  2462,  2463,  2464,  2465,  2466,  2771,  2468,
    2777,  2687,  2472,  2473,  2778,  2779,  2780,   816,   800,  2623,
    2672,  2453,  2726,  2722,     0,  1144,     0,     0,   823,     0,
       0,  2480,     0,     0,   423,  2482,     0,   831,     0,  2484,
       0,     0,  1507,  2487,     0,     0,   232,     0,  1508,  1079,
       0,     0,     0,     0,     0,     0,   233,  1080,     0,     0,
       0,     0,     0,  1081,  1509,     0,     0,     0,     0,     0,
       0,   865,     0,  1510,     0,     0,     0,     0,   870,     0,
       0,   871,     0,     0,  1082,   234,   872,     0,     0,     0,
     874,  2505,     0,     0,     0,     0,     0,     0,     0,     0,
    1511,  1512,     0,     0,     0,   868,   869,     0,  1083,     0,
       0,     0,     0,     0,     0,     0,  1084,  2294,   873,     0,
       0,  1513,     0,   876,     0,     0,     0,     0,     0,     0,
       0,     0,   887,     0,  2307,  2308,  2309,     0,     0,  2311,
       0,  2313,  2314,     0,     0,  2316,  2317,  2318,     0,     0,
    2320,  2321,     0,  1085,  2324,   931,  2326,  2327,     0,  2329,
       0,  1086,     0,  2552,     0,     0,  1514,  2554,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2555,  2556,     0,
       0,     0,     0,  2560,   423,     0,     0,  2563,   423,     0,
       0,     0,     0,  2568,     0,     0,  2572,  2573,     0,     0,
       0,   933,   934,   935,   936,     0,  1087,   160,     0,   161,
       0,     0,     0,     0,     0,  2590,  2591,  1088,  2593,  2594,
    2595,  2596,  2597,     0,   423,  2599,     0,     0,     0,  2602,
       0,     0,     0,  1089,     0,     0,     0,     0,     0,   162,
       0,  2611,     0,     0,     0,     0,  2615,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2083,     0,     0,
       0,  1077,  2624,     0,  1116,  2089,  2090,  2400,     0,     0,
    2403,  1122,     0,     0,     0,  2407,     0,     0,  2408,     0,
    2126,  2127,     0,     0,     0,     0,     0,     0,  2227,     0,
       0,  2137,  2138,     0,     0,     0,     0,  2423,     0,  2228,
       0,     0,  2148,  2149,  2636,     0,   164,     0,     0,  2640,
    2475,  2642,  2158,  2159,  1327,     0,     0,  2645,  2164,     0,
       0,     0,     0,     0,  1079,  2229,     0,     0,  2167,     0,
    2652,     0,  1080,     0,     0,     0,     0,     0,  1081,     0,
       0,     0,     0,     0,     0,     0,  1378,  2699,  2663,     0,
       0,     0,  2667,     0,     0,   165,     0,     0,     0,  1082,
       0,     0,  2230,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2686,   166,   167,     0,     0,     0,     0,     0,
     168,     0,   169,  1083,  2490,     0,     0,     0,  1210,     0,
       0,  1084,     0,     0,     0,  1212,     0,  2702,     0,     0,
       0,     0,  2707,     0,  2709,     0,     0,     0,     0,   170,
       0,  2713,     0,     0,     0,     0,  2716,  2499,  1211,     0,
       0,  2719,     0,     0,     0,     0,     0,     0,  1085,     0,
    1216,     0,     0,     0,     0,     0,  1086,     0,     0,     0,
    1228,  1229,     0,  2730,  2732,  1233,     0,     0,  1236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1245,
       0,     0,     0,     0,     0,     0,     0,  1226,     0,     0,
    2742,     0,     0,  2743,   171,     0,  2745,     0,     0,     0,
       0,  1087,     0,     0,     0,     0,     0,  2751,  2752,  2753,
    2754,     0,  1088,     0,     0,     0,  2549,     0,     0,  2763,
       0,     0,  2766,     0,  2586,     0,     0,     0,  1089,  2770,
       0,  2772,     0,     0,     0,     0,  2557,  2231,     0,  2232,
       0,     0,     0,  2562,  2604,     0,  2565,  2566,  2608,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1316,     0,
       0,     0,     0,  2738,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1383,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2233,     0,  2758,     0,     0,  2761,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2337,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2339,     0,
       0,     0,  2343,  2344,     0,     0,     0,   106,     0,     0,
       0,  2352,  2353,  1462,     0,     0,     0,     0,     0,     0,
    2361,  2362,   107,     0,     0,     0,  2367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2377,  2378,     0,     0,
       0,     0,  2637,   108,     0,     0,     0,  2388,  2389,     0,
       0,     0,     0,     0,     0,     0,     0,   517,  2392,   109,
       0,  2647,     0,     0,     0,  1522,     0,  2394,     0,  2395,
       0,     0,   107,     0,     0,  1528,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1731,  1732,
    1733,     0,     0,     0,     0,     0,     0,     0,  1735,  1736,
    1737,     0,     0,     0,   110,  1748,  1749,  1750,     0,   109,
    1751,  1752,     0,  1754,  1755,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2700,  2701,     0,  2703,     0,  2705,  2706,     0,
    2708,     0,     0,  1827,  1828,     0,     0,  1830,  1831,     0,
       0,     0,     0,  1606,   110,     0,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2748,     0,  1603,     0,     0,
       0,     0,     0,  1630,     0,     0,     0,     0,  1635,     0,
       0,     0,     0,  2735,  1611,     0,     0,   113,  1641,     0,
       0,     0,     0,     0,     0,   114,     0,     0,     0,     0,
     112,     0,     0,   115,   116,     0,     0,     0,  1636,   117,
       0,     0,     0,     0,   118,     0,     0,     0,  1642,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2767,     0,  2507,     0,     0,     0,     0,  1659,     0,     0,
       0,     0,  2516,     0,     0,     0,     0,  1671,     0,     0,
       0,  2525,  1679,     0,     0,     0,     0,     0,     0,   117,
    2534,     0,     0,     0,   118,     0,     0,  2536,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2540,     0,
       0,     0,     0,     0,  2543,     0,     0,  2545,   119,     0,
    2546,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,   149,     0,     0,
       0,     0,   150,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,  1834,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1658,     0,
       0,     0,     0,     0,     0,     0,     0,  2625,     0,     0,
       0,     0,     0,   107,     0,  1856,  2627,     0,     0,     0,
       0,     0,     0,     0,  1904,  2629,     0,     0,     0,     0,
       0,  2632,     0,     0,     0,  2634,     0,     0,  2635,     0,
       0,     0,     0,     0,  1890,     0,   107,  1891,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1907,  1908,     0,
       0,     0,     0,     0,     0,  1912,     0,     0,     0,     0,
       0,     0,  1913,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1953,     0,     0,     0,     0,     0,
    1959,  2074,   490,   491,     0,   110,   492,     0,     0,     0,
       0,     0,     0,     0,  2082,     0,     0,     0,     0,     0,
       0,     0,  1952,     0,  2085,  1955,  1956,     0,   493,     0,
       0,     0,     0,     0,  1963,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1994,     0,  1996,     0,     0,
       0,     0,     0,  2001,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,  2170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   494,     0,  2016,     0,
    1998,     0,     0,     0,  2022,     0,     0,     0,     0,     0,
       0,     0,     0,   495,     0,   118,     0,     0,  2014,     0,
       0,  2029,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2039,  2023,   496,     0,     0,     0,     0,
       0,  2046,     0,     0,     0,     0,     0,     0,   118,  2028,
       0,  2030,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2038,     0,     0,  2040,     0,  2041,  2042,  2043,  2045,
       0,     0,  2047,     0,     0,  2048,     0,     0,  2049,  2051,
       0,  2052,  2053,  2054,  2056,     0,  2057,  2058,     0,     0,
       0,     0,  2060,  2061,  2062,     0,     0,  2063,  2064,   497,
       0,     0,     0,  2065,  2066,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,   498,     0,     0,
    1255,  1256,  1257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2172,     0,  1258,  1259,
       0,     0,  1260,     0,     0,     0,     0,     0,     0,  1261,
       0,     0,  1262,     0,     0,     0,  1263,     0,  2185,     0,
       0,     0,     0,     0,  1264,  1265,     0,  2173,     0,     0,
       0,  2176,  1266,     0,     0,     0,     0,     0,     0,     0,
    2336,     0,     0,  2181,     0,     0,  2184,     0,     0,     0,
       0,     0,  2208,  2209,     0,     0,     0,     0,     0,  1267,
    1268,     0,     0,  1269,     0,     0,     0,     0,     0,  2212,
    2213,     0,     0,     0,  2215,  2216,  2203,     0,     0,  1270,
    2368,  2369,  2370,  2371,  2372,     0,  2374,  2375,     0,     0,
       0,  2379,  2380,  2381,  2382,  2383,     0,  2385,  2386,     0,
    1271,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2259,     0,     0,  2263,  2264,     0,
       0,     0,  1272,     0,     0,  2268,     0,     0,     0,     0,
       0,  1273,  2251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1274,  2289,  1275,     0,     0,
       0,     0,     0,  1276,  1277,     0,     0,     0,     0,     0,
    2298,     0,  2299,     0,     0,     0,     0,     0,     0,  1278,
    2306,     0,     0,     0,     0,  2310,  2290,     0,     0,  1279,
       0,  2315,     0,     0,     0,     0,  2319,     0,     0,     0,
    2322,     0,     0,  2325,     0,     0,  2328,     0,  2330,     0,
       0,     0,     0,     0,  1280,     0,  1281,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1282,     0,     0,     0,
    2323,     0,     0,     0,     0,     0,  1283,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     642,   643,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1284,     0,     0,     0,  2506,     0,     0,  2508,  2509,  2510,
    2511,  2512,     0,  2514,  2515,     0,  2517,  2518,  2519,  2520,
    2521,     0,  2523,  2524,     0,  2526,  2527,  2528,  2529,  2530,
       0,  2532,  2533,     0,  2535,     0,   644,     0,     0,     0,
       0,     0,   645,     0,  2538,  2539,     0,     0,     0,   646,
       0,   647,     0,     0,     0,  2542,   648,     0,     0,   649,
       0,     0,     0,     0,     0,   650,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   651,  2402,     0,     0,  2405,
       0,   652,     0,     0,     0,     0,     0,  2409,     0,     0,
     653,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2422,     0,   654,  2425,   599,   107,     0,
       0,  2429,     0,     0,  2432,  2433,     0,     0,     0,     0,
       0,     0,     0,  2467,     0,     0,   655,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   656,     0,     0,     0,     0,     0,   600,     0,     0,
     657,   658,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   659,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2626,     0,     0,     0,     0,     0,     0,
     110,     0,  2628,     0,   660,     0,     0,     0,     0,     0,
       0,  2630,     0,  2631,   601,  2496,     0,  2633,   661,     0,
     662,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   663,     0,     0,     0,     0,   664,
       0,     0,     0,     0,     0,   665,     0,     0,     0,     0,
       0,     0,   666,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     667,     0,   602,     0,     0,     0,     0,     0,     0,     0,
       0,  2547,     0,   668,   669,     0,   670,  2551,     0,     0,
       0,  2553,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2694,     0,  2695,     0,  2696,  2559,     0,  2697,
       0,  2698,  2548,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,   671,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2567,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2578,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2621,     0,
       0,     0,     0,     0,     0,     0,     0,   603,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2619,     0,     0,     0,  2622,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,   107,     0,     0,     0,   988,   989,   990,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2656,  2638,  2639,     0,  2641,     0,     0,     0,     0,  2643,
    2644,     0,     0,     0,  2646,   991,   992,     0,     0,   993,
     109,     0,   994,     0,     0,   107,     0,     0,     0,   995,
       0,     0,     0,   996,     0,     0,     0,     0,     0,     0,
       0,   997,   998,     0,     0,     0,     0,  2668,     0,   999,
    1000,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,     0,   110,  1001,     0,     0,     0,
       0,  2689,  1002,     0,     0,     0,  1003,  1004,     0,     0,
    1005,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2721,     0,     0,     0,     0,     0,  1006,     0,     0,     0,
       0,   107,     0,     0,     0,     0,     0,   110,     0,     0,
       0,  2734,     0,     0,     0,     0,     0,  1007,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1008,
       0,   504,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2737,     0,     0,     0,  2759,
       0,     0,  1009,   112,     0,     0,   107,     0,     0,     0,
       0,     0,  2746,     0,     0,     0,     0,     0,     0,  2773,
     117,     0,  2774,   110,     0,   118,     0,  2757,     0,     0,
    2760,     0,  1010,     0,  1011,     0,     0,     0,     0,     0,
    1012,  1013,     0,  1315,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1014,  1015,     0,     0,     0,
       0,     0,   117,   107,     0,  1016,  1017,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,   508,     0,     0,     0,   110,     0,
       0,  1018,     0,  1019,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1020,     0,  1021,     0,     0,
       0,     0,     0,  1022,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   118,   112,   110,     0,  1023,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,   118,     0,
     505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   966,     0,     0,     0,     0,
     967,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     1,     0,     0,     2,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     5,     6,     0,     7,
       8,     9,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,    11,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,    14,    15,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,    18,     0,     0,    19,     0,     0,
       0,    20,    21,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
      25,    26,    27,     0,     0,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,   175,     0,     0,   176,    30,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,   178,
       0,   179,   180,   181,     0,     0,     0,     0,     0,     0,
      34,   182,    35,   183,     0,     0,     0,     0,   184,    36,
     185,   186,   187,    37,     0,     0,    38,   188,    39,   189,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,    43,     0,     0,     0,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,     0,     0,     0,     0,     0,   191,     0,     0,     0,
       0,    46,     0,    47,     0,     0,   192,   193,     0,    48,
     194,     0,    49,    50,   195,     0,   196,  1352,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   198,     0,
       0,   199,     0,    51,     0,     0,     0,     0,     0,     0,
      52,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   202,
       0,     0,     0,     0,     0,     0,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     204,     0,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,     0,     0,     0,     0,   210,     0,     0,
       0,     0,     0,   211,     0,   212,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1353,     0,     0,     0,     0,     0,
       0,     0,   213
};

static const yytype_int16 yycheck[] =
{
       3,    50,   662,     4,  1438,   481,   657,   658,    11,   989,
    1137,  1638,  1139,  1640,     4,     4,     0,     4,     3,     4,
       5,     3,     4,     3,     4,  2572,     5,     4,     4,    32,
     960,     5,    46,   963,     5,     5,     4,    40,  1165,  1166,
    1167,     5,    61,  2590,     4,    20,    49,     3,     4,    52,
     980,    16,    55,     3,     4,    78,    59,     5,    17,    62,
      13,     5,    97,    66,    67,    66,    17,    70,    40,   437,
      73,    74,     3,     4,    77,     4,    66,     5,    81,   447,
       3,     4,   150,    86,    70,    27,     3,     4,   121,     3,
       4,     3,     4,    17,     4,    32,    99,   100,   101,   102,
     103,   104,     5,   165,     3,     4,    48,     3,     4,    51,
      56,    32,     3,     4,   121,   193,   150,   120,   119,    32,
      62,  2674,    36,   870,   871,   872,    40,    21,    99,   119,
     139,     5,     3,     4,   105,     3,     4,   169,    83,   111,
       4,     5,   284,    85,    32,   177,   157,     3,     4,   172,
     218,   119,   155,    37,    99,    27,   262,    31,   213,    21,
     102,    66,    27,   269,    61,  2712,     5,   176,    36,   117,
    2723,  2718,   250,   184,    98,   178,   139,     4,    17,   166,
     183,     4,     5,   169,   931,     3,     4,    21,     4,     3,
       4,   259,   113,     3,     4,    33,    21,   111,     3,     4,
      21,   202,    66,   265,   145,   187,   239,    16,   197,   210,
     211,   193,   202,   176,   194,   204,   205,     5,    36,   133,
     210,   211,   194,    21,    88,   259,   261,   250,  2775,   297,
    2777,   196,   239,   193,   202,    40,   189,   187,   141,    66,
     243,     4,   210,   211,   192,   294,    14,    21,   908,   304,
     232,   240,   123,   212,    59,   119,   259,   260,   272,   245,
     235,   212,   183,   282,   185,   133,   187,   188,   254,    27,
     216,   274,   246,   276,   195,   257,   140,   208,   248,    27,
     194,   284,   285,   193,   287,   288,   305,   290,   187,   210,
     250,   208,   119,    61,   295,   167,   119,   300,   246,   227,
     284,   135,   167,   119,    14,   295,   111,   310,   311,   286,
     286,    21,   292,   197,    63,   133,    26,   246,   286,   304,
     302,   285,   270,    33,   311,   304,   270,   295,   696,   225,
     301,   334,   335,   336,   293,   338,   292,     4,   202,   342,
     343,   197,   293,   344,   281,   239,   210,   211,   349,   350,
     353,   354,   302,  1013,   344,   104,   345,   360,   231,   349,
     350,    71,   365,   366,   346,   347,   287,   239,   281,   292,
     373,  1031,    63,   376,   239,   202,   344,   239,   292,   202,
     292,   349,   350,   210,   211,   282,   202,   210,   211,   194,
       6,   394,   395,   281,   210,   211,   346,   347,   401,   402,
     403,   292,   405,   302,   132,   239,   203,    30,   305,   351,
     282,   225,  1063,   104,   239,   225,   419,   282,   239,  1399,
     423,     4,   190,     4,   292,   428,   429,   430,   431,   432,
     433,   295,   435,   267,   437,   438,   439,   301,     4,  1369,
    1567,   239,  1372,  1094,   447,   448,  1426,   346,   347,    12,
     160,   161,   162,   163,   164,   165,  2444,   124,   168,   169,
     170,   171,   121,   831,    30,   239,    27,   225,   295,  1449,
      17,    94,   295,    56,   292,    56,    44,   225,   301,   295,
     344,  1228,  2470,   288,   348,   349,   350,   236,   311,  1236,
      53,   105,    88,    57,     6,   263,     3,     4,   501,   502,
      50,     5,   251,   252,    66,   273,   874,    66,    71,     4,
      14,    15,    34,    40,   121,   436,   519,   344,    61,    87,
     121,   344,   349,   350,   262,   231,   349,   350,   344,   103,
      61,   269,   581,   349,   350,    27,   304,   100,   193,   206,
     163,     5,     4,   546,     0,   236,   343,   257,   258,    99,
      14,    15,   349,   269,   351,   118,   134,    61,   108,   122,
     251,   252,    63,    61,   292,     3,     4,   131,   259,     5,
     129,    78,   135,   622,    40,   578,   286,   120,    40,     4,
     239,   195,  2570,  2571,   111,   107,  2574,   137,  2576,   120,
       5,    61,   641,   342,   343,   161,   155,    61,     3,     4,
    2588,  2589,   257,   104,   525,  2593,  2594,   168,   120,  2597,
     613,     5,   159,   187,  2602,  2603,     5,  1277,    56,   329,
     330,   331,   120,   124,   192,    14,    15,   250,  1288,     3,
       4,    31,   255,   216,   248,   216,   639,   244,   239,   560,
      64,     5,    66,    88,    66,   111,     5,   213,   194,   111,
     120,   342,   343,   656,   121,     4,   659,     3,     4,    81,
    2648,  2288,   226,  2651,   225,   172,     0,   194,  2656,   247,
       4,   116,    61,   239,  2662,   234,   168,   241,   681,  2667,
      66,   203,   685,   686,   687,   688,   190,   191,   691,   117,
     693,   118,   695,   696,   697,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   772,    40,   284,   190,   191,   194,   292,
     273,   168,   194,   225,   139,   236,     5,   264,   302,   284,
     185,    33,   273,   250,   294,    14,    15,   105,  1116,   123,
     251,   252,    61,  2741,   130,   200,  2744,   169,   182,   263,
     182,   764,   765,    61,   767,   768,   769,   770,    54,   273,
     274,   176,   239,    61,   278,   273,  2764,   123,   216,   782,
     783,     4,     3,     4,   246,    61,   789,   790,   225,    12,
    2778,    28,    61,  2781,  2782,   111,    17,   232,   264,   263,
     304,   190,   191,   273,    90,     5,   809,   810,   811,   273,
     274,   120,    87,  1743,   278,   260,   240,   121,   240,     4,
       5,    89,   120,   826,   827,   828,    16,   830,   831,   832,
      66,   834,   120,  1763,    42,    43,   283,   195,     6,    89,
     304,   342,   343,    61,   120,  1972,  1973,  1974,  1778,   225,
      72,  1781,   855,   290,   857,   141,   301,    61,   282,  1789,
     282,    31,  1792,  1843,   867,  1233,   311,   291,    87,   291,
    1800,   874,   875,  1803,   263,    60,   879,     5,   194,  1859,
    1810,    66,   157,    40,   273,   274,    14,    15,    37,   278,
     248,   894,   895,     5,  1641,     3,     4,   607,    47,   902,
     903,   904,   120,    14,    15,     4,   282,   910,  1888,    66,
      61,    28,   915,    93,   151,   304,   120,   966,    24,    25,
      88,   190,   191,   926,     4,    74,     3,     4,    22,   114,
      61,   111,    40,    61,   855,   239,   173,   246,   157,   942,
     177,     5,    99,    45,   129,     3,     4,     4,   105,     5,
      61,   661,   120,    22,   111,    49,   666,    59,    52,   144,
     246,     5,   170,   171,   273,   150,     5,     3,     4,   120,
     155,     5,   129,     4,     5,   273,    12,    14,    15,    81,
      49,     5,    40,    52,     4,   273,    55,   130,    82,   120,
     198,    97,   229,   150,   263,     3,     4,   273,   100,     3,
       4,   150,     4,   111,   273,   274,  1009,   187,   165,   278,
       4,  1991,  2446,    82,     4,   117,   110,     5,   120,   113,
       3,     4,     4,   208,    61,   168,   157,  1030,    14,    15,
      30,   268,     3,     4,   151,   304,  1039,   186,   195,   276,
     277,   110,   227,    97,   113,   147,   148,   232,    19,   234,
    1053,    59,  1055,   111,   120,   273,   173,  1060,  1061,  1062,
     177,    37,   190,   191,     5,     5,     4,  1070,    39,   273,
    1073,    47,  1075,   258,   259,    61,    59,   234,   270,   190,
     191,   266,   225,   232,     4,    56,   194,    26,  1091,     4,
    1093,   248,     3,     4,  1097,  1098,     4,   199,    74,   284,
       4,     5,   259,   813,     4,   254,     5,   209,     4,  1112,
    1113,   197,   229,  1116,  1117,  1118,    56,     4,     5,    14,
      15,  1124,   273,  1126,     4,    65,  1129,     5,  1131,   286,
     101,  1180,     4,   227,     4,   263,     4,    14,    15,   282,
     289,   298,   273,   300,   301,   273,   274,     5,    59,     9,
     278,   268,   263,   190,   191,   340,   305,    11,   227,   276,
     277,   161,   273,   274,   258,  1168,    61,   269,   270,  1172,
    2100,  1174,     5,   112,   150,  1178,   304,     4,     5,  2109,
     269,     3,     4,   340,    61,   124,   157,     4,  2118,   258,
    1193,   169,  1195,   304,  1197,  1198,  1199,  1200,     3,     4,
       4,  1204,  1205,   177,   190,   191,  1953,    12,   169,  1212,
     186,     3,     4,   213,     5,   284,  1219,   196,    40,   196,
    1223,  1224,  1225,   194,     4,     5,   263,    14,    15,     5,
    1233,  1234,   425,   426,  1237,    83,   273,   274,   340,   239,
      66,     4,    82,  2223,  1247,   216,  1249,   196,    66,  1252,
     221,    99,     3,     4,    80,   188,     7,     8,    82,  2239,
     188,   232,   225,    89,  2244,    66,  2438,   304,   207,  2441,
      66,  2443,  1193,    99,    61,  2022,   216,   263,   254,     5,
     226,   220,     5,     4,  2456,  2457,     4,   273,   274,   111,
       4,   196,  1295,    87,  1297,   190,   191,  1300,  1301,  2046,
    1303,  2473,  1305,   129,     3,     4,     5,     5,  1311,    87,
    1313,     5,   152,   190,   191,     4,     4,  1320,   304,  1240,
       5,   292,     5,     4,   150,     5,  1036,   175,   152,   305,
      99,    17,   187,     4,     4,  1256,     5,     4,   193,    17,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   263,   195,
     218,     3,     4,     5,    17,    14,    15,   232,   273,   274,
    1090,     3,     4,   223,   224,     4,   263,     9,    10,    11,
    1100,     4,  1395,    97,  1397,  1398,   273,   274,   238,   223,
     224,     5,   257,   190,   191,   253,     5,     4,   234,   304,
       3,     4,     5,    87,   238,     5,  1419,     5,     5,    87,
    1423,     4,    61,     5,     3,     4,     5,   304,     7,     8,
       3,     4,     5,   259,     7,     8,     3,     4,     5,   279,
       7,     8,     5,     4,  1447,  1448,     4,   302,     5,    26,
       5,     5,     4,     4,  1457,   279,    12,     5,  1461,    12,
       4,     4,  2442,     4,     4,  1468,     4,   157,     5,     3,
       4,    35,   298,  1394,   300,  2455,   263,     5,     5,  1482,
    2460,     4,   166,     4,  1487,    19,   273,   274,  1491,     5,
    1493,  1494,   347,  1496,  1497,  1498,   157,  1500,  1208,  1209,
    1503,  1504,  1505,  1506,  1507,  1508,  1509,  1510,  1511,  1512,
    1513,    16,  2259,  1516,  1517,  1518,  1519,   304,    23,     4,
     258,  2268,    56,  1526,  1527,   258,   286,  1530,  1531,  1532,
       5,     4,  1535,  1536,     5,   112,  1904,     5,     5,    53,
       5,     4,   106,    61,     4,  1548,  1549,   124,  1551,  1552,
       5,   190,   191,     5,   271,   271,     5,    71,     5,     5,
       4,     4,     4,   127,   128,     5,     5,   101,     5,     5,
       5,     5,   136,     4,    88,  2322,     5,     5,  2325,     4,
     239,  2328,   159,  2330,     5,     5,   100,   239,   105,     5,
     154,  1959,   139,   105,   239,    40,  1599,  1600,  1601,   117,
     164,  1604,   120,   105,   118,     5,  1609,  1610,   122,  1612,
    1613,  1614,   212,  1616,  1617,   244,  1619,    40,   212,  1622,
    1623,   135,     5,   157,   263,     4,   212,     5,  1631,     5,
     207,   212,     4,  2001,   273,   274,  1639,     4,     4,   157,
       5,  1644,  1645,   220,     5,     5,     5,   111,     4,  1652,
     111,     3,     4,     6,     5,     5,     5,     4,  1661,     5,
     174,     5,     4,    38,     5,   304,     5,    19,     4,    12,
       5,     5,     4,     4,   192,     5,     5,     5,     4,    12,
    1390,     4,   216,     4,     4,     4,  1396,   221,  1609,     5,
      38,     0,     5,   239,  1697,   121,   168,   239,   139,     4,
     239,   208,   196,   959,     4,     4,     4,     4,  1418,     4,
       4,  1421,   248,     5,     5,  1425,  1719,  1720,     5,     5,
       5,  1724,   271,     5,     4,   243,     5,  1730,   246,  2709,
       4,     4,     4,   239,     5,     5,  1446,   242,     5,   244,
     239,   239,  1452,   308,     4,     4,   308,     4,     4,   101,
    1460,     4,   270,  1463,     4,   273,  1677,     4,   308,     4,
       6,     5,  1472,  1473,     5,   283,  1687,   225,   225,   225,
       5,  1692,   225,  1483,   225,   308,     5,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   157,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,  1837,     4,  1839,     5,  1841,     5,
    2208,  2209,     4,  2211,  2212,     5,     4,  2215,  2216,     5,
       4,     4,   271,     5,     5,     4,     4,  1860,  1861,  1862,
    1863,  1864,  1865,  1866,  1867,  1868,     5,     5,     4,   221,
       5,     5,     4,    32,     5,     4,     4,     4,     4,   271,
       5,  1884,     5,  1886,     5,     5,     5,     4,    12,     5,
       4,   271,     5,     5,     5,     4,     4,   304,     5,     4,
    1903,  1904,     5,     5,     5,     4,  1909,     4,     4,  2277,
       5,     5,     5,     5,     4,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,  1926,  1927,     5,     5,  1930,  1931,  1932,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,     5,
    1943,     5,  1945,  1946,  1947,     4,  2606,     4,   352,     5,
       5,     5,     5,     4,   113,     4,  1959,  1960,     5,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,     5,     5,  1992,
       5,     4,  1995,     4,  1997,     5,  1999,     4,  2001,  2002,
       4,  2004,     4,     4,  2734,     5,     5,     5,  2011,  2012,
       5,     5,     4,     4,     4,  2018,  2676,  2020,     5,     4,
       4,  2024,     5,   182,  2027,   184,   185,     5,   187,   188,
       4,     4,     4,    19,     4,   352,     5,     5,     4,     4,
     352,     5,     5,     5,     5,     5,     5,     4,   352,     5,
       4,     4,   284,     5,     5,     5,   215,     4,    44,  2427,
       4,   284,     5,  2431,     5,     5,     5,     4,     4,     4,
    2073,     5,     5,     5,   233,   234,     5,    22,     4,     6,
       5,  1337,    27,     4,     4,     4,     4,     4,     4,     4,
       4,    77,     4,  1349,     4,     4,     4,     4,    84,  2467,
       4,   289,     4,    48,    49,     4,    51,    52,    94,    95,
    2031,  1367,  1368,   352,   352,   101,   275,    62,   352,   352,
       4,     4,  2171,     5,     5,     5,     4,     4,   287,    74,
      75,     5,     5,     5,     5,     4,     4,    82,   124,     4,
      85,     4,     4,  1853,     4,     4,     4,     4,   307,  2070,
       4,     6,     5,     4,   352,     5,   142,   102,     5,     5,
       4,   349,     5,     5,   109,   110,     4,     4,   113,     5,
     156,   157,     5,     5,  2177,     4,     4,   163,     5,  1889,
       4,     4,     4,     4,     4,  2188,  2189,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,  2197,  2198,     5,   183,     5,     4,
       4,  2204,     5,     4,     4,  2208,  2209,     4,  2211,  2212,
    2686,  2687,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
       5,  2224,  2225,  2226,     5,     4,     4,   172,     4,   424,
       5,     5,     5,     4,     4,   221,     5,  2240,  2241,  2242,
    2243,     5,  2245,  2246,  2247,  2248,  2249,  2250,     5,  2252,
       4,  2615,  2255,  2256,     5,     5,     5,   416,   380,  2504,
    2604,  2234,  2676,  2672,    -1,   731,    -1,    -1,   427,    -1,
      -1,  2274,    -1,    -1,  2277,  2278,    -1,   436,    -1,  2282,
      -1,    -1,   227,  2286,    -1,    -1,   272,    -1,   233,    91,
      -1,    -1,    -1,    -1,    -1,    -1,   282,    99,    -1,    -1,
      -1,    -1,    -1,   105,   249,    -1,    -1,    -1,    -1,    -1,
      -1,   499,    -1,   258,    -1,    -1,    -1,    -1,   506,    -1,
      -1,   509,    -1,    -1,   126,   311,   514,    -1,    -1,    -1,
     518,  2334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     285,   286,    -1,    -1,    -1,   504,   505,    -1,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,  2023,   517,    -1,
      -1,   306,    -1,   522,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   531,    -1,  2040,  2041,  2042,    -1,    -1,  2045,
      -1,  2047,  2048,    -1,    -1,  2051,  2052,  2053,    -1,    -1,
    2056,  2057,    -1,   195,  2060,   583,  2062,  2063,    -1,  2065,
      -1,   203,    -1,  2406,    -1,    -1,   351,  2410,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2420,  2421,    -1,
      -1,    -1,    -1,  2426,  2427,    -1,    -1,  2430,  2431,    -1,
      -1,    -1,    -1,  2436,    -1,    -1,  2439,  2440,    -1,    -1,
      -1,   600,   601,   602,   603,    -1,   248,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,  2458,  2459,   259,  2461,  2462,
    2463,  2464,  2465,    -1,  2467,  2468,    -1,    -1,    -1,  2472,
      -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,    76,
      -1,  2484,    -1,    -1,    -1,    -1,  2489,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1753,    -1,    -1,
      -1,   660,  2505,    -1,   692,  1761,  1762,  2173,    -1,    -1,
    2176,   699,    -1,    -1,    -1,  2181,    -1,    -1,  2184,    -1,
    1776,  1777,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,  1787,  1788,    -1,    -1,    -1,    -1,  2203,    -1,    66,
      -1,    -1,  1798,  1799,  2547,    -1,   143,    -1,    -1,  2552,
    2260,  2554,  1808,  1809,   947,    -1,    -1,  2560,  1814,    -1,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,  1824,    -1,
    2573,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   979,  2636,  2591,    -1,
      -1,    -1,  2595,    -1,    -1,   192,    -1,    -1,    -1,   126,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2615,   210,   211,    -1,    -1,    -1,    -1,    -1,
     217,    -1,   219,   150,  2290,    -1,    -1,    -1,   816,    -1,
      -1,   158,    -1,    -1,    -1,   823,    -1,  2640,    -1,    -1,
      -1,    -1,  2645,    -1,  2647,    -1,    -1,    -1,    -1,   246,
      -1,  2654,    -1,    -1,    -1,    -1,  2659,  2323,   817,    -1,
      -1,  2664,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
     829,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,
     868,   869,    -1,  2686,  2687,   873,    -1,    -1,   876,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   887,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   866,    -1,    -1,
    2713,    -1,    -1,  2716,   311,    -1,  2719,    -1,    -1,    -1,
      -1,   248,    -1,    -1,    -1,    -1,    -1,  2730,  2731,  2732,
    2733,    -1,   259,    -1,    -1,    -1,  2402,    -1,    -1,  2742,
      -1,    -1,  2745,    -1,  2454,    -1,    -1,    -1,   275,  2752,
      -1,  2754,    -1,    -1,    -1,    -1,  2422,   284,    -1,   286,
      -1,    -1,    -1,  2429,  2474,    -1,  2432,  2433,  2478,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   937,    -1,
      -1,    -1,    -1,  2704,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   987,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,    -1,  2736,    -1,    -1,  2739,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2084,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2094,    -1,
      -1,    -1,  2098,  2099,    -1,    -1,    -1,     4,    -1,    -1,
      -1,  2107,  2108,  1012,    -1,    -1,    -1,    -1,    -1,    -1,
    2116,  2117,    19,    -1,    -1,    -1,  2122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2132,  2133,    -1,    -1,
      -1,    -1,  2548,    40,    -1,    -1,    -1,  2143,  2144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,  2154,    56,
      -1,  2567,    -1,    -1,    -1,  1064,    -1,  2163,    -1,  2165,
      -1,    -1,    19,    -1,    -1,  1074,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1321,  1322,
    1323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1331,  1332,
    1333,    -1,    -1,    -1,   101,  1338,  1339,  1340,    -1,    56,
    1343,  1344,    -1,  1346,  1347,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2638,  2639,    -1,  2641,    -1,  2643,  2644,    -1,
    2646,    -1,    -1,  1376,  1377,    -1,    -1,  1380,  1381,    -1,
      -1,    -1,    -1,  1181,   101,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2725,    -1,  1176,    -1,    -1,
      -1,    -1,    -1,  1211,    -1,    -1,    -1,    -1,  1216,    -1,
      -1,    -1,    -1,  2699,  1193,    -1,    -1,   194,  1226,    -1,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,
     157,    -1,    -1,   210,   211,    -1,    -1,    -1,  1217,   216,
      -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,  1227,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2746,    -1,  2338,    -1,    -1,    -1,    -1,  1246,    -1,    -1,
      -1,    -1,  2348,    -1,    -1,    -1,    -1,  1256,    -1,    -1,
      -1,  2357,  1261,    -1,    -1,    -1,    -1,    -1,    -1,   216,
    2366,    -1,    -1,    -1,   221,    -1,    -1,  2373,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2384,    -1,
      -1,    -1,    -1,    -1,  2390,    -1,    -1,  2393,   295,    -1,
    2396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,
      -1,    -1,   349,   350,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,  1394,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2513,    -1,    -1,
      -1,    -1,    -1,    19,    -1,  1424,  2522,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1462,  2531,    -1,    -1,    -1,    -1,
      -1,  2537,    -1,    -1,    -1,  2541,    -1,    -1,  2544,    -1,
      -1,    -1,    -1,    -1,  1453,    -1,    19,  1456,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1466,  1467,    -1,
      -1,    -1,    -1,    -1,    -1,  1474,    -1,    -1,    -1,    -1,
      -1,    -1,  1481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1522,    -1,    -1,    -1,    -1,    -1,
    1528,  1734,    65,    66,    -1,   101,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1747,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1521,    -1,  1757,  1524,  1525,    -1,    91,    -1,
      -1,    -1,    -1,    -1,  1533,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1603,    -1,  1605,    -1,    -1,
      -1,    -1,    -1,  1611,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,  1829,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,  1636,    -1,
    1609,    -1,    -1,    -1,  1642,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,   221,    -1,    -1,  1627,    -1,
      -1,  1659,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1671,  1643,   208,    -1,    -1,    -1,    -1,
      -1,  1679,    -1,    -1,    -1,    -1,    -1,    -1,   221,  1658,
      -1,  1660,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1670,    -1,    -1,  1673,    -1,  1675,  1676,  1677,  1678,
      -1,    -1,  1681,    -1,    -1,  1684,    -1,    -1,  1687,  1688,
      -1,  1690,  1691,  1692,  1693,    -1,  1695,  1696,    -1,    -1,
      -1,    -1,  1701,  1702,  1703,    -1,    -1,  1706,  1707,   272,
      -1,    -1,    -1,  1712,  1713,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    -1,    -1,    -1,    -1,    -1,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,   340,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1834,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,  1856,    -1,
      -1,    -1,    -1,    -1,    74,    75,    -1,  1836,    -1,    -1,
      -1,  1840,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2083,    -1,    -1,  1852,    -1,    -1,  1855,    -1,    -1,    -1,
      -1,    -1,  1890,  1891,    -1,    -1,    -1,    -1,    -1,   109,
     110,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,  1907,
    1908,    -1,    -1,    -1,  1912,  1913,  1885,    -1,    -1,   129,
    2123,  2124,  2125,  2126,  2127,    -1,  2129,  2130,    -1,    -1,
      -1,  2134,  2135,  2136,  2137,  2138,    -1,  2140,  2141,    -1,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1952,    -1,    -1,  1955,  1956,    -1,
      -1,    -1,   172,    -1,    -1,  1963,    -1,    -1,    -1,    -1,
      -1,   181,  1941,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1998,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,  2014,   227,    -1,    -1,
      -1,    -1,    -1,   233,   234,    -1,    -1,    -1,    -1,    -1,
    2028,    -1,  2030,    -1,    -1,    -1,    -1,    -1,    -1,   249,
    2038,    -1,    -1,    -1,    -1,  2043,  2015,    -1,    -1,   259,
      -1,  2049,    -1,    -1,    -1,    -1,  2054,    -1,    -1,    -1,
    2058,    -1,    -1,  2061,    -1,    -1,  2064,    -1,  2066,    -1,
      -1,    -1,    -1,    -1,   284,    -1,   286,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
    2059,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     340,    -1,    -1,    -1,  2337,    -1,    -1,  2340,  2341,  2342,
    2343,  2344,    -1,  2346,  2347,    -1,  2349,  2350,  2351,  2352,
    2353,    -1,  2355,  2356,    -1,  2358,  2359,  2360,  2361,  2362,
      -1,  2364,  2365,    -1,  2367,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,  2377,  2378,    -1,    -1,    -1,    73,
      -1,    75,    -1,    -1,    -1,  2388,    80,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,  2175,    -1,    -1,  2178,
      -1,   105,    -1,    -1,    -1,    -1,    -1,  2186,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2202,    -1,   129,  2205,    18,    19,    -1,
      -1,  2210,    -1,    -1,  2213,  2214,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2251,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2516,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,  2525,    -1,   218,    -1,    -1,    -1,    -1,    -1,
      -1,  2534,    -1,  2536,   115,  2304,    -1,  2540,   232,    -1,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,   253,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      -1,    -1,   266,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     284,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2399,    -1,   297,   298,    -1,   300,  2405,    -1,    -1,
      -1,  2409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2625,    -1,  2627,    -1,  2629,  2425,    -1,  2632,
      -1,  2634,  2401,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2445,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2496,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2493,    -1,    -1,    -1,  2497,    -1,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2578,  2550,  2551,    -1,  2553,    -1,    -1,    -1,    -1,  2558,
    2559,    -1,    -1,    -1,  2563,    48,    49,    -1,    -1,    52,
      56,    -1,    55,    -1,    -1,    19,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,    -1,    -1,    -1,  2596,    -1,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,   101,    99,    -1,    -1,    -1,
      -1,  2620,   105,    -1,    -1,    -1,   109,   110,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2668,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,  2689,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2704,    -1,    -1,    -1,  2737,
      -1,    -1,   195,   157,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,  2721,    -1,    -1,    -1,    -1,    -1,    -1,  2757,
     216,    -1,  2760,   101,    -1,   221,    -1,  2736,    -1,    -1,
    2739,    -1,   225,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     233,   234,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,   249,    -1,    -1,    -1,
      -1,    -1,   216,    19,    -1,   258,   259,   221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,   101,    -1,
      -1,   284,    -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   298,    -1,   300,    -1,    -1,
      -1,    -1,    -1,   306,    -1,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   221,   157,   101,    -1,   340,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,
     288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    41,    -1,    -1,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,    -1,   142,    -1,    -1,   145,    -1,    -1,
      -1,   149,   150,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,
     178,   179,   180,    -1,    -1,   183,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,   197,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,   215,   216,    65,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
     228,    77,   230,    79,    -1,    -1,    -1,    -1,    84,   237,
      86,    87,    88,   241,    -1,    -1,   244,    93,   246,    95,
     248,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,
     288,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   299,    -1,   301,    -1,    -1,   152,   153,    -1,   307,
     156,    -1,   310,   311,   160,    -1,   162,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,
      -1,   187,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,
     348,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,   215,
      -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   287,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,    -1,    -1,   309,    -1,   311,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   348
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    46,    59,    64,    65,    67,    68,    69,
      77,    84,    86,    87,    95,    96,   125,   138,   142,   145,
     149,   150,   156,   162,   175,   178,   179,   180,   183,   184,
     197,   214,   215,   216,   228,   230,   237,   241,   244,   246,
     248,   253,   266,   272,   287,   288,   299,   301,   307,   310,
     311,   341,   348,   354,    66,    12,    53,    71,   100,   118,
     122,   135,   292,   387,     3,     4,   292,   355,   392,   187,
     193,   232,   257,   302,   347,   394,   284,     4,    40,   111,
     194,   246,   399,    28,   151,   173,   177,   229,   268,   276,
     277,   369,   401,    83,    99,   175,   218,   253,   402,    40,
      59,   111,   194,   288,   355,   411,     4,    19,    40,    56,
     101,   119,   157,   194,   202,   210,   211,   216,   221,   295,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   344,
     349,   350,   357,   365,   366,   367,   413,    33,   414,   357,
      44,    46,    76,    84,   143,   192,   210,   211,   217,   219,
     246,   311,   356,   145,   416,    41,    44,    46,    65,    67,
      68,    69,    77,    79,    84,    86,    87,    88,    93,    95,
     124,   142,   152,   153,   156,   160,   162,   183,   184,   187,
     197,   214,   215,   222,   246,   248,   272,   287,   288,   296,
     303,   309,   311,   348,   417,    83,    99,   459,    19,    44,
      77,    84,    94,    95,   101,   124,   142,   156,   157,   163,
     183,   221,   272,   282,   311,   462,   357,    88,   116,   185,
     200,   260,   301,   311,   468,    16,    26,   112,   124,   159,
     207,   220,   471,   231,   489,     5,    66,    88,   140,   301,
     348,   357,   490,     5,   491,    57,   131,   226,   241,   302,
     507,    64,    66,   182,   240,   282,   291,   526,    66,   203,
     343,   349,   351,   527,    39,   194,   232,   292,   355,   365,
     367,   528,     5,   301,   311,   357,   531,    70,   169,   245,
     254,   532,     4,   533,    88,   507,    61,   282,   305,   540,
     194,   292,   355,   541,    26,   112,   124,   207,   220,   543,
      50,    99,   108,   137,   294,   558,   559,     4,    37,    47,
      74,   150,   186,   232,   254,   289,   305,   382,     4,   124,
     206,   560,   292,   355,   562,    16,    23,   242,   244,   366,
     563,   231,   567,   292,   355,   568,     0,     5,   141,    59,
     355,   388,   269,     5,     4,   292,   355,   389,     5,    32,
     281,   390,   123,   355,   391,   123,   355,   393,   355,     4,
     193,   250,   397,   187,   302,   346,   347,   355,   396,   357,
     139,   176,   395,   197,   355,    78,   172,   250,   355,   398,
       5,   355,     4,   246,   400,   355,   355,     5,   227,   403,
      31,   404,     5,   405,     5,   409,     5,    31,   410,   355,
       9,    10,    11,   355,   361,   362,   363,   364,   355,   355,
      40,   111,   194,   355,   412,   355,   194,   365,   367,   355,
      35,   106,   127,   128,   136,   154,   164,   371,   355,     4,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     117,    66,    53,    71,    88,   100,   118,   122,   135,   174,
     418,   118,   420,   187,   193,   232,   257,   302,   346,   347,
     355,   406,   421,   284,   424,   169,   425,   169,   177,   427,
      65,    66,    69,    91,   169,   186,   208,   272,   340,   365,
     429,   355,   367,   432,    59,   288,   365,   433,   280,   365,
     367,   434,    33,   435,   365,   367,   436,     4,   365,   367,
     437,    45,    59,    81,   100,   117,   120,   147,   148,   199,
     209,   269,   270,   340,   441,   213,   304,   447,     5,    89,
       6,    88,   120,   439,     5,    65,   367,   438,    16,   507,
      66,    81,   182,   240,   282,   291,   448,    66,   232,   449,
     283,    61,   282,   305,   450,    21,   135,   239,   267,   451,
      37,    47,    74,   150,   186,   254,   305,   452,   367,    89,
      16,   196,   457,   365,   460,    72,   463,    31,   464,    44,
      87,   192,   465,   150,   218,   259,   297,   466,   365,    18,
      58,   115,   173,   288,   365,   467,     4,   193,   470,     5,
       4,     6,   120,   355,     4,     5,   246,   472,     5,   474,
       5,   117,   192,   246,   270,   475,    93,   111,   187,   488,
       5,   486,     5,   270,   487,     4,     5,   357,   357,   355,
     355,     5,     4,     5,    60,    66,    73,    75,    80,    83,
      89,    99,   105,   114,   129,   150,   165,   174,   175,   195,
     218,   232,   234,   248,   253,   259,   266,   284,   297,   298,
     300,   340,   492,     5,     4,   197,   204,   205,   240,   345,
     368,   355,   365,   355,     5,   355,    40,   111,   355,   530,
     357,   355,   365,   367,   529,   355,   371,   355,     4,   366,
      54,    90,   141,   246,   534,     4,     4,   355,     4,   150,
     259,   535,     5,   365,     4,    40,   111,   355,   542,   355,
      97,    61,   120,   246,   273,   544,   120,   557,    61,   117,
     120,   157,   192,   243,   246,   270,   273,   283,   546,   547,
      61,   120,   273,   556,     5,     4,    34,   107,   203,   539,
      66,   357,   383,    66,   357,   384,    66,   357,   385,    13,
     189,   538,   355,   355,   225,   355,   386,   355,   270,     4,
     355,   355,     4,   566,     4,   286,   564,     4,   286,   565,
       4,   371,   123,   355,   569,   355,   355,     4,     5,   355,
      12,   355,   355,   355,    30,    94,   163,   250,   255,   370,
     370,     4,   197,   355,   355,     4,     4,     4,   355,   355,
     355,   355,     4,     4,     5,     5,   365,     5,   355,   355,
     361,   363,   363,   365,   355,   355,   355,   355,   355,   355,
     355,   365,   367,   364,   355,   355,   364,   355,     5,   269,
     103,   187,   419,   193,   250,   422,   169,    78,   172,   250,
     423,   139,   176,   407,   407,     4,   426,     4,   428,   193,
     257,   430,   177,   431,   169,   371,   355,   355,   365,   365,
     371,   371,   371,   365,   371,   355,   365,   444,     4,   367,
     442,   196,     4,   166,   311,   443,   196,   365,   132,   292,
     446,     5,     5,     4,   196,   355,     4,     5,    60,    66,
     114,   129,   144,   150,   155,   208,   227,   232,   234,   258,
     259,   266,   284,   340,   501,   367,   188,   188,    66,   453,
      66,   454,    66,   455,   225,   456,   355,     5,   226,   458,
     366,   371,     5,   365,   365,   365,   365,     4,   357,     4,
       4,   196,   355,    14,    15,    61,   190,   191,   263,   273,
     274,   304,    87,     5,     5,    14,    15,    61,   190,   191,
     263,   273,   274,   278,   304,    87,   157,   162,   366,   478,
     483,    87,   157,     5,   476,     4,     4,    14,    61,   190,
     263,   273,   304,     5,     5,     4,   355,   366,    20,    21,
      22,    48,    49,    52,    55,    62,    66,    74,    75,    82,
      83,    99,   105,   109,   110,   113,   129,   150,   172,   195,
     225,   227,   233,   234,   248,   249,   258,   259,   284,   286,
     298,   300,   306,   340,    66,    80,    89,    99,   129,   150,
     195,   234,   259,   298,   300,     4,    30,   161,   213,   239,
     495,     5,    63,   104,   236,   251,   252,   342,   343,   500,
      99,   493,    17,    40,   111,   194,   499,     4,     5,    17,
     212,   293,   355,   259,   500,   508,   124,   500,   509,    36,
      40,   111,   133,   194,   292,   355,   510,   365,   357,    91,
      99,   105,   126,   150,   158,   195,   203,   248,   259,   275,
     513,    40,   111,   194,     5,   285,    17,   212,   293,   517,
     286,   357,   518,     5,    99,   105,   301,    17,    17,     4,
     355,   355,   355,   355,   355,   355,   371,   355,   355,   364,
     355,     4,   371,     4,    40,   111,   194,   264,   536,    40,
     111,   194,   264,   537,     4,    97,     5,     5,    87,     4,
       5,     5,    87,     5,   547,    61,   120,   157,   273,   551,
      61,   120,   273,   555,    87,   157,    61,   120,   273,   549,
       4,    61,   120,   273,   548,     5,     5,     4,     4,     5,
       5,     5,   355,   355,   355,     4,   355,   561,   355,   355,
       6,   366,     4,     5,     4,     4,     5,     4,    97,   261,
     372,   355,   355,    12,     5,    12,   355,   355,    12,     4,
      12,     4,     4,   355,   355,   355,     4,   357,     4,     4,
     371,   365,   371,   355,   355,   355,   365,   355,   364,   355,
     355,     5,     5,   355,   367,   355,   365,   355,   371,   371,
     372,   372,   372,   371,   364,   355,   371,   355,   134,   247,
     358,   445,   166,     5,     4,   371,   157,   157,     4,     5,
       4,     4,   355,   440,   355,    20,    21,    22,    48,    49,
      52,    59,    62,    66,    74,    75,    82,   109,   110,   113,
     129,   150,   172,   181,   225,   227,   233,   234,   249,   259,
     284,   286,   296,   306,   340,    66,   129,   155,   234,   284,
      30,   161,   213,   239,   502,   355,   208,   355,   503,    17,
     355,   258,   513,   258,   208,   355,   504,   286,   505,    17,
      98,   355,   355,     5,   372,    56,   365,     4,     5,   469,
     355,     5,     5,     5,   157,   184,   376,   376,   165,   265,
     374,     4,     4,     5,     5,   473,   271,   271,     5,     5,
       5,    17,   159,   375,   375,   374,     4,     4,   374,     5,
       5,   477,   162,   339,   366,   481,     5,   480,     5,     5,
     484,     5,   485,     5,    14,    15,    61,   190,   191,   263,
     273,   274,   278,   304,     4,     4,     5,     5,   376,   374,
       4,     5,     5,   371,    82,   152,   223,   224,   238,   279,
     379,     7,     8,   355,   360,   239,   121,   239,   239,   105,
      40,    66,    99,   105,   111,   129,   150,   165,   195,   234,
     248,   259,   286,   298,   300,   301,   340,   494,   121,   239,
       5,    27,   167,   239,   282,   139,   105,    22,    49,    52,
      82,   110,   113,   227,   258,    22,    49,    52,    55,    82,
     110,   113,   227,   258,   284,    40,   121,   239,   239,   105,
       5,   212,    27,   225,    36,   133,   292,   355,   262,   269,
     121,   244,   365,   513,    40,   130,   225,   282,   244,   212,
       5,     5,   248,    27,   225,     4,     5,     5,   212,    36,
     133,   292,   355,   513,   212,   357,     4,     4,   355,     5,
     304,    22,    27,    48,    49,    51,    52,    62,    74,    75,
      82,    85,   102,   109,   110,   113,   172,   227,   233,   249,
     258,   285,   286,   306,   351,   496,   355,   355,   355,   355,
     355,   500,   365,     5,     4,     5,   355,   355,   365,   355,
     357,   355,   355,   500,     5,   355,   355,   357,     5,    17,
       5,     5,   355,   355,   364,   355,   355,     4,   355,   355,
     111,   355,   355,   111,     4,    42,    43,   170,   171,   198,
     381,   381,    61,   120,   273,   545,   381,     5,    61,   120,
     273,   550,     5,     5,    61,   120,   273,   552,     4,     5,
       5,     4,    61,   120,   273,   554,    61,   120,   273,   553,
       5,     5,     4,     5,     5,     4,   381,   381,   381,   355,
     355,   355,     4,   365,   355,   366,   371,     5,     5,    12,
     355,   365,   367,   355,    12,   355,   355,   355,    59,   355,
       6,     4,   355,   355,    46,   272,   408,     5,   357,   357,
     371,   355,     4,     4,     4,   371,   365,   355,   355,   355,
     355,   371,   365,   372,   364,   355,     4,   372,   355,    38,
      38,     4,   367,     5,    24,    25,    97,   373,     4,   365,
     355,   355,     4,   355,     5,    82,   152,   223,   224,   238,
     279,   365,   367,   239,   121,   239,   239,    21,   239,   365,
     121,   239,    27,   167,   239,   282,   139,    21,   239,   121,
     239,   239,    21,   239,    27,   168,   225,   168,   262,   269,
     121,   168,   225,   290,   513,   130,   168,   225,   282,     4,
     248,    27,   168,   225,   513,   208,   355,   355,   355,   355,
     355,   355,   196,   355,   355,    20,   235,   461,     4,     4,
     355,   376,   376,   376,     4,   376,   376,   376,    14,    15,
      61,   190,   191,   263,   273,   274,   304,   375,   376,   376,
     376,   376,   376,     4,   376,   376,     4,   375,    14,    15,
      61,   190,   191,   263,   273,   274,   304,     5,   479,     5,
     482,     5,     5,    14,    15,    61,   190,   191,   263,   273,
     274,   278,   304,     5,    14,    15,    61,   190,   191,   263,
     273,   274,   278,   304,     5,    14,    15,    61,   190,   191,
     263,   273,   274,   278,   304,    14,    15,    61,   190,   191,
     263,   273,   274,   304,   271,     5,     5,     5,   375,   375,
     374,     4,     4,   374,     5,     4,     4,   376,   376,     4,
     376,   376,     5,   357,   365,   367,     5,   355,   357,   355,
       5,   355,     5,   360,   105,   195,   248,   105,   195,   248,
       5,   357,   355,   357,     5,   355,   365,   357,     5,   360,
     239,   239,    21,   239,    21,   239,   239,    21,   239,   308,
     308,     4,     4,     4,   494,     4,     4,     4,   308,   308,
       4,     5,     4,   357,   355,     5,   355,     5,   360,   357,
     365,   365,   355,    27,    48,    51,    62,    85,   102,   351,
     377,     4,   357,   355,   371,   357,     5,   365,   365,   355,
     357,   357,   365,   365,   355,   357,   355,     5,   355,   225,
     225,   355,   355,   225,   355,   225,   355,   355,   506,   514,
     355,   225,   225,   355,   355,   355,   355,   355,   355,   355,
     355,     5,   304,   355,   497,   355,   355,   225,   355,   355,
     355,   355,   365,   371,     5,   365,   365,   355,   355,   371,
     355,   355,   355,   365,   355,   355,     5,     4,   355,   355,
     355,   355,     5,     5,     4,   381,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   355,   355,   355,   371,   355,   371,   355,   365,   367,
     355,   371,   355,   355,   355,   355,   355,     5,   355,     4,
       6,   355,   355,     4,   365,   355,   371,   177,   369,   355,
     369,   372,   371,   365,   355,   355,     4,   355,   365,   371,
     365,   355,     4,     5,     5,     5,     5,     5,   365,   371,
     365,   365,   365,   365,   367,   365,   371,   365,   365,   365,
     367,   365,   365,   365,   365,   367,   365,   365,   365,   355,
     365,   365,   365,   365,   365,   365,   365,   355,   355,     4,
     355,     5,     4,   355,   376,     5,     5,     5,   374,     4,
       4,     5,   376,   375,     4,   376,     5,     5,     5,   375,
     375,   374,     4,     4,     5,    14,    15,    61,   190,   191,
     263,   273,   274,   304,    14,    15,    61,   190,   191,   263,
     273,   274,   304,    14,    15,    61,   190,   191,   263,   273,
     274,   304,   271,     5,     5,     5,   375,   375,   374,     4,
       4,   374,     5,   271,     5,     5,     5,   375,   375,   374,
       4,     4,   374,     5,   271,     5,     5,     5,   375,   375,
     374,     4,     4,   374,     5,     5,     5,     5,   375,   375,
     374,     4,     4,     5,   375,     4,     4,   375,     4,     4,
     376,     5,   371,   365,   355,   355,   365,   355,     5,   360,
       5,   365,   357,     5,   365,   371,     5,   360,   355,   355,
     355,   355,   355,   355,   355,   355,   355,     4,     4,     5,
       4,     4,   355,   365,   355,     5,   360,   357,   371,   371,
     355,   364,   371,   371,   355,   371,   371,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,    55,    66,    92,
     129,   284,   286,   340,   511,   512,   513,   524,   525,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   365,     5,   355,   355,   355,   355,     4,     4,   371,
     372,     4,   498,   371,   371,   364,   355,     4,   371,     4,
     381,   381,   381,   360,   355,   355,   355,   371,   355,   364,
     355,   355,    12,     5,     5,     4,   355,   355,     4,   371,
     365,   355,   355,   372,   373,   355,     5,   355,   371,   371,
     367,     5,     5,     5,     5,     5,   371,   373,   373,   373,
     371,   373,   372,   373,   373,   371,   373,   373,   373,   371,
     373,   373,   371,   365,   373,   371,   373,   373,   371,   373,
     371,     4,   367,     5,   355,     4,   376,   375,     4,   375,
       5,     5,     5,   375,   375,   374,     4,     4,     5,     5,
       5,     5,   375,   375,   374,     4,     4,     5,     5,     5,
       5,   375,   375,   374,     4,     4,     5,   375,   376,   376,
     376,   376,   376,     4,   376,   376,     4,   375,   375,   376,
     376,   376,   376,   376,     4,   376,   376,     4,   375,   375,
       4,     4,   375,     4,   375,   375,     4,     4,     4,   366,
     373,     4,   365,   373,   355,   365,     4,   373,   373,   365,
       4,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   365,   373,   355,   365,     4,   364,   364,   365,
     364,   364,   365,   365,   364,   364,   355,   355,   355,   355,
     355,   355,   360,   355,   355,   355,   352,   352,   352,   352,
     352,   352,   352,   512,   352,   360,   355,   355,   355,   355,
     360,   355,   355,   355,   355,   355,   355,   371,   355,   304,
     359,   360,   355,   355,   372,   357,     4,     4,   372,     4,
     355,   364,   355,    59,   355,     5,     5,   355,     4,   369,
     373,     5,     4,     5,     4,     5,   365,     5,   372,   373,
     372,   372,   372,     5,     4,   355,   376,   375,   376,   376,
     376,   376,   376,     4,   376,   376,   375,   376,   376,   376,
     376,   376,     4,   376,   376,   375,   376,   376,   376,   376,
     376,     4,   376,   376,   375,   376,   375,     4,   376,   376,
     375,     4,   376,   375,     4,   375,   375,   371,   365,   373,
       4,   371,   355,   371,   355,   355,   355,   373,     4,   371,
     355,   364,   373,   355,   364,   373,   373,   365,   355,     4,
     378,   378,   355,   355,   378,   360,   378,   514,   365,   494,
       5,     4,     5,     5,     5,     4,   357,   360,   378,   378,
     355,   355,   360,   355,   355,   355,   355,   355,   364,   355,
       5,   514,   355,   378,   357,   515,   516,     5,   357,     4,
       5,   355,     5,     4,     6,   355,    32,   281,   415,   365,
       5,   371,   365,   415,   355,   375,   376,   375,   376,   375,
     376,   376,   375,   376,   375,   375,   355,   373,   365,   365,
     355,   365,   355,   365,   365,   355,   365,   373,     4,   514,
     514,   359,   355,   514,     4,   514,   371,     5,     4,     4,
     514,   514,   359,   355,     4,   514,   514,   355,   365,   514,
     514,   514,   515,   521,   522,   513,   519,   520,     4,     5,
       5,     6,     4,   187,   302,   347,   355,   406,     4,   365,
      32,   281,   380,     4,   376,   376,   376,   376,   376,   366,
     373,   373,   355,   373,     4,   373,   373,   355,   373,   355,
     514,   514,     4,   355,   514,     5,   355,   514,     4,   355,
     514,   371,   521,   523,   524,   352,   520,     5,     5,     4,
     355,   407,   355,   407,   371,   373,     4,   365,   367,     4,
     360,   359,   355,   355,   359,   355,   365,   524,   357,     5,
       5,   355,   355,   355,   355,   380,     5,   365,   367,   371,
     365,   367,   514,   355,     4,   514,   355,   373,     5,     5,
     355,     5,   355,   371,   371,     4,   514,     4,     5,     5,
       5,   359,   359,   514,   514,   514
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (fr, ll, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, ll)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, fr, ll); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    frFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (fr);
  YYUSE (ll);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    frFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Base* fr, frFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, fr, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Base* fr;
    frFlexLexer* ll;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , fr, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, fr, ll); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, fr, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Base* fr;
    frFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (fr);
  YYUSE (ll);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (Base* fr, frFlexLexer* ll);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (Base* fr, frFlexLexer* ll)
#else
int
yyparse (fr, ll)
    Base* fr;
    frFlexLexer* ll;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 459 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 460 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 7:
#line 462 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 463 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 465 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 472 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 477 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 478 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 480 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 487 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 491 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 39:
#line 494 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 44:
#line 499 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 46:
#line 501 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 48:
#line 503 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 50:
#line 505 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 55:
#line 512 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 56:
#line 513 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 57:
#line 516 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 58:
#line 517 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 59:
#line 518 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 519 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 520 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 521 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 522 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 523 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 524 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 525 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 526 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 527 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 530 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 532 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 533 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 534 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 535 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 537 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 538 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 539 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 540 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 543 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 544 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 545 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 546 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 547 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 550 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 551 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 554 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 555 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 87:
#line 556 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 559 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 562 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 565 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 569 "frame/parser.Y"
    {
	  Vector r;
	  if (currentSky == Coord::GALACTIC || currentSky == Coord::ECLIPTIC) 
	    r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  else
	    r = Vector((yyvsp[(1) - (2)].real)*360./24.,(yyvsp[(2) - (2)].real));

	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 92:
#line 581 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 588 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 595 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 606 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 639 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 640 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 131:
#line 644 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 132:
#line 645 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 646 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 134:
#line 647 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 135:
#line 648 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 136:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 137:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 138:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 139:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 140:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 141:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 142:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 143:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 144:
#line 661 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 145:
#line 662 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 146:
#line 663 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 147:
#line 664 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 148:
#line 665 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 149:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 150:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 151:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 152:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 153:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 154:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 155:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 156:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 157:
#line 678 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 158:
#line 679 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 159:
#line 680 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 160:
#line 683 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 161:
#line 684 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 162:
#line 685 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 163:
#line 686 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 164:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 165:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 166:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 167:
#line 694 "frame/parser.Y"
    {;}
    break;

  case 168:
#line 695 "frame/parser.Y"
    {;}
    break;

  case 169:
#line 696 "frame/parser.Y"
    {;}
    break;

  case 170:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 171:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 172:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 173:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 174:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 175:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 176:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 177:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 178:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 179:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 180:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 181:
#line 714 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 182:
#line 715 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 183:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 184:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 185:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 186:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 187:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 188:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 189:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 190:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 191:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 192:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 193:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 194:
#line 733 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 195:
#line 734 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 196:
#line 735 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 197:
#line 736 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 202:
#line 743 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 203:
#line 744 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 204:
#line 745 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 205:
#line 746 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 206:
#line 748 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 207:
#line 751 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 208:
#line 752 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 209:
#line 755 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 210:
#line 756 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 211:
#line 759 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 212:
#line 760 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 213:
#line 763 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 214:
#line 765 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 216:
#line 769 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 217:
#line 770 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 220:
#line 773 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 222:
#line 775 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 223:
#line 778 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 224:
#line 779 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 225:
#line 782 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 226:
#line 783 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 227:
#line 785 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 228:
#line 787 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 229:
#line 788 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 230:
#line 789 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 231:
#line 791 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 232:
#line 793 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 233:
#line 796 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 234:
#line 797 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 235:
#line 800 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 236:
#line 802 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 237:
#line 805 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 238:
#line 807 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 239:
#line 810 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 240:
#line 814 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 241:
#line 815 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 243:
#line 819 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 244:
#line 820 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 245:
#line 821 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 249:
#line 827 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 250:
#line 828 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 252:
#line 831 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 253:
#line 836 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 254:
#line 837 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 255:
#line 840 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 256:
#line 841 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 257:
#line 842 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 258:
#line 843 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 259:
#line 844 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 260:
#line 847 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 261:
#line 848 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 262:
#line 849 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 263:
#line 852 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 264:
#line 854 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 265:
#line 859 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 266:
#line 864 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 267:
#line 871 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 268:
#line 873 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 269:
#line 874 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 271:
#line 876 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 272:
#line 880 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 273:
#line 882 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 274:
#line 884 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 275:
#line 885 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 281:
#line 896 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 282:
#line 898 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 283:
#line 900 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 284:
#line 905 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 285:
#line 909 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 286:
#line 912 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 287:
#line 913 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 288:
#line 916 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 289:
#line 917 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 290:
#line 919 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 291:
#line 925 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 292:
#line 926 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 293:
#line 927 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 294:
#line 928 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 295:
#line 931 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 296:
#line 932 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 297:
#line 935 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 298:
#line 936 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 299:
#line 939 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 300:
#line 940 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 301:
#line 944 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 302:
#line 946 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 303:
#line 949 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 304:
#line 951 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 305:
#line 954 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 307:
#line 956 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 308:
#line 957 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 309:
#line 958 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 310:
#line 961 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 311:
#line 963 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 312:
#line 964 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 313:
#line 965 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 314:
#line 966 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 315:
#line 970 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 316:
#line 972 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 317:
#line 973 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 318:
#line 974 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 977 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 320:
#line 979 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 321:
#line 981 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 322:
#line 983 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 323:
#line 986 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 324:
#line 989 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 325:
#line 990 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 326:
#line 991 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 327:
#line 994 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 328:
#line 997 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 342:
#line 1011 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 345:
#line 1014 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 346:
#line 1016 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 349:
#line 1019 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 350:
#line 1020 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 353:
#line 1023 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 354:
#line 1024 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 356:
#line 1027 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 358:
#line 1029 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 360:
#line 1031 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 362:
#line 1033 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 363:
#line 1035 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 364:
#line 1037 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 366:
#line 1039 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 367:
#line 1042 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 368:
#line 1043 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 369:
#line 1044 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 370:
#line 1045 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 371:
#line 1046 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 372:
#line 1047 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 374:
#line 1049 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 375:
#line 1052 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 376:
#line 1053 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 377:
#line 1054 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 378:
#line 1057 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 379:
#line 1060 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 380:
#line 1062 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 381:
#line 1064 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 382:
#line 1065 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 383:
#line 1066 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 385:
#line 1068 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 387:
#line 1071 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 388:
#line 1077 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 389:
#line 1078 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 390:
#line 1081 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 391:
#line 1082 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 392:
#line 1083 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 393:
#line 1086 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 394:
#line 1087 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 396:
#line 1093 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 397:
#line 1095 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 398:
#line 1097 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 399:
#line 1100 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 401:
#line 1102 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 402:
#line 1106 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 403:
#line 1110 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 405:
#line 1112 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 406:
#line 1113 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 407:
#line 1114 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 408:
#line 1115 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 409:
#line 1116 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 411:
#line 1118 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 412:
#line 1119 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 413:
#line 1122 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 414:
#line 1123 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 415:
#line 1124 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 416:
#line 1127 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 417:
#line 1128 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 418:
#line 1132 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 419:
#line 1134 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 420:
#line 1142 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 421:
#line 1144 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 422:
#line 1146 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 423:
#line 1149 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 424:
#line 1151 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 425:
#line 1152 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 426:
#line 1155 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 427:
#line 1158 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 428:
#line 1160 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 429:
#line 1164 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 430:
#line 1166 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 431:
#line 1169 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 432:
#line 1173 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 433:
#line 1174 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 434:
#line 1176 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 435:
#line 1179 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 436:
#line 1180 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 438:
#line 1184 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 439:
#line 1185 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 440:
#line 1186 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 441:
#line 1189 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 442:
#line 1191 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 443:
#line 1192 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 445:
#line 1194 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 449:
#line 1198 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 450:
#line 1199 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 451:
#line 1200 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 452:
#line 1202 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 454:
#line 1204 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 455:
#line 1207 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 456:
#line 1209 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 457:
#line 1211 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 458:
#line 1212 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 459:
#line 1213 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 460:
#line 1214 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 461:
#line 1217 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 462:
#line 1221 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 463:
#line 1223 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 464:
#line 1226 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 465:
#line 1229 "frame/parser.Y"
    {fr->getFitsSliceCmd();;}
    break;

  case 466:
#line 1231 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 467:
#line 1233 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 468:
#line 1235 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (5)].real), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 469:
#line 1238 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 470:
#line 1239 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 471:
#line 1240 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 472:
#line 1243 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 473:
#line 1244 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 474:
#line 1245 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 475:
#line 1246 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 476:
#line 1247 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 477:
#line 1248 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 478:
#line 1251 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 479:
#line 1254 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 480:
#line 1255 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 481:
#line 1256 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 482:
#line 1259 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 483:
#line 1260 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 484:
#line 1261 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 485:
#line 1262 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 486:
#line 1263 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 487:
#line 1264 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 492:
#line 1271 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 493:
#line 1272 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 494:
#line 1273 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 495:
#line 1276 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 496:
#line 1277 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 497:
#line 1280 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 498:
#line 1281 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 499:
#line 1284 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 500:
#line 1285 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 501:
#line 1288 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 502:
#line 1289 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 503:
#line 1292 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 505:
#line 1294 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 506:
#line 1297 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 507:
#line 1298 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 509:
#line 1302 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 510:
#line 1306 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 511:
#line 1309 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 512:
#line 1316 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 513:
#line 1317 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 514:
#line 1320 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 517:
#line 1323 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 518:
#line 1324 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 519:
#line 1325 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 520:
#line 1326 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 522:
#line 1328 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 523:
#line 1329 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 524:
#line 1330 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 526:
#line 1332 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 527:
#line 1333 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 528:
#line 1334 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 529:
#line 1335 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 531:
#line 1339 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 532:
#line 1342 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 533:
#line 1343 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 534:
#line 1346 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 535:
#line 1347 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 536:
#line 1348 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 537:
#line 1349 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 538:
#line 1352 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 539:
#line 1353 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 540:
#line 1354 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 541:
#line 1355 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 542:
#line 1358 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 543:
#line 1359 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 544:
#line 1360 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 545:
#line 1361 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 546:
#line 1362 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 547:
#line 1363 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 548:
#line 1366 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 549:
#line 1367 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 550:
#line 1368 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 553:
#line 1372 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 554:
#line 1373 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 555:
#line 1376 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 556:
#line 1379 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 557:
#line 1380 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 558:
#line 1384 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 559:
#line 1386 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 560:
#line 1387 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1399 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 568:
#line 1401 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 569:
#line 1403 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 570:
#line 1404 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 571:
#line 1406 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 572:
#line 1408 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 573:
#line 1410 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 574:
#line 1412 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1414 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 577:
#line 1418 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 578:
#line 1419 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 579:
#line 1420 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 580:
#line 1421 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 581:
#line 1422 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 582:
#line 1424 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 583:
#line 1425 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1426 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1427 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 586:
#line 1430 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 587:
#line 1434 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1436 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1438 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1440 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1442 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 592:
#line 1444 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1446 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 594:
#line 1448 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1453 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1455 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 603:
#line 1463 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1464 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1465 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1466 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1467 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 608:
#line 1468 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1470 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 610:
#line 1472 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 611:
#line 1473 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1474 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1475 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 614:
#line 1478 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1479 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1480 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1481 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1482 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1484 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 620:
#line 1485 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1486 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1487 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 628:
#line 1498 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1501 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1504 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1507 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1510 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1513 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 634:
#line 1516 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1519 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1522 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 637:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 642:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 644:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 645:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 654:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 657:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1601 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 663:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 669:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 671:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 673:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 674:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1644 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 677:
#line 1648 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1650 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1651 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1652 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 682:
#line 1653 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1655 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 684:
#line 1657 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 685:
#line 1658 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1659 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1660 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 688:
#line 1663 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1664 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1665 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1666 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1667 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1669 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 694:
#line 1670 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1671 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1672 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 697:
#line 1676 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1678 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1679 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 700:
#line 1681 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 701:
#line 1683 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1685 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1688 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 704:
#line 1689 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 705:
#line 1692 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 706:
#line 1693 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 707:
#line 1694 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 708:
#line 1697 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 709:
#line 1704 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 710:
#line 1705 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 711:
#line 1706 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 712:
#line 1707 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 713:
#line 1708 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 714:
#line 1709 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 715:
#line 1710 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 716:
#line 1714 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 718:
#line 1722 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 719:
#line 1723 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 720:
#line 1725 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 721:
#line 1727 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 722:
#line 1728 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 723:
#line 1729 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 725:
#line 1730 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 726:
#line 1731 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 727:
#line 1732 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 729:
#line 1734 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 730:
#line 1735 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 731:
#line 1737 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 732:
#line 1739 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 733:
#line 1741 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 734:
#line 1744 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 735:
#line 1746 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 736:
#line 1747 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 737:
#line 1749 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1752 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 739:
#line 1755 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 740:
#line 1757 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1760 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 742:
#line 1763 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 743:
#line 1766 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 744:
#line 1769 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 745:
#line 1773 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 746:
#line 1777 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 747:
#line 1782 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 748:
#line 1786 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 749:
#line 1787 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1789 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1790 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 752:
#line 1792 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 753:
#line 1794 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 754:
#line 1796 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 755:
#line 1798 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1799 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1801 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 758:
#line 1803 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 759:
#line 1806 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 760:
#line 1810 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 761:
#line 1814 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 762:
#line 1816 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 763:
#line 1818 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1820 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1822 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1824 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1826 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1828 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1830 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1832 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 771:
#line 1834 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 772:
#line 1836 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 773:
#line 1838 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1840 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1841 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1843 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1845 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 778:
#line 1846 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1847 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1849 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1851 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1852 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 783:
#line 1853 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 784:
#line 1854 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1856 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1857 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1859 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 788:
#line 1863 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 789:
#line 1866 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 790:
#line 1869 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 791:
#line 1873 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 792:
#line 1877 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 793:
#line 1882 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 794:
#line 1886 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 795:
#line 1887 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 796:
#line 1888 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 797:
#line 1890 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 798:
#line 1892 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 799:
#line 1896 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 800:
#line 1897 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 801:
#line 1898 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 802:
#line 1900 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 803:
#line 1903 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 804:
#line 1906 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 805:
#line 1909 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1910 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1912 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1915 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 809:
#line 1919 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 810:
#line 1921 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 811:
#line 1922 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 812:
#line 1924 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 813:
#line 1927 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 814:
#line 1930 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 815:
#line 1931 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 816:
#line 1933 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 817:
#line 1934 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 818:
#line 1935 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1937 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 820:
#line 1938 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 821:
#line 1940 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1943 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 823:
#line 1946 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 824:
#line 1948 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 825:
#line 1949 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 829:
#line 1954 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 830:
#line 1955 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 831:
#line 1957 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 832:
#line 1959 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 833:
#line 1961 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 834:
#line 1962 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 835:
#line 1964 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 836:
#line 1965 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 839:
#line 1970 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 840:
#line 1971 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 841:
#line 1972 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 842:
#line 1973 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 843:
#line 1974 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 844:
#line 1975 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 845:
#line 1976 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 846:
#line 1977 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 847:
#line 1978 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 848:
#line 1979 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 849:
#line 1981 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 850:
#line 1983 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 851:
#line 1984 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1985 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 853:
#line 1986 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 854:
#line 1987 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 855:
#line 1989 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 856:
#line 1990 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 857:
#line 1991 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 858:
#line 1992 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 859:
#line 1993 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 1995 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 861:
#line 1996 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 862:
#line 1997 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 863:
#line 1998 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 864:
#line 1999 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 865:
#line 2000 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 866:
#line 2003 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 867:
#line 2004 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 868:
#line 2005 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 869:
#line 2006 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 870:
#line 2007 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 871:
#line 2008 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 872:
#line 2009 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 873:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 874:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 875:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 876:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 877:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 878:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 879:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 880:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 881:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 882:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 883:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 884:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 885:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 886:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 887:
#line 2026 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 888:
#line 2027 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 889:
#line 2028 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 890:
#line 2029 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 891:
#line 2030 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 892:
#line 2032 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 893:
#line 2042 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 894:
#line 2050 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2059 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2067 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2074 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2081 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2089 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2097 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2102 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2107 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2112 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2117 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2122 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2127 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2132 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2141 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2151 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2161 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2170 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2178 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2188 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2198 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2208 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2220 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2229 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2237 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 920:
#line 2239 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 921:
#line 2241 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 922:
#line 2246 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 923:
#line 2249 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 924:
#line 2253 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 925:
#line 2255 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 926:
#line 2256 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 927:
#line 2259 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 928:
#line 2260 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 929:
#line 2261 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 930:
#line 2262 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 931:
#line 2263 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 932:
#line 2264 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 933:
#line 2265 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 935:
#line 2269 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 936:
#line 2270 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 937:
#line 2271 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 938:
#line 2272 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 939:
#line 2273 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 940:
#line 2276 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 941:
#line 2278 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 942:
#line 2280 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 943:
#line 2282 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(Coord::CoordSystem)(yyvsp[(6) - (8)].integer),(Coord::SkyFrame)(yyvsp[(7) - (8)].integer), (Marker::AnalysisMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 944:
#line 2284 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 945:
#line 2286 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 946:
#line 2288 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 947:
#line 2289 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 948:
#line 2290 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 949:
#line 2292 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 950:
#line 2294 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 951:
#line 2296 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 952:
#line 2298 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 953:
#line 2300 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 954:
#line 2301 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 955:
#line 2302 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 956:
#line 2304 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 957:
#line 2306 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2309 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 959:
#line 2311 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 960:
#line 2313 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2314 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 962:
#line 2315 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 963:
#line 2316 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 964:
#line 2318 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2319 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 966:
#line 2320 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2321 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2322 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 969:
#line 2324 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2326 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2327 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2329 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2331 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2333 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2334 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 976:
#line 2336 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2338 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2339 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 979:
#line 2340 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 980:
#line 2341 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2343 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2345 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 983:
#line 2348 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 984:
#line 2351 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2352 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2353 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2355 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 988:
#line 2358 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2361 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2362 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 991:
#line 2363 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2366 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2368 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2370 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 996:
#line 2371 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2373 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2374 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 999:
#line 2375 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1000:
#line 2376 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2377 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2379 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2381 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2383 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1005:
#line 2385 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1007:
#line 2387 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1008:
#line 2388 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1009:
#line 2390 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1010:
#line 2392 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1011:
#line 2393 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1012:
#line 2394 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1014:
#line 2396 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1016:
#line 2400 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1017:
#line 2401 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1018:
#line 2402 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1019:
#line 2403 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1020:
#line 2404 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1021:
#line 2405 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1022:
#line 2407 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1023:
#line 2408 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1024:
#line 2410 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1025:
#line 2413 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1026:
#line 2414 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1027:
#line 2415 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1028:
#line 2416 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1029:
#line 2419 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1030:
#line 2420 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1031:
#line 2423 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1032:
#line 2424 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1033:
#line 2427 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1034:
#line 2428 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1035:
#line 2431 "frame/parser.Y"
    {
	  strncpy(currentFont, "helvetica 10 normal roman", 32);
	  strncpy(currentColor, "green", 16);
	  currentDash[0] = 8;
	  currentDash[1] = 3;
	  currentWidth = 1;
	  strncpy(currentText, "", 80);
	  currentProps = defaultProps;
	  taglist.deleteAll();
	  cblist.deleteAll();
	;}
    break;

  case 1036:
#line 2444 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1037:
#line 2445 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1038:
#line 2446 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1039:
#line 2447 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1040:
#line 2448 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1041:
#line 2452 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1042:
#line 2460 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1043:
#line 2465 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1044:
#line 2471 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1045:
#line 2473 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1046:
#line 2476 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1047:
#line 2478 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1048:
#line 2481 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1049:
#line 2484 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1050:
#line 2485 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1051:
#line 2486 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1052:
#line 2487 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1053:
#line 2488 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1054:
#line 2489 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1055:
#line 2491 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1058:
#line 2498 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1059:
#line 2499 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1060:
#line 2500 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1061:
#line 2501 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1062:
#line 2502 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1063:
#line 2503 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1066:
#line 2508 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1067:
#line 2509 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1068:
#line 2510 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1069:
#line 2511 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1070:
#line 2512 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1071:
#line 2513 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1072:
#line 2514 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1073:
#line 2515 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1074:
#line 2516 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1075:
#line 2517 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1076:
#line 2518 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1079:
#line 2525 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1080:
#line 2526 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1082:
#line 2529 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1083:
#line 2530 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1084:
#line 2531 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1085:
#line 2532 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1086:
#line 2535 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1087:
#line 2536 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1090:
#line 2544 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1091:
#line 2547 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1092:
#line 2548 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1096:
#line 2555 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1097:
#line 2558 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1098:
#line 2562 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1099:
#line 2563 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1100:
#line 2564 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1101:
#line 2565 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1102:
#line 2566 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1103:
#line 2567 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1104:
#line 2568 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1105:
#line 2574 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1106:
#line 2575 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1107:
#line 2576 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1108:
#line 2577 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1109:
#line 2581 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1110:
#line 2582 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1111:
#line 2584 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1112:
#line 2589 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1114:
#line 2591 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1116:
#line 2593 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2596 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1118:
#line 2598 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1119:
#line 2603 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1120:
#line 2606 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1121:
#line 2607 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1122:
#line 2608 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1123:
#line 2611 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1124:
#line 2613 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1125:
#line 2617 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1126:
#line 2618 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1127:
#line 2622 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1128:
#line 2623 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1129:
#line 2624 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2625 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1131:
#line 2631 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1132:
#line 2632 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1133:
#line 2638 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1134:
#line 2639 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1135:
#line 2640 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1136:
#line 2641 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1139:
#line 2649 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1140:
#line 2651 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1141:
#line 2652 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1142:
#line 2653 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1143:
#line 2657 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1144:
#line 2658 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2659 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1146:
#line 2660 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1147:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1148:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1149:
#line 2667 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1150:
#line 2668 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1151:
#line 2669 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1152:
#line 2672 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1153:
#line 2673 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1154:
#line 2674 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1155:
#line 2677 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1156:
#line 2678 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1158:
#line 2680 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1159:
#line 2681 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1160:
#line 2684 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1161:
#line 2685 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1162:
#line 2686 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1167:
#line 2693 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1168:
#line 2697 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1169:
#line 2699 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1170:
#line 2701 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1172:
#line 2706 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1173:
#line 2708 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1174:
#line 2710 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1184:
#line 2723 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1185:
#line 2724 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1186:
#line 2725 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1187:
#line 2728 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1188:
#line 2729 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1189:
#line 2730 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1190:
#line 2733 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2734 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2735 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1193:
#line 2738 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2739 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2740 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1197:
#line 2744 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1198:
#line 2745 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2746 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1200:
#line 2749 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2750 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2751 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2754 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2755 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2756 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2759 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2760 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2761 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2764 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2765 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2766 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2770 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2772 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2778 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1216:
#line 2782 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1217:
#line 2784 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1218:
#line 2788 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1219:
#line 2791 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1220:
#line 2792 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1221:
#line 2793 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1222:
#line 2794 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1223:
#line 2797 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1224:
#line 2799 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1225:
#line 2800 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1226:
#line 2802 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1228:
#line 2806 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1229:
#line 2808 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].real), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame (yyvsp[(3) - (3)].integer)));;}
    break;

  case 1230:
#line 2809 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->sliceCmd((yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1231:
#line 2815 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1232:
#line 2816 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1233:
#line 2820 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2822 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2827 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2828 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2829 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1241:
#line 2832 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2833 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1243:
#line 2834 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1244:
#line 2837 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1245:
#line 2839 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1246:
#line 2844 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1247:
#line 2847 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1248:
#line 2854 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1249:
#line 2856 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1250:
#line 2858 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1251:
#line 2863 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1253:
#line 2867 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1254:
#line 2868 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1255:
#line 2869 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1256:
#line 2871 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1257:
#line 2873 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1258:
#line 2878 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10868 "frame/parser.C"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (fr, ll, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (fr, ll, yymsg);
	  }
	else
	  {
	    yyerror (fr, ll, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, fr, ll);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, fr, ll);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (fr, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, fr, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, fr, ll);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 2882 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

