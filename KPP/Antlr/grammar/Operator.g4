grammar Operator;

//*****Operators
//Bitwise
B_AND               : '&';
B_OR                : '|';
B_XOR               : '^';
B_INVERT            : '~';
B_LSHIFT            : '<<';
B_RSHIFT            : '>>';

//Logical
L_NOT               : '!';
L_AND               : '&';
L_OR                : '|';
L_NAND              : '!&';
L_NOR               : '!|';
L_XOR               : '^|';
L_XNOR              : '|^';
L_EQUALS            : '==';
L_NOT_EQUALS        : '!=';
L_GREATER           : '>';
L_LESS              : '<';
L_GREATER_EQU       : '>=';
L_LESS_EQU          : '<=';

//Setters
S_SET               : '=';
S_SUM_SET           : '+=';
S_DIF_SET           : '-=';
S_MULT_SET          : '*=';
S_INC_OR_SET        : '|=';
S_EXC_OR_SET        : '^=';
S_LSHIFT_SET        : '<=';
S_RSHIFT_SET        : '>=';

//Math
M_ADD               : '+';
M_SUB               : '-';
M_MULT              : '*';
M_DIV               : '/';
M_POW               : '^^';

//*****Keywords
//Control
C_FOR               : 'for';//You see one man, where I C-4
C_EACH              : 'each';//foreach
C_WHILE             : 'while';

C_CONTINUE          : 'continue';
C_BREAK             : 'break';
C_GOTO              : 'goto';
C_LABEL             : 'label';

//*****Whitespace/Comments
fragment ALPHA  : [a-zA-Z_];

//*****Terminators
T_STATEMENT         : ';';

//*****General/Common
DECIMAL             : '-'?[0-9]+('.'[0-9])?;
IDENTIFIER          : ALPHA+ (DECIMAL+)?;//[a-zA-Z_]([a-zA-Z_0-9])+;
WS                  : [ \r\t\u000C\n]+ -> skip ;
