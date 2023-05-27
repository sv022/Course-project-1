#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


namespace mycode {
	void totalynotoccupiedname() {
		1 + 1;
	}
	struct examplestruct {
		int a = 1;
	};
}


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Beef::MyForm form;
	Application::Run(% form);
}