#include "../FormPaint.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VPaint::FormPaint form;
	Application::Run(% form);
	return 0;
}