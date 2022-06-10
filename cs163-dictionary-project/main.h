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
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
#pragma warning(disable : 4996)

struct TrieNode {
	TrieNode* children[128]; //26
	bool isEndOfWord;
	int childcount = 0;
	string content = "";
};

struct HistoryNode {
	string word = "";
	HistoryNode* next = nullptr;
};

struct Node {
    string word = "";
    string content = "";
};