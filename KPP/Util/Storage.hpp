#pragma once

#include <string>

struct BNode {

	BNode(string key, void*data);

	BNode* parent;
	BNode* left;
	BNode* right;
	void* data;
	size_t key;
};

class BinTree {

	BNode* _root;

public:

	BinTree();

	void* Get(std::string);
	bool Add(void*, std::string);
	bool Delete(std::string);
};