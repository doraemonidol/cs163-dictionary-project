#pragma once	
#include "main.h"
#include "feature.h"

TrieNode* getNode();
bool insert(TrieNode* root, string key, string content);
TrieNode* search(TrieNode* root, string key);
bool isEmpty(TrieNode* root);
bool remove(TrieNode* root, string& key, int depth = 0);
bool AddKey(TrieNode* keywordTrie, TrieNode* definitionTrie, string& keyword, string& definition);
bool RemoveKey(TrieNode* keywordTrie, TrieNode* definitionTrie, string& keyword);
bool isLeafNode(TrieNode* root);