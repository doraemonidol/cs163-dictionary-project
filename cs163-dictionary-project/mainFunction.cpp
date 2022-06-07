#include "mainFunction.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] 
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    cs163dictionaryproject::mainFunction form;
    Application::Run(% form);
}