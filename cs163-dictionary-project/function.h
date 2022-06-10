#pragma once
#include "main.h"
TrieNode* getNode(void);
void insert(TrieNode* root, string key, string content);

TrieNode* search(TrieNode* root, string key);

bool isEmpty(TrieNode* root);

bool remove(TrieNode* root, string& key, int depth = 0);