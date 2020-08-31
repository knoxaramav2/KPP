// KPP.cpp : Defines the entry point for the application.
//

#include <tuple>

#include "KPP.h"
#include "Parser.h"
#include <SymbolTable.h>
#include <Token.h>
#include <Config.h>

using namespace std;

Config _config;

tuple<string, string> getCliKeyVal(string input) {

	size_t loc = input.find("=");
	string key = input.substr(0, loc);
	string val = input.substr(loc+1, input.length()-loc);

	return tuple<string, string>{key, val};
}

void cliParser(int argc, char**argv) {

	bool fatal = false;

	for (int i = 1; i < argc; ++i) {

		string op = argv[i];

		if (op.length() == 1 || op[0] != '-') {
			cout << "Invalid switch or argument " + op << endl;
			continue;
		}

		if (op[1] == '-') {

			string key, val;
			tie(key, val) = getCliKeyVal(op.substr(2, op.length() - 2));

			if (key == "verbose") {//set verbosity
				if (val == "silent") {
					_config.verbosity = Verbosity::Silent;
				}
				else if (val == "normal")
				{
					_config.verbosity = Verbosity::Normal;
				}
				else if (val == "verbose") {
					_config.verbosity = Verbosity::Verbose;
				}
				else {
					
				}
			}
			else if(key == "source") {

			}
		}
		else {
			for (int j = 0; j < op.length(); ++j) {
				switch (op[j])
				{
				case 'v'://print version

					break;
				case 'd'://debug info
					_config.includeDebugMeta = true;
					break;
				case 'h'://help printout

					break;
				case 'w'://suppress warnings

					break;
				case 'e'://warnings elevated to errors

					break;
				default:
					break;
				}
			}
		}
	}

}

int main(int argc, char**argv, char*argx)
{
	cout << "KNX++ Compiler" << endl;
	cout << (int)_config.architecture << endl;

	cliParser(argc, argv);

	return 0;
}
