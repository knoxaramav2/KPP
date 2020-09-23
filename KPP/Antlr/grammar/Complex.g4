grammar Complex;

import Common;
import Operator;

//Common expression rules
statement   : declare;

//general expression
exprs       : l_exprs r_exprs
            | exprs+;

//compound
l_exprs     : IDENTIFIER;
r_exprs     :;

//value assignment
declare     : IDENTIFIER IDENTIFIER S_SET exprs+;