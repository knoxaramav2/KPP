grammar Common;

//*****Whitespace/Comments
fragment ALPHA  : [a-zA-Z_];

//*****Terminators
T_STATEMENT         : ';';

//*****General/Common
LINE_COMMENT    : '#' ~[\r\n]* ->channel(HIDDEN);
BLOCK_COMMENT   : '#*' .*? '*#'->channel(HIDDEN);
DECIMAL             : '-'?[0-9]+('.'[0-9])?;
IDENTIFIER          : ALPHA+ (DECIMAL+)?;//[a-zA-Z_]([a-zA-Z_0-9])+;
WS                  : [ \r\t\u000C\n]+ -> skip ;