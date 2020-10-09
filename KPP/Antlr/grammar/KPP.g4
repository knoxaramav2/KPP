grammar KPP;

options{
	language = Cpp;
}

kpp				: section+EOF;


section			: namespacedecl;
namespacedecl 	: G_ASSEMBLY symbol_id block
				;
symbol_id		: (IDENTIFIER)(G_DOT IDENTIFIER)*?;

block			: L_BRACE (expr|~R_BRACE)* R_BRACE;
classblock      : L_BRACE (
                    (classdeclblock)
                  )
                  R_BRACE
                ;

classdeclblock  :
                accessdeclblock*
                ;
accessdeclblock :
                (P_PUBLIC | P_PRIVATE | P_INTERNAL | P_INHERIT) L_BRACE
                (vardecl SEMI)*
                R_BRACE
                ;

expr			: (
				binMathOps				|
				binCompOps				|
				group					|
				A_SUBTRACT expr			|
				ifexp					|
				loopexp					|
				classDecl				|
				methodDecl              |
				methodCall              |
				symbol_id				|
				NUMBER
				)+SEMI;

classDecl		: D_CLASS symbol_id classblock;


methodDecl		: symbol_id symbol_id L_PARANTH R_PARANTH block;
methodCall		: symbol_id L_PARANTH group R_PARANTH SEMI;

vardecl         :;

setexpr			:
				symbol_id set value		|
				setexpr set expr
				;

set				:
				A_SET				|
				A_SET_DIFFERENCE	|
				A_SET_PRODUCT		|
				A_SET_QUOTIENT		|
				A_SET_SUM;

loopexp			:
				C_FOR L_PARANTH group R_PARANTH (expr | block)
				;

group			:
				L_PARANTH ((expr|~R_PARANTH) (COMMA (expr|~R_PARANTH))*)? R_PARANTH
				;

ifexp			:
				C_IF L_PARANTH expr R_PARANTH (expr | block) (elseexp)?
				;

elseexp			:
				C_ELSE (expr | block | ~C_IF)
				;

mathExpr		: expr binMathOps expr;
compExpr		: expr binCompOps expr;

value			: symbol_id | NUMBER;

binCompOps		:
				CM_EQU		|
				CM_GTR		|
				CM_GTR_EQU	|
				CM_LSS		|
				CM_LSS_EQU
				;

unaryLogic		: L_NOT;

unaryOp			: BL_INV;

binMathOps		:
				A_ADD 		|
				A_SUBTRACT	|
				A_MULTIPLY	|
				A_DIVIDE	|
				A_EXPONENT	|
				A_MODULO
				;

lr_math_ops		:
				A_INCREMENT symbol_id	|
				A_DECRIMENT symbol_id	|
				symbol_id A_INCREMENT	|
				symbol_id A_DECRIMENT
				;

/**** Lexer rules ***/

/**** Data structures */
D_CLASS			: 'class';

/**** Protection levels */
P_PUBLIC        : 'public';     //Available to all expose
P_PRIVATE       : 'private';    //available only to owning structure
P_INTERNAL      : 'internal';   //Availble to assembly members
P_INHERIT       : 'legacy';     //Available to sub components

/**** General     ***/
G_ASSEMBLY		: '__asm__';
G_DOT			: '.';

/**** Comparison  ***/
CM_GTR          : '>';
CM_LSS          : '<';
CM_EQU          : '==';
CM_GTR_EQU      : '>=';
CM_LSS_EQU      : '<=';

/**** Arithmetic  ***/
A_SET           : '=';
A_ADD           : '+';
A_SUBTRACT      : '-';
A_MULTIPLY      : '*';
A_DIVIDE        : '/';
A_EXPONENT      : '**';
A_MODULO        : '%' ;
A_SET_SUM       : '+=';
A_SET_DIFFERENCE: '-=';
A_SET_PRODUCT   : '*=';
A_SET_QUOTIENT  : '/=';
A_INCREMENT     : '++';
A_DECRIMENT     : '--';

/**** Logical Ops ***/
L_AND			: '&&';
L_OR			: '||';
L_NAND			: '!&';
L_NOR			: '!|';
L_XOR			: '^|';
L_XNOR			: '^!|';
L_NOT			: '!';

/**** Bitwise Ops ***/
BL_AND			: '&';
BL_OR			: '|';
BL_INV			: '~';
BL_LEFT			: '<<';
BL_RIGHT		: '>>';

/**** Control     ****/

C_IF			: 'if';
C_ELSE			: 'else';
C_WHILE			: 'while';
C_FOR			: 'for';
C_GOTO			: 'goto';
C_BREAK			: 'break';
C_SKIP			: 'skip';

/**** Enclosures  ****/
L_BRACKET       : '[';
R_BRACKET       : ']';
L_PARANTH       : '(';
R_PARANTH       : ')';
L_BRACE         : '{';
R_BRACE         : '}';

/**** Whitespace  ****/

LINE_COMMENT    : '#' ~[\r\n]* ->channel(HIDDEN);
BLOCK_COMMENT   : '#*' .*? '*#'->channel(HIDDEN);

fragment ALPHA  : [a-zA-Z_];

//general identifies
COMMA			: ',';
NUMBER			: DECIMAL | INTEGER;
DECIMAL         : '-'?[0-9]+('.'[0-9])?;
INTEGER			: '-'?[0-9]+;
IDENTIFIER      : ALPHA+ (DECIMAL+)?;//[a-zA-Z_]([a-zA-Z_0-9])+;
SEMI            : ';';
WS              : [ \r\t\u000C\n]+ -> skip ;
