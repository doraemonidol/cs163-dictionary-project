#include "feature.h"

void editDefinition(TrieNode* def, TrieNode* key, TrieNode* node, string newDef)
{
    string keyword = def->content;
    remove(def, key->content, 0);
    insert(def, keyword, newDef);
    node->content = newDef;
}

bool AddFavourite(TrieNode* favouriteTrie, string& keyword)
{
    return (insert(favouriteTrie, keyword, ""));
}

bool RemoveFavourite(TrieNode* favouriteTrie, string& keyword)
{
    return (remove(favouriteTrie, keyword, 0));
}

void AdjustHistory(HistoryNode*& root, string& keyword)
{
    HistoryNode* add = new HistoryNode;
    add->word = keyword;
    add->next = root->next;
    root = add;
    HistoryNode* pCur = root;
    int count = 1;
    while (pCur->next) {
        count++;
        if (count > 10) {
            delete pCur->next;
            pCur->next = nullptr;
            break;
        }
        pCur = pCur->next;
    }
}

//level = 0, num = 0
void ViewFavoriteList(TrieNode* root, string str, int level, Node FList[], int num)
{
    if (isLeafNode(root)) {
        str[level] = '\0';
        FList[num].word = str;
        FList[num].content = root->content;
        num++;
        //cout << str << " " << root->content << endl;
    }

    for (int i = 0; i < 128; i++) {
        if (root->children[i]) {
            str[level] = i;
            ViewFavoriteList(root->children[i], str, level + 1, FList, num);
        }
    }
}