#include "main.h"
#include "feature.h"
#include "function.h"
#include "mainFunction.h"

System::String ^ convertString(string st) {
    return gcnew System::String(st.c_str());
};

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
           // cout << "ended";
		pCur->isEndOfWord = true;
		pCur->content = content;
		return true;
	}
	return false;
}

TrieNode* search(TrieNode* root, string key) {
    if (!root)
        return nullptr;
    //cout << "go";
	TrieNode* pCur = root;
	for (int i = 0; i < key.length(); i++) {
		int index = key[i];
            cout << i << " ";
		if (!pCur->children[index])
			return nullptr;
		pCur = pCur->children[index];
	}
	if (pCur->isEndOfWord) return pCur;
       //cout << "no";
	return nullptr;
}

TrieNode* searchContinue(TrieNode* root, char c) {
    if (!root)
        return nullptr;
    cout << "searchContinue OK!\n";
    return root->children[c];
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
        insert(keywordTrie, keyword, definition);
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

void InitializeTrie(TrieNode*& key, TrieNode *& def, string path, int &wordcount)
{
    ifstream f("./dataset/" + path);
    wordcount = 0;
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
                //Word += '\0';
                continue;
            }
            if (!checkEndofWord)
                Word += str[i];
            else {
                Content += str[i];
            }
        }
        insert(key, Word, Content);
        insert(def, Content, Word);
        //cout << Word << " " << Content << endl;
        wordcount++;
    }
    f.close();
}

void RemoveAll(TrieNode*& root)
{
    if (!root)
        return;
    for (int i = 0; i < 128; i++)
        if (root->children[i]) {
            RemoveAll(root->children[i]);
            root->children[i] = nullptr;
        }
    delete root;
    root = nullptr;
}

FullDictTree ChooseDataSet(TrieNode* key, TrieNode* def, string datasetName, int &wordcount)
{
    ofstream f("./dataset/fanstatic4.txt");
    RemoveAll(key);
    RemoveAll(def);
    InitializeTrie(key, def, datasetName, wordcount);
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
    f.open("./dataset/trie.txt");
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

void inputHistory(ifstream& in, HistoryNode*& his) {
    string s;
    while (getline(in, s)) {
        HistoryNode* cur = new HistoryNode;
        cur->word = s;
        cur->next = his;
        his = cur;
    }
}
void outputHistory(ofstream& out, HistoryNode*& his) {
    while (his) {
        HistoryNode* cur = his->next;
        out << his->word;
        delete his;
        his = cur;
    }
}

void inputData(TrieNode*& key, TrieNode*& def, string& curDatset, TrieNode*& fav, HistoryNode*& his, int& wordCount)
{
    key = def = fav = nullptr;
    his = nullptr;
    ifstream f("./dataset/fantastic4.txt");
    int tmp = 0;
    if (f.is_open()) {
        getline(f, curDatset);

        ifstream in("./dataset/favTrie.txt");
        if (in.is_open())
            FileToTrie(in, fav, tmp);
        in.close();

        in.open("./dataset/history.txt");
        if (in.is_open()) {
            inputHistory(in, his);
        }
        in.close();

        in.open("./dataset/keyTrie.txt");
        if (in.is_open())
            FileToTrie(in, key, wordCount);
        else {
            FullDictTree dict = ChooseDataSet(key, def, curDatset, wordCount);
            key = dict.key;
            def = dict.def;
            in.close();
            return;
        }
        in.close();

        in.open("./dataset/defTrie.txt");
        if (in.is_open())
            FileToTrie(in, def, tmp);
        else {
            FullDictTree dict = ChooseDataSet(key, def, curDatset, wordCount);
            key = dict.key;
            def = dict.def;
            in.close();
            return;
        }
        in.close();

        f.close();
    } else {
        f.close();
        ofstream o("./dataset/fantastic4.txt");
        o << DATASET_NAME[0] << endl;
        o.close();

        InitializeTrie(key, def, DATASET_NAME[0], wordCount);

        curDatset = DATASET_NAME[0];
    }
}

void FileToTrie(ifstream& f, TrieNode*& trie, int &wordCount) {
    string s;
    wordCount = 0;
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
        getline(f, s);
        pCur->content = s;
        pCur->isEndOfWord = true;
        wordCount++;
    }
}

void unloadData(TrieNode* key, TrieNode* def, string curDatset, TrieNode* fav, HistoryNode* his)
{
    ofstream o;
    o.open("./dataset/fantastic4.txt");
    o << curDatset << endl;
    o.close();

    o.open("./dataset/keyTrie.txt");
    if (o.is_open())
        TrieToFile(o, key);
    o.close();

    o.open("./dataset/defTrie.txt");
    if (o.is_open())
        TrieToFile(o, def);
    o.close();

    o.open("./dataset/favTrie.txt");
    if (o.is_open())
        TrieToFile(o, fav);
    o.close();

    o.open("./dataset/history.txt");
    if (o.is_open()) {
        outputHistory(o, his);
    }
    o.close();

    RemoveAll(key);
    RemoveAll(def);
    RemoveAll(fav);
}

void TrieToFile(ofstream& f, TrieNode*& trie) {

}