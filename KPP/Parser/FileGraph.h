#pragma once

#include <string>
#include <vector>

struct Macro {
	std::string key;
	std::string value;
};

class PageNode {
	
	std::string _path;
	std::vector<PageNode> _includes;
	std::vector<Macro> _macros;

public:

	PageNode();

};

