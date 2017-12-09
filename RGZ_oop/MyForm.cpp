#include "MyForm.h"
#include <iostream>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RGZ_oop::MyForm form;
	Application::Run(%form);
	setlocale(LC_ALL, "");
}
