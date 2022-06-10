#include "main.h"

void editDefinition(TrieNode* def, TrieNode* key, TrieNode* node, string newDef) {
    string keyword = def->content;
    remove(def, key->content);
    insert(def, keyword, newDef);
    node->content = newDef;
}