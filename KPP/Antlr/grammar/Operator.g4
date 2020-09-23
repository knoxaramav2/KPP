grammar Operator;

//rules groupes
s_group             : S_SET         |
                      S_SUM_SET     |
                      S_DIF_SET     |
                      S_MULT_SET    |
                      S_INC_OR_SET  |
                      S_EXC_OR_SET  |
                      S_LSHIFT_SET  |
                      S_RSHIFT_SET
                      ;

l_group             : L_NOT         |
                      L_AND  
                    ;


//*****Operators
//Setters
S_SET               : '=';
S_SUM_SET           : '+=';
S_DIF_SET           : '-=';
S_MULT_SET          : '*=';
S_INC_OR_SET        : '|=';
S_EXC_OR_SET        : '^=';
S_LSHIFT_SET        : '<<=';
S_RSHIFT_SET        : '>>=';

//Logical
L_NOT               : '!';
L_AND               : '&&';
L_OR                : '||';
L_NAND              : '!&';
L_NOR               : '!|';
L_XOR               : '^|';
L_XNOR              : '|^';


//Bitwise
B_AND               : '&';
B_OR                : '|';
B_XOR               : '^';
B_INVERT            : '~';
B_LSHIFT            : '<<';
B_RSHIFT            : '>>';

//Comparison
L_EQUALS            : '==';
L_NOT_EQUALS        : '!=';
L_GREATER_EQU       : '>=';
L_LESS_EQU          : '<=';
L_GREATER           : '>';
L_LESS              : '<';

//Math
M_ADD               : '+';
M_SUB               : '-';
M_MULT              : '*';
M_DIV               : '/';
M_POW               : '^^';

//Closures
C_OBK               : '{';
C_CBK               : '}';
C_OBC               : '{';
C_CBC               : '}';
C_OPR               : '{';
C_CPR               : '}';
C_OC                : '<';
C_CC                : '>';