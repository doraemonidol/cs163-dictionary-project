#include "main.h"
#include "feature.h"
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

bool remove(TrieNode* root, string& key, int depth) {
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

void InitializeTrie(TrieNode*& root, string path)
{
    fstream f;
    f.open(path);
    bool checkEndofWord;
    string str, Word, Content;
    char check;
    if (path == "slang.txt")
        check = 96; // ` 
    else check = 9; // TAB 
    while (!f.eof())
    {
        str = "";
        Word = "";
        Content = "";
        checkEndofWord = false;
        getline(f, str);
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == check) {
                checkEndofWord = true;
                Word += '\0';
            }
            if (!checkEndofWord)
                Word += str[i];
            else
                Content += str[i];
        }
        insert(root, Word, Content);
    }
    f.close();
}

void RemoveAll(TrieNode* root)
{
    if (!root)
        return;
    for (int i = 0; i < 128; i++)
        if (root->children[i])
            RemoveAll(root->children[i]);
    delete root;
    root = nullptr;
}

void ChooseDataSet(TrieNode*& root, int choose)
{
    fstream f;
    f.open("FanstaticFour.txt");
    switch
    (choose) {
    case 1: {
        InitializeTrie(root, "slang.txt");
        f << "slang.txt";
        break;
    }
    case 2: {
        InitializeTrie(root, "emotional.txt");
        f << "emotional.txt";
        break;
    }
    case 3: {
        InitializeTrie(root, "EngToEng.txt");
        f << "EngToEng.txt";
        break;
    }
    case 4: {
        InitializeTrie(root, "EngToViet.txt");
        f << "EngToViet.txt";
        break;
    }
    case 5: {
        InitializeTrie(root, "VietToEng.txt");
        f << "VietToEng.txt";
        break;
    }
    }
        f.close();
}

void TrieOption()
{
    fstream f;
    f.open("Trie.txt");
    int choose;
    TrieNode* root;
    if (f.is_open()) {
        f.close();
        ChooseDataSet(root, choose);
    } else {
        f.close();
        InitializeTrie(root, "Trie.txt");
        if (choose != 0) { //switch data set
            RemoveAll(root);
            ChooseDataSet(root, choose);
        }
    }
}