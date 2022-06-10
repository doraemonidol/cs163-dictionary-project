#pragma once
#include "main.h"
#include "function.h"

void editDefinition(TrieNode* def, TrieNode* key, TrieNode* node, string newDef);
bool AddFavourite(TrieNode* favouriteTrie, string& keyword);
bool RemoveFavourite(TrieNode* favouriteTrie, string& keyword);
void AdjustHistory(HistoryNode*& root, string& keyword);
void ViewFavoriteList(TrieNode* root, string str, int level, Node FList[], int num);