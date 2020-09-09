#include <unordered_map>

#include "Storage.hpp"

using namespace std;


BNode::BNode(string key, void* data)
{
	hash<string> hasher;

	this->key = hasher(key);
	this->data = data;
	this->parent = this->left = this->right = nullptr;
}

BinTree::BinTree()
{
	_root = nullptr;
}

void* BinTree::Get(std::string key)
{
	hash<string> hasher;
	long hash = hasher(key);

	BNode* current = _root;

	while (current != nullptr) {
		if (hash == current->key) break;
		if (hash < current->key) current = current->left;
		else current = current->right;
	}

	return current;
}

bool BinTree::Add(void*data, std::string)
{
	BNode* node(key, data);

	if (_root == nullptr) {
		_root = node;
	}

	while (current != nullptr) {
		if (hash == current->key) return false;
		if (hash < current->key) {
			if (current->left == nullptr) {
				node->parent = current->left;
				current->left = node;
				return true;
			}
			else {
				current = current->left;
			}
		}
		else {
			if (current->right == nullptr) {
				node->parent = current->right;
				current->right = node;
				return true;
			}
			else {
				current = current->right;
			}
		}
	}

	return false;
}

bool BinTree::Delete(std::string key)
{
	hash<string> hasher;
	long hash = hasher(key);
	BNode* current = _root;
	while (current != nullptr) {
		if (hash == current->key) {
			if (current->data != nullptr) {
				delete current->data;
			}

			return true;
		}
		if (hash < current->key) current = current->left;
		else current = current->right;
	}

	return false;
}

BNode* FindBNode() {

}