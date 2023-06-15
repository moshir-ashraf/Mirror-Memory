#pragma once
using namespace System::IO;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
ref class Block
{
	Label^ showhide,^alwaysshow;
	Button^ btn; Block^ Linked;
	Block(Label^ x, Label^ y, Button^ z);
	void Link(Block^ x);
	void toogle(bool x);
	void correct();
};

