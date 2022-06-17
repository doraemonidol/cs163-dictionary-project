#include "mainFunction.h"
#include "main.h"
#include "game.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] 
void main() {
    TrieNode* fav = 0, * key = 0, * def = 0;
    HistoryNode* his;
    int wordCount;
    string curDataset;
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    cs163dictionaryproject::mainFunction form;
    Application::Run(% form);
}