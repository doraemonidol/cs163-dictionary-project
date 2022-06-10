#include "mainFunction.h"
#include "main.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] 
void main() {
    TrieNode* fav = 0, * key = 0, * def = 0;
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    cs163dictionaryproject::mainFunction form;
    Application::Run(% form);
}