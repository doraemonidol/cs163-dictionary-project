#pragma comment(lib, "user32.lib")
#include "mainFunction.h"
#include "main.h"
#include "game.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] 
void main() {
    srand(time(NULL));
    TrieNode* fav = 0, * key = 0, * def = 0;
    HistoryNode* his;
    int wordCount;
    string curDataset;
    ShowWindow(GetConsoleWindow(), SW_SHOW);
    InitializeTrie(key, def, "slang.txt", wordCount);

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    cs163dictionaryproject::mainFunction form;
    form.getData(def, key, fav, his, wordCount);
    Application::Run(% form);

    RemoveAll(key);
    RemoveAll(def);
}