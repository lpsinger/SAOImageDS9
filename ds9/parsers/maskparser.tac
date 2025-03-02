%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include numeric.tin
#include string.tin

%start command

%token CLEAR_
%token CLOSE_
%token COLOR_
%token MARK_
%token NAN_
%token NONNAN_
%token NONZERO_
%token OPEN_
%token RANGE_
%token SYSTEM_
%token TRANSPARENCY_
%token ZERO_

%%

#include coordsys.trl
#include wcssys.trl
#include numeric.trl

command : mask 
 | mask {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

mask : {global parse; set parse(result) mask}
 | OPEN_
 | CLOSE_ {MaskDestroyDialog}
 | CLEAR_ {MaskClear}
 | COLOR_ STRING_ {ProcessCmdSet mask color $2 MaskColor}
 | MARK_ mark {ProcessCmdSet mask mark $2 MaskMark}
 | RANGE_ numeric numeric {ProcessCmdSet2 mask low $2 high $3 MaskRange}
 | SYSTEM_ system
 | TRANSPARENCY_ numeric {ProcessCmdSet mask transparency $2 MaskTransparency}
# backward compatibility
 | MARK_ INT_ {ProcessCmdSet mask mark $2 MaskMark}
 ;

mark : ZERO_ {set _ zero}
 | NONZERO_ {set _ nonzero}
 | NAN_ {set _ nan}
 | NONNAN_ {set _ nonnan}
 | RANGE_ {set _ range}
 ;

system : coordsys {ProcessCmdSet mask system $1 MaskSystem}
 | wcssys {ProcessCmdSet mask system $1 MaskSystem}
 ;

%%

proc mask::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
