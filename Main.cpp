#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	 Equation::Main form;
	Application::Run(% form);

}