
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

bool isLeafNode(struct TrieNode* root)
{
    return root->isEndOfWord != false;
}
//level = 0, num = 0
void ViewFavoriteList(TrieNode* root, string str, int level, Node FList[], int num)
{
    if (isLeafNode(root))
    {
        str[level] = '\0'; 
        FList[num]->word = str;
        FList[num]->content = root->content;
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
