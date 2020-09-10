grammar KPP;

import Common;
import Keyword;
import Operator;

options{
	language = Cpp;
}

kpp				: namespace C_OB C_CB;



namespace : T_NAMESPACE;