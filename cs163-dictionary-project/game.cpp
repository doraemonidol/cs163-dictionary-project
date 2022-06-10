#include "main.h"
#include "game.h"

void randomWord(TrieNode* root, string& key, string& def, int n)
{

    TrieNode* a = traverse(root, key, n, 0);
    def = a->content;
}

TrieNode* traverse(TrieNode* root, string& res, int n, int x)
{

    if (n == 1) {
        res = res.substr(0, x);
        return root;
    }
    if (root->isEndOfWord)
        --n;
    for (int i = 0; i < 128; i++) {
        if (root->children[i]) {
            res[x] = i;
            return traverse(root->children[i], res, n, x + 1);
        }
    }
}

int randomNum(int n)
{
    srand(time(NULL));
    int x = rand();
    x = (x % n + n) % n + 1;
    return x;
}