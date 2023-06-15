#include "Level 1.h"
#include "Level 2.h"
#include "Level 3.h"
#include "Register.h"
#include "Sign in.h"
#include "Start.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Mirror_Memory::Level1 L1;
	Mirror_Memory::Level2 L2;
	Mirror_Memory::Level3 L3;
	Mirror_Memory::Register reg;
	Mirror_Memory::Sign_in signin;
	Mirror_Memory::Start menu;
	Application::Run(% menu);
}

