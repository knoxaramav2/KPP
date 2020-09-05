#pragma once

#include <string>
#include <vector>

class PageNode {
	
	std::string _path;
	std::vector<PageNode> _includes;

public:

	PageNode();

};

