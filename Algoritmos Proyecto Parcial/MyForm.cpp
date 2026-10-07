#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ arg) //se pueden eliminar los argumentos del main
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew AlgoritmosProyectoFinal::MyForm());