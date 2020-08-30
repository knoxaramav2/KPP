// KPP.cpp : Defines the entry point for the application.
//

#include "KPP.h"
#include "Parser.h"

using namespace std;

int main()
{
	cout << "KNX++ Compiler" << endl;

	try {
		Parser p;

	}
	catch (exception e) {
		cout << e.what() << endl;
	}

	return 0;
}
