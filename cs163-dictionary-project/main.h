#pragma once
#include <chrono>
#include <conio.h>
#include <cstdio>
#include <ctime>
#include <direct.h>
#include <fstream>
#include <functional>
#include <io.h>
#include <iomanip>
#include <iostream>
#include <list>
#include <msclr/marshal_cppstd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <winuser.h>
#include <vector>
#include <stack>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
#pragma warning(disable : 4996)

const vector<string> DATASET_NAME = { "slang.txt", "emotional.txt", "EngToEng.txt", "EngToViet.txt", "VietToEng.txt" };
const int SUGGEST_LIST = 20;
const int REQUIRED_CHAR_NUM = 2;
const int MAX_HISTORY = 20;
const string DATA_DIR = "./data/";
const string DATASET_DIR = "./dataset/";

struct TrieNode {
    TrieNode* children[128]; //26
    bool isEndOfWord = false;
    int childcount = 0;
    string content = "";
};

namespace cs163dictionaryproject {
public
ref class Suggestion : public System::Object {
public:
    TrieNode* node;

public:
    Suggestion(TrieNode* in)
    {
        node = in;
    }
};
}

struct HistoryNode {
    string word = "";
    HistoryNode* next = nullptr;
};

struct Node {
    string word = "";
    string content = "";
};

struct FullDictTree {
    TrieNode* key;
    TrieNode* def;
};