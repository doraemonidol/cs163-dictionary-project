#include "main.h"
#include "function.h"
using namespace std;

bool AddKey(TrieNode* keywordTrie, TrieNode* definitionTrie, string& keyword, string& definition) {
	if (insert(keywordTrie, keyword, definition)) {
		insert(definitionTrie, definition, keyword);
		return true;
	}
	return false;
}

bool RemoveKey(TrieNode* keywordTrie, TrieNode* definitionTrie, string& keyword) {
	TrieNode* key = search(keywordTrie, keyword);
	if (!key) return false;
	string definition = key->content;
	remove(keywordTrie, keyword, 0);
	remove(definitionTrie, definition, 0);
	return true;
}

bool AddFavourite(TrieNode* favouriteTrie, string& keyword) {
	return (insert(favouriteTrie, keyword, ""));
}

bool RemoveFavourite(TrieNode* favouriteTrie, string& keyword) {
	return (remove(favouriteTrie, keyword, 0));
}

void AdjustHistory(HistoryNode*& root, string& keyword) {
	HistoryNode* add = new HistoryNode;
	add->word = keyword;
	add->next = root->next;
	root = add;
	HistoryNode* pCur = root;
	int count = 1;
	while (pCur->next) {
		count++;
		if (count>10){
			delete pCur->next;
			pCur->next = nullptr;
			break;
		}
		pCur = pCur->next;
	}
}