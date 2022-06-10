#include "function.h"

void randomWord(TrieNode* root, string &key, string &def, int n) {
	
	TrieNode* a = traverse(root, key, n, 0); 
	def = a->content; 
}

TrieNode* traverse(TrieNode* root, string &res, int n, int x) {
	
	if (n == 1) {
		res = res.substr(0, x); 
		return root;
	}
	if (root->isEndOfWord) --n; 
	for (int i = 0; i < 128; i++) {
		if (root->children[i]) {
			res[x] = i; 
			return traverse(root->children[i], res, n, x+1); 
		}
	}
}

int randomNum(int n) {
	srand(time(NULL));
	int x = rand();
	x = (x % n + n) % n + 1;
	return x; 
}

void gameGuessKey(TrieNode* root, int n, int mode) {
	string key1, key2, key3, key4; 
	string def1, def2, def3, def4; 

	int x1 = randomNum(n); int x2, x3, x4;
	do{
		x2 = randomNum(n); 
	} while (x1 == x2); 

	do {
		x3 = randomNum(n); 
	} while (x1 == x3 || x2 == x3); 

	do {
		x4 = randomNum(n); 
	} while (x1 == x4 || x2 == x4 || x3 == x4); 

	randomWord(root, key1, def1, x1); 
	randomWord(root, key2, def2, x2);
	randomWord(root, key3, def3, x3);
	randomWord(root, key4, def4, x4);
}