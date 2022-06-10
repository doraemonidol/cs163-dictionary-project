#include "function.h"

TrieNode* getNode() {
	TrieNode* pNode = new TrieNode;
	pNode->isEndOfWord = false;
	for (int i = 0; i < 128; i++)
		pNode->children[i] = NULL;
	return pNode;
}

bool insert(TrieNode* root, string key, string content) {
	TrieNode* pCur = root;
	for (int i = 0; i < key.length(); i++) {
		int index = key[i];
		if (!pCur->children[index])
			pCur->children[index] = getNode();
		pCur->childcount++;
		pCur = pCur->children[index];
	}
	if (!pCur->isEndOfWord) {
		pCur->isEndOfWord = true;
		pCur->content = content;
		return true;
	}
	return false;
}

TrieNode* search(TrieNode* root, string key) {
	TrieNode* pCur = root;
	for (int i = 0; i < key.length(); i++) {
		int index = key[i];
		if (!pCur->children[index])
			return nullptr;
		pCur = pCur->children[index];
	}
	if (pCur->isEndOfWord) return pCur;
	return nullptr;
}

bool isEmpty(TrieNode* root)
{
	return root->childcount == 0;
}

bool remove(TrieNode* root, string& key, int depth = 0) {
	if (!root)
		return NULL;
	if (depth == key.size()) {
		if (root->isEndOfWord)
			root->isEndOfWord = false;
		if (isEmpty(root)) {
			delete (root);
			root = NULL;
			return true;
		}
		return false;
	}
	int index = key[depth];
	bool isRemoved =
		remove(root->children[index], key, depth + 1);
	if (isRemoved) {
		root->childcount--;
		root->children[index] = NULL;
	}
	if (isRemoved && isEmpty(root) && root->isEndOfWord == false) {
		delete (root);
		root = NULL;
		return true;
	}
	return false;
}


bool AddKey(TrieNode* keywordTrie, TrieNode* definitionTrie, string& keyword, string& definition)
{
    if (insert(keywordTrie, keyword, definition)) {
        insert(definitionTrie, definition, keyword);
        return true;
    }
    return false;
}

bool RemoveKey(TrieNode* keywordTrie, TrieNode* definitionTrie, string& keyword)
{
    TrieNode* key = search(keywordTrie, keyword);
    if (!key)
        return false;
    string definition = key->content;
    remove(keywordTrie, keyword, 0);
    remove(definitionTrie, definition, 0);
    return true;
}

bool isLeafNode(TrieNode* root)
{
    return root->isEndOfWord != false;
}