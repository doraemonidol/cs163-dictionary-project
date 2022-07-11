#pragma comment(lib, "user32.lib")
#include "mainFunction.h"
#include "main.h"
#include "game.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] 
void main() {
    srand(time(NULL));
    TrieNode *fav = 0, *key = 0, *def = 0;
    HistoryNode* his = 0;
    int wordCount;
    string curDataset = "";
    ShowWindow(GetConsoleWindow(), SW_SHOW);
    //InitializeTrie(key, def, "slang.txt", wordCount);
    inputData(key, def, curDataset, fav, his, wordCount);
    //cout << ">>" << wordCount << endl;
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    cs163dictionaryproject::mainFunction form(def, key, fav, his, wordCount, convertString(curDataset));
    Application::Run(% form);
}

