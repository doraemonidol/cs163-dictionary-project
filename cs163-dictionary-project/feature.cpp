#include "main.h"
#include "feature.h"
#include "function.h"

void editDefinition(TrieNode* def, TrieNode* key, TrieNode* node, string newDef)
{
    string keyword = def->content;
    remove(def, key->content, 0);
    insert(def, keyword, newDef);
    node->content = newDef;
}

TrieNode* AddFavourite(TrieNode* favouriteTrie, string& keyword)
{
    insert(favouriteTrie, keyword, "");
    return favouriteTrie;
}

TrieNode* RemoveFavourite(TrieNode* favouriteTrie, string& keyword)
{
    remove(favouriteTrie, keyword, 0);
    return favouriteTrie;
}

HistoryNode* AdjustHistory(HistoryNode* root, string& keyword)
{
    HistoryNode* add = new HistoryNode;
    add->word = keyword;
    if (root)
        add->next = root;
    root = add;
    HistoryNode* pCur = root, *pre = nullptr;
    int count = 1;
    while (pCur && pCur->next) {
        count++;
        if (pCur->next->word == keyword) {
            pre = pCur->next->next;
            delete pCur->next;
            pCur->next = pre;
            count--;
        }
        if (count > MAX_HISTORY) {
            delete pCur->next;
            pCur->next = nullptr;
            break;
        }
        pre = pCur;
        pCur = pCur->next;
    }
    cout << count << "hist\n";
    return root;
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