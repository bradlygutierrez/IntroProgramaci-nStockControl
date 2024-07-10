#include "Login.h"
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StockControl::Login login;
	Application::Run(% login);

	User^ user = login.user;

	if(user != nullptr){
		printf("Exito");
	}
	else
	{
		printf("no exito");
	}
}
