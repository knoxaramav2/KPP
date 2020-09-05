#pragma once

#include <string>
#include <vector>

#include "../Config/Config.h"
#include "../Util/Util.h"

class FileNode {

	std::string _srcDir;
	std::string _raw;

	void ReadFile();

public:

	FileNode(std::string);

};


class PreParser {

	FileNode* _dpnMap;
public:

	PreParser();
	void PreParseProject(std::string);
};


class Parser {

	std::string _src;
	PreParser * _preParser;

	public:

	Parser(std::string srfFile);
	void PreParse();
};

