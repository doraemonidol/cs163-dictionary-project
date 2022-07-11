#include "main.h"
#include "game.h"

void randomWord(TrieNode* root, string& key, string& def, int n)
{
    //cout << endl;
    key = def = "";
    TrieNode* a = traverse(root, key, n, 0);
    def = a->content;
}

TrieNode* traverse(TrieNode* root, string& res, int &n, int x)
{
    //cout << n << " " << x << " " << res << endl;
    if (!root)
        return nullptr;
    if (n == 1 && root->isEndOfWord) {
        //cout << "done";
        res = res.substr(0, x);
        return root;
    }
    if (root->isEndOfWord)
        --n;
    for (int i = 0; i < 128; i++) {
        if (root->children[i]) {
            if (x < res.length())
                res[x] = i;
            else
                res += i;

            TrieNode* m = traverse(root->children[i], res, n, x + 1);
            if (m)
                return m;
        }
    }
    return nullptr;
}

int randomNum(int n)
{
    int x = rand();
    x = (x % n + n) % n + 1;
    return x;
}