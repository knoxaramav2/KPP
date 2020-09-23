grammar Keyword;

//Scoping/Construct
M_ENTRY             : '__entry__';
T_INTERFACE         : 'interface';
T_CLASS             : 'class';
T_STRUCT            : 'struct';

//Control
C_FOR               : 'for';//You see one man, where I C-4
C_EACH              : 'each';//foreach
C_WHILE             : 'while';

C_CONTINUE          : 'continue';
C_BREAK             : 'break';
C_GOTO              : 'goto';
C_LABEL             : 'label';

//Attributes
A_VIRTUAL           : '/';
A_STATIC            : '!';
A_PRIVATE           : '-';
A_PUBLIC            : '+';

//Primitives
P_GENERIC           : 'any';
P_S_INTEGER         : 'int';
P_U_INTEGER         : 'uint';
P_S_FLOAT32         : 'float32';
P_U_FLOAT32         : 'ufloat32';
P_S_FLOAT64         : 'float64';
P_U_FLOAT64         : 'ufloat64';
P_STRING            : 'string';
P_S_CHAR            : 'char';
P_U_CHAR            : 'uchar';
P_DAEMON            : 'daemon';

//Literals
L_TRUE              : 'true';
L_FALSE             : 'false';