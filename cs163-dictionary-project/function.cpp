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

bool insert(TrieNode*& root, string key, string content) {
    if (!root)
        root = getNode();
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
    if (!root)
        return nullptr;
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
    if (!root)
        return true;
	return root->childcount == 0;
}

bool remove(TrieNode* root, string& key, int depth) {
	if (!root)
		return false;
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

void InitializeTrie(TrieNode*& key, TrieNode *& def, string path)
{
    ifstream f(path);
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
        insert(key, Word, Content);
        insert(def, Content, Word);
    }
    f.close();
}

void RemoveAll(TrieNode*& root)
{
    if (!root)
        return;
    for (int i = 0; i < 128; i++)
        if (root->children[i])
            RemoveAll(root->children[i]);
    delete root;
    root = nullptr;
}

FullDictTree ChooseDataSet(TrieNode* key, TrieNode* def, string datasetName)
{
    ofstream f("fanstatic4.txt");
    RemoveAll(key);
    RemoveAll(def);
    InitializeTrie(key, def, datasetName);
    // WRITE TRIE TO FILE here <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    FullDictTree dict;
    dict.key = key;
    dict.def = def;
    f << datasetName << endl;
    f.close();
    return dict;
}

bool TrieOption()
{
    fstream f;
    f.open("trie.txt");
    if (f.is_open()) {
        // READ IN BUILT-TRIE HERE
        f.close();
    } else {
        return false;
    }
    /*
        f.close();
        InitializeTrie(root, "trie.txt");
        if (choose != 0) { //switch data set
            RemoveAll(root);
            ChooseDataSet(root, choose);
        }
    */
    return true;
}

void inputData(string& curDatset) {
    ifstream f("fantastic4.txt");
    if (f.is_open()) {
        getline(f, curDatset);
        // INPUT TRIE FROM FILE here <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        f.close();
    } else {
        f.close();
        ofstream o("fantastic4.txt");
        o << datasetName[0] << endl;
        o.close();
        curDatset = datasetName[0];
    }
}

void FileToTrie(ifstream& f, TrieNode*& trie) {
    string s;
    trie = getNode();
    TrieNode* pCur;
    stack<TrieNode*> st;
    while (getline(f, s)) {
        pCur = trie;
        st = stack<TrieNode*>();
        for (char c : s) {
            if (c == 9) {//tab character
                pCur = st.top();
                st.pop();
            }
            else {
                pCur->children[c] = getNode();
                pCur->childcount++;
                st.push(pCur);
                pCur = pCur->children[c];
            }
        }
        pCur->isEndOfWord = true;
    }
}

void TrieToFile(ofstream& f, TrieNode*& trie) {

}