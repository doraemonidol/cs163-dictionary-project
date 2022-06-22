#pragma once

void editDefinition(TrieNode* def, TrieNode* key, TrieNode* node, string newDef);
TrieNode* AddFavourite(TrieNode* favouriteTrie, string& keyword);
TrieNode* RemoveFavourite(TrieNode* favouriteTrie, string& keyword);
HistoryNode* AdjustHistory(HistoryNode* root, string& keyword);
void ViewFavoriteList(TrieNode* root, string str, int level, Node FList[], int num);