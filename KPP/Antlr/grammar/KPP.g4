grammar KPP;

import Common;
import Keyword;
import Operator;
import PreProcessor;

options{
	language = Cpp;
}

kpp				: exp+EOF;


exp				: namespace def_field;


namespace 		: T_NAMESPACE;
def_field		: s_class 		| //Define methods/structures
				  s_struct		|
				  s_func		|
				  s_global		|
				  s_shared;

s_class			: T_CLASS IDENTIFIER;
s_struct		:;
s_func			:;
s_global		:;
s_shared		:;//similar to extern