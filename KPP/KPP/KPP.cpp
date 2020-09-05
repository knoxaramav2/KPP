// KPP.cpp : Defines the entry point for the application.
//

#include <tuple>
#include <SymbolTable.h>
#include <Token.h>
#include <Config.h>
#include <Util.h>

#include "KPP.h"
#include "Parser.h"

using namespace std;


tuple<string, string> getCliKeyVal(string input) {

	size_t loc = input.find("=");
	string key = input.substr(0, loc);
	string val = input.substr(loc+1, input.length()-loc);

	return tuple<string, string>{key, val};
}

void cliParser(int argc, char**argv) {

	bool fatal = false;

	string execDir = argv[0];
	size_t bs = execDir.find_last_of('\\');
	size_t fs = execDir.find_last_of('/');

	if (bs == string::npos && fs == string::npos) {
		_config.execDir = execDir;
	}
	else if (bs == string::npos && fs != string::npos) {
		_config.execDir = execDir.substr(0, fs);
	}
	else if (fs == string::npos && bs != string::npos) {
		_config.execDir = execDir.substr(0, bs);
	}
	else {
		_config.execDir = execDir.substr(0, bs > fs ? bs : fs);
	}

	cout << _config.execDir << endl;
	for (int i = 1; i < argc; ++i) {

		string op = argv[i];

		if (op.length() == 1 || op[0] != '-') {
			cout << "Invalid switch or argument " + op << endl;
			continue;
		}

		if (op[1] == '-') {

			string key, val;
			
			if (op.find('=') != string::npos) {
				tie(key, val) = getCliKeyVal(op.substr(2, op.length() - 2));
			}
			else {
				key = op;
			}

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
					_reporter.Add(Error(ErrorLevel::Error, 
						"Invalid verbosity level '"+val+"'"));
				}
			}
			else if(key == "source") {
				_config.srcFile = val;
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
					_config.suppressErrors = true;
					break;
				case 'e'://warnings elevated to errors
					_config.wError = true;
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

	cliParser(argc, argv);

	Parser parser(_config.srcFile);
	parser.PreParse();

	cout << "Done." << endl;

	return 0;
}
