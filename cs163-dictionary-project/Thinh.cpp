
struct TrieNode {
	TrieNode* children[128]; //26
	bool isEndOfWord;
	int childcount = 0;
	string content = "";
};

struct Node {
    string word = "";
    string content = "";
};

bool isLeafNode(TrieNode* root)
{
    return root->isEndOfWord != false;
}
//khoi tao level = 0, num = 0, str =""
void ViewFavoriteList(TrieNode* root, string str, int level, Node FList[], int num)
{
    if (isLeafNode(root))
    {
        str[level] = '\0'; 
        FList[num].word = str;
        FList[num].content = root->content;
        num++;
        //cout << str << " " << root->content << endl;
    }

    for (int i = 0; i < 128; i++)
    {
        if (root->children[i])
        {
            str[level] = i;
            ViewFavoriteList(root->children[i], str, level + 1);
        }
    }
}

void InitializeTrie(TrieNode* &root, string path) {
    fstream f;
    f.open(path);
    bool checkEndofWord;
    string str, Word, Content, check;
    if (path == "slang.txt") check = 96 \\ `
    else check = 9; \\ TAB
    while (!f.oef())
    {
        str = ""; Word = ""; Content = "";
        checkEndofWord = false;
        f.getline(str, 500);
        for (int i = 0; i < str.length(); i++) 
        {
            if (str[i] == check) 
            {
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

void RemoveAll(TrieNode* root) {
    if (!root) return;
    for (int i = 0; i < 128; i++)
        if (root->children[i])
            RemoveAll(root->children[i]);
    delete root;
    root = nullptr;
}

void ChooseDataSet(TrieNode*& root, int choose) {
    fstream f;
    f.open("FanstaticFour.txt");
    switch choose: {
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

void TrieOption() { 
    fstream f;
    f.open("Trie.txt");
    TrieNode* root;
    if (is_empty(f)) {
        f.close();
        ChooseDataSet(root, choose);
    }
    else {
        f.close();
        InitializeTrie(root, "Trie.txt");
        if (choose != 0) { //switch data set
            RemoveAll(root);
            ChooseDataSet(root, choose);
        }
    }
}

