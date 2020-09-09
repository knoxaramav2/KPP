using namespace std;

#include <iostream>
#include <string>
#include <fstream>

#include "Parser.h"

#define IsWhiteSpace(c) ((c==' '||c=='\t'))

Parser::Parser(string src) {

	if (src == "") {
		_reporter.Add(Error(ErrorLevel::Error, "Unable to read file '" + src + "'"));
		return;
	}
	
	_src = src;

	_preParser = new PreParser();
}

void Parser::PreParse() {
	_preParser->PreParseProject(_src);
}


FileNode::FileNode(std::string src)
{
	this->_srcDir = src;
}

void FileNode::ReadFile() {
	ifstream file;

	file.open(_srcDir);
	if (!file.is_open()) {
		_reporter.Add(Error(ErrorLevel::Error, "Unable to read file '"+_srcDir+"'"));
		return;
	}

	file.seekg(0, ios::end);
	size_t fileSize = file.tellg();
	cout << ">> " << fileSize << endl;
}

PreParser::PreParser()
{
}

void PreParser::PreParseProject(std::string src) {
	cout << "Preparse" << src << endl;
	cout << _config.execDir << endl;
	ifstream file(src, ios::in | ios::binary);
	if (file.is_open()) {
		_reporter.Add(Error(ErrorLevel::Error, "Cannot open file " + src));
		return;
	}

	enum class ParseState {
		Normal,
		MultiLine,
		SQuote,
		DQuote,
		Directive,
	};

	file.seekg(0, ios::end);
	int fileSize = file.tellg();
	file.seekg(0, ios::beg);

	char* stream = new char[fileSize];
	file.read(stream, fileSize);

	int blockState = 0;
	ParseState state = ParseState::Normal;

	char p = ' ';
	bool freshLine = true;//True after normal state newline. False after non-whitespace.
	for (auto i = 0; i < fileSize; ++i) {
		char c = stream[i];

		if (state == ParseState::Normal) {
			if (IsWhiteSpace(c)) {

			}
		}
	}
	
	file.close();

}