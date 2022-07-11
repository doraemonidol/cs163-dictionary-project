#pragma once	

System::String ^ convertString(string st);

TrieNode* getNode();
bool insert(TrieNode*& root, string key, string content);
TrieNode* search(TrieNode* root, string key);
TrieNode* searchContinue(TrieNode* root, char c);
bool isEmpty(TrieNode* root);
bool remove(TrieNode* root, string& key, int depth = 0);
bool AddKey(TrieNode* keywordTrie, TrieNode* definitionTrie, string& keyword, string& definition);
bool RemoveKey(TrieNode* keywordTrie, TrieNode* definitionTrie, string& keyword);
bool isLeafNode(TrieNode* root);
void InitializeTrie(TrieNode*& key, TrieNode*& def, string path, int& wordcount);
void RemoveAll(TrieNode*& root);
FullDictTree ChooseDataSet(TrieNode* key, TrieNode* def, string datasetName, int& wordcount);

void randomWord(TrieNode* root, string& key, string& def, int n);
TrieNode* traverse(TrieNode* root, string& res, int& n, int x);
int randomNum(int n);

void inputHistory(ifstream& in, HistoryNode*& his);
void outputHistory(ofstream& out, HistoryNode*& his);
void inputData(TrieNode*& key, TrieNode*& def, string& curDatset, TrieNode*& fav, HistoryNode*& his, int& wordCount);
void unloadData(TrieNode* key, TrieNode* def, string curDatset, TrieNode* fav, HistoryNode* his);

void RecursiveFileToTrie(ifstream& f, TrieNode* trie, int& wordCount);
void FileToTrie(ifstream& f, TrieNode*& trie, int& wordCount);
void TrieToFile(ofstream& f, TrieNode* trie);
