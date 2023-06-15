#include "Level 2.h"
#pragma once

namespace Mirror_Memory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Level1
	/// </summary>
	public ref class Level1 : public System::Windows::Forms::Form
	{
	public:
		Level1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Level1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Plane1;
	private: System::Windows::Forms::Button^ Medic2;
	protected:




	private: System::Windows::Forms::Button^ Medic1;

	private: System::Windows::Forms::Button^ Umbrella1;
	private: System::Windows::Forms::Button^ Ball2;


	private: System::Windows::Forms::Button^ Umbrella2;
	private: System::Windows::Forms::Button^ Ball1;


	private: System::Windows::Forms::Button^ Plane2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Lp1;
	private: System::Windows::Forms::Label^ Lp2;
	private: System::Windows::Forms::Label^ U1;



	private: System::Windows::Forms::Label^ U2;
	private: System::Windows::Forms::Label^ B2;



	private: System::Windows::Forms::Label^ B1;
	private: System::Windows::Forms::Label^ M1;
	private: System::Windows::Forms::Label^ M2;
	private: System::Windows::Forms::Button^ Check;

	private: System::Windows::Forms::Label^ M1T;
	private: System::Windows::Forms::Label^ M2T;
	private: System::Windows::Forms::Label^ Lp1T;
	private: System::Windows::Forms::Label^ U2T;
	private: System::Windows::Forms::Label^ B2T;
	private: System::Windows::Forms::Label^ Lp2T;
	private: System::Windows::Forms::Label^ B1T;
	private: System::Windows::Forms::Label^ U1T;
	private: System::Windows::Forms::Label^ Vocab;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Next;


	private: System::ComponentModel::IContainer^ components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Plane1 = (gcnew System::Windows::Forms::Button());
			this->Medic2 = (gcnew System::Windows::Forms::Button());
			this->Medic1 = (gcnew System::Windows::Forms::Button());
			this->Umbrella1 = (gcnew System::Windows::Forms::Button());
			this->Ball2 = (gcnew System::Windows::Forms::Button());
			this->Umbrella2 = (gcnew System::Windows::Forms::Button());
			this->Ball1 = (gcnew System::Windows::Forms::Button());
			this->Plane2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Lp1 = (gcnew System::Windows::Forms::Label());
			this->Lp2 = (gcnew System::Windows::Forms::Label());
			this->U1 = (gcnew System::Windows::Forms::Label());
			this->U2 = (gcnew System::Windows::Forms::Label());
			this->B2 = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::Label());
			this->M1 = (gcnew System::Windows::Forms::Label());
			this->M2 = (gcnew System::Windows::Forms::Label());
			this->Check = (gcnew System::Windows::Forms::Button());
			this->M1T = (gcnew System::Windows::Forms::Label());
			this->M2T = (gcnew System::Windows::Forms::Label());
			this->Lp1T = (gcnew System::Windows::Forms::Label());
			this->U2T = (gcnew System::Windows::Forms::Label());
			this->B2T = (gcnew System::Windows::Forms::Label());
			this->Lp2T = (gcnew System::Windows::Forms::Label());
			this->B1T = (gcnew System::Windows::Forms::Label());
			this->U1T = (gcnew System::Windows::Forms::Label());
			this->Vocab = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Plane1
			// 
			this->Plane1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Plane1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Plane1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Plane1->Location = System::Drawing::Point(396, 49);
			this->Plane1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Plane1->Name = L"Plane1";
			this->Plane1->Size = System::Drawing::Size(183, 146);
			this->Plane1->TabIndex = 2;
			this->Plane1->Text = L"✈";
			this->Plane1->UseVisualStyleBackColor = false;
			this->Plane1->Click += gcnew System::EventHandler(this, &Level1::Plane1_Click);
			// 
			// Medic2
			// 
			this->Medic2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Medic2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Medic2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Medic2->Location = System::Drawing::Point(396, 207);
			this->Medic2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Medic2->Name = L"Medic2";
			this->Medic2->Size = System::Drawing::Size(181, 150);
			this->Medic2->TabIndex = 3;
			this->Medic2->Text = L"☂";
			this->Medic2->UseVisualStyleBackColor = false;
			this->Medic2->Click += gcnew System::EventHandler(this, &Level1::Medic2_Click);
			// 
			// Medic1
			// 
			this->Medic1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Medic1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Medic1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Medic1->Location = System::Drawing::Point(211, 49);
			this->Medic1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Medic1->Name = L"Medic1";
			this->Medic1->Size = System::Drawing::Size(177, 146);
			this->Medic1->TabIndex = 4;
			this->Medic1->Text = L"⛑";
			this->Medic1->UseVisualStyleBackColor = false;
			this->Medic1->Click += gcnew System::EventHandler(this, &Level1::Medic1_Click);
			// 
			// Umbrella1
			// 
			this->Umbrella1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Umbrella1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Umbrella1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Umbrella1->Location = System::Drawing::Point(396, 367);
			this->Umbrella1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Umbrella1->Name = L"Umbrella1";
			this->Umbrella1->Size = System::Drawing::Size(177, 144);
			this->Umbrella1->TabIndex = 5;
			this->Umbrella1->Text = L"☂";
			this->Umbrella1->UseVisualStyleBackColor = false;
			this->Umbrella1->Click += gcnew System::EventHandler(this, &Level1::Umbrella1_Click);
			// 
			// Ball2
			// 
			this->Ball2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Ball2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ball2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Ball2->Location = System::Drawing::Point(21, 49);
			this->Ball2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Ball2->Name = L"Ball2";
			this->Ball2->Size = System::Drawing::Size(177, 146);
			this->Ball2->TabIndex = 6;
			this->Ball2->Text = L"⛑";
			this->Ball2->UseVisualStyleBackColor = false;
			this->Ball2->Click += gcnew System::EventHandler(this, &Level1::Ball2_Click);
			// 
			// Umbrella2
			// 
			this->Umbrella2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Umbrella2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Umbrella2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Umbrella2->Location = System::Drawing::Point(21, 209);
			this->Umbrella2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Umbrella2->Name = L"Umbrella2";
			this->Umbrella2->Size = System::Drawing::Size(181, 146);
			this->Umbrella2->TabIndex = 7;
			this->Umbrella2->Text = L"⚽";
			this->Umbrella2->UseVisualStyleBackColor = false;
			this->Umbrella2->Click += gcnew System::EventHandler(this, &Level1::Umbrella2_Click);
			// 
			// Ball1
			// 
			this->Ball1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Ball1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ball1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Ball1->Location = System::Drawing::Point(211, 367);
			this->Ball1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Ball1->Name = L"Ball1";
			this->Ball1->Size = System::Drawing::Size(177, 140);
			this->Ball1->TabIndex = 8;
			this->Ball1->Text = L"⚽";
			this->Ball1->UseVisualStyleBackColor = false;
			this->Ball1->Click += gcnew System::EventHandler(this, &Level1::Ball1_Click);
			// 
			// Plane2
			// 
			this->Plane2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Plane2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Plane2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Plane2->Location = System::Drawing::Point(21, 367);
			this->Plane2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Plane2->Name = L"Plane2";
			this->Plane2->Size = System::Drawing::Size(181, 140);
			this->Plane2->TabIndex = 9;
			this->Plane2->Text = L"✈";
			this->Plane2->UseVisualStyleBackColor = false;
			this->Plane2->Click += gcnew System::EventHandler(this, &Level1::Plane2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(253, 199);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 27);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Level 1";
			this->label1->Click += gcnew System::EventHandler(this, &Level1::label1_Click);
			// 
			// Lp1
			// 
			this->Lp1->AutoSize = true;
			this->Lp1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Lp1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lp1->ForeColor = System::Drawing::Color::Teal;
			this->Lp1->Location = System::Drawing::Point(413, 69);
			this->Lp1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lp1->Name = L"Lp1";
			this->Lp1->Size = System::Drawing::Size(139, 96);
			this->Lp1->TabIndex = 11;
			this->Lp1->Text = L"✈";
			this->Lp1->Visible = false;
			this->Lp1->Click += gcnew System::EventHandler(this, &Level1::label2_Click);
			// 
			// Lp2
			// 
			this->Lp2->AutoSize = true;
			this->Lp2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Lp2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lp2->ForeColor = System::Drawing::Color::Teal;
			this->Lp2->Location = System::Drawing::Point(39, 394);
			this->Lp2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lp2->Name = L"Lp2";
			this->Lp2->Size = System::Drawing::Size(139, 96);
			this->Lp2->TabIndex = 12;
			this->Lp2->Text = L"✈";
			this->Lp2->Visible = false;
			this->Lp2->Click += gcnew System::EventHandler(this, &Level1::Lp2_Click);
			// 
			// U1
			// 
			this->U1->AutoSize = true;
			this->U1->BackColor = System::Drawing::Color::LavenderBlush;
			this->U1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->U1->ForeColor = System::Drawing::Color::Teal;
			this->U1->Location = System::Drawing::Point(413, 394);
			this->U1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->U1->Name = L"U1";
			this->U1->Size = System::Drawing::Size(139, 96);
			this->U1->TabIndex = 13;
			this->U1->Text = L"☂";
			this->U1->Visible = false;
			this->U1->Click += gcnew System::EventHandler(this, &Level1::U1_Click);
			// 
			// U2
			// 
			this->U2->AutoSize = true;
			this->U2->BackColor = System::Drawing::Color::LavenderBlush;
			this->U2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->U2->ForeColor = System::Drawing::Color::Teal;
			this->U2->Location = System::Drawing::Point(39, 239);
			this->U2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->U2->Name = L"U2";
			this->U2->Size = System::Drawing::Size(139, 96);
			this->U2->TabIndex = 14;
			this->U2->Text = L"☂";
			this->U2->Visible = false;
			this->U2->Click += gcnew System::EventHandler(this, &Level1::label5_Click);
			// 
			// B2
			// 
			this->B2->AutoSize = true;
			this->B2->BackColor = System::Drawing::Color::LavenderBlush;
			this->B2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B2->ForeColor = System::Drawing::Color::Teal;
			this->B2->Location = System::Drawing::Point(39, 79);
			this->B2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(139, 96);
			this->B2->TabIndex = 15;
			this->B2->Text = L"⚽";
			this->B2->Visible = false;
			this->B2->Click += gcnew System::EventHandler(this, &Level1::B2_Click);
			// 
			// B1
			// 
			this->B1->AutoSize = true;
			this->B1->BackColor = System::Drawing::Color::LavenderBlush;
			this->B1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B1->ForeColor = System::Drawing::Color::Teal;
			this->B1->Location = System::Drawing::Point(228, 394);
			this->B1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(139, 96);
			this->B1->TabIndex = 16;
			this->B1->Text = L"⚽";
			this->B1->Visible = false;
			this->B1->Click += gcnew System::EventHandler(this, &Level1::B1_Click);
			// 
			// M1
			// 
			this->M1->AutoSize = true;
			this->M1->BackColor = System::Drawing::Color::LavenderBlush;
			this->M1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M1->ForeColor = System::Drawing::Color::Teal;
			this->M1->Location = System::Drawing::Point(228, 69);
			this->M1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->M1->Name = L"M1";
			this->M1->Size = System::Drawing::Size(139, 96);
			this->M1->TabIndex = 17;
			this->M1->Text = L"⛑";
			this->M1->Visible = false;
			this->M1->Click += gcnew System::EventHandler(this, &Level1::M1_Click);
			// 
			// M2
			// 
			this->M2->AutoSize = true;
			this->M2->BackColor = System::Drawing::Color::LavenderBlush;
			this->M2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M2->ForeColor = System::Drawing::Color::Teal;
			this->M2->Location = System::Drawing::Point(413, 226);
			this->M2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->M2->Name = L"M2";
			this->M2->Size = System::Drawing::Size(139, 96);
			this->M2->TabIndex = 18;
			this->M2->Text = L"⛑";
			this->M2->Visible = false;
			this->M2->Click += gcnew System::EventHandler(this, &Level1::M2_Click);
			// 
			// Check
			// 
			this->Check->BackColor = System::Drawing::Color::FloralWhite;
			this->Check->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Check->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Check->Location = System::Drawing::Point(245, 270);
			this->Check->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Check->Name = L"Check";
			this->Check->Size = System::Drawing::Size(100, 28);
			this->Check->TabIndex = 19;
			this->Check->Text = L"CHECK";
			this->Check->UseVisualStyleBackColor = false;
			this->Check->Click += gcnew System::EventHandler(this, &Level1::button1_Click_1);
			// 
			// M1T
			// 
			this->M1T->AutoSize = true;
			this->M1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->M1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M1T->ForeColor = System::Drawing::Color::Teal;
			this->M1T->Location = System::Drawing::Point(413, 226);
			this->M1T->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->M1T->Name = L"M1T";
			this->M1T->Size = System::Drawing::Size(139, 96);
			this->M1T->TabIndex = 20;
			this->M1T->Text = L"⛑";
			this->M1T->Visible = false;
			this->M1T->Click += gcnew System::EventHandler(this, &Level1::M1T_Click);
			// 
			// M2T
			// 
			this->M2T->AutoSize = true;
			this->M2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->M2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M2T->ForeColor = System::Drawing::Color::Teal;
			this->M2T->Location = System::Drawing::Point(228, 69);
			this->M2T->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->M2T->Name = L"M2T";
			this->M2T->Size = System::Drawing::Size(139, 96);
			this->M2T->TabIndex = 21;
			this->M2T->Text = L"⛑";
			this->M2T->Visible = false;
			// 
			// Lp1T
			// 
			this->Lp1T->AutoSize = true;
			this->Lp1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->Lp1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lp1T->ForeColor = System::Drawing::Color::Teal;
			this->Lp1T->Location = System::Drawing::Point(413, 69);
			this->Lp1T->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lp1T->Name = L"Lp1T";
			this->Lp1T->Size = System::Drawing::Size(139, 96);
			this->Lp1T->TabIndex = 22;
			this->Lp1T->Text = L"✈";
			this->Lp1T->Visible = false;
			this->Lp1T->Click += gcnew System::EventHandler(this, &Level1::Lp1T_Click);
			// 
			// U2T
			// 
			this->U2T->AutoSize = true;
			this->U2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->U2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->U2T->ForeColor = System::Drawing::Color::Teal;
			this->U2T->Location = System::Drawing::Point(39, 244);
			this->U2T->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->U2T->Name = L"U2T";
			this->U2T->Size = System::Drawing::Size(139, 96);
			this->U2T->TabIndex = 23;
			this->U2T->Text = L"☂";
			this->U2T->Visible = false;
			// 
			// B2T
			// 
			this->B2T->AutoSize = true;
			this->B2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->B2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B2T->ForeColor = System::Drawing::Color::Teal;
			this->B2T->Location = System::Drawing::Point(39, 79);
			this->B2T->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->B2T->Name = L"B2T";
			this->B2T->Size = System::Drawing::Size(139, 96);
			this->B2T->TabIndex = 24;
			this->B2T->Text = L"⚽";
			this->B2T->Visible = false;
			// 
			// Lp2T
			// 
			this->Lp2T->AutoSize = true;
			this->Lp2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->Lp2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lp2T->ForeColor = System::Drawing::Color::Teal;
			this->Lp2T->Location = System::Drawing::Point(39, 394);
			this->Lp2T->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Lp2T->Name = L"Lp2T";
			this->Lp2T->Size = System::Drawing::Size(139, 96);
			this->Lp2T->TabIndex = 25;
			this->Lp2T->Text = L"✈";
			this->Lp2T->Visible = false;
			// 
			// B1T
			// 
			this->B1T->AutoSize = true;
			this->B1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->B1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B1T->ForeColor = System::Drawing::Color::Teal;
			this->B1T->Location = System::Drawing::Point(228, 394);
			this->B1T->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->B1T->Name = L"B1T";
			this->B1T->Size = System::Drawing::Size(139, 96);
			this->B1T->TabIndex = 26;
			this->B1T->Text = L"⚽";
			this->B1T->Visible = false;
			// 
			// U1T
			// 
			this->U1T->AutoSize = true;
			this->U1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->U1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 42.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->U1T->ForeColor = System::Drawing::Color::Teal;
			this->U1T->Location = System::Drawing::Point(413, 394);
			this->U1T->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->U1T->Name = L"U1T";
			this->U1T->Size = System::Drawing::Size(139, 96);
			this->U1T->TabIndex = 27;
			this->U1T->Text = L"☂";
			this->U1T->Visible = false;
			// 
			// Vocab
			// 
			this->Vocab->AutoSize = true;
			this->Vocab->BackColor = System::Drawing::Color::Transparent;
			this->Vocab->Font = (gcnew System::Drawing::Font(L"Sylfaen", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vocab->ForeColor = System::Drawing::Color::Maroon;
			this->Vocab->Location = System::Drawing::Point(15, 15);
			this->Vocab->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Vocab->Name = L"Vocab";
			this->Vocab->Size = System::Drawing::Size(0, 31);
			this->Vocab->TabIndex = 28;
			this->Vocab->Click += gcnew System::EventHandler(this, &Level1::Vocab_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->label2->Location = System::Drawing::Point(331, 518);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 18);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Reminder : CHOOSE TWO AT A TIME ONLY";
			this->label2->Click += gcnew System::EventHandler(this, &Level1::label2_Click_1);
			// 
			// Next
			// 
			this->Next->BackColor = System::Drawing::Color::FloralWhite;
			this->Next->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Next->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Next->Location = System::Drawing::Point(245, 305);
			this->Next->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(100, 28);
			this->Next->TabIndex = 30;
			this->Next->Text = L"Next";
			this->Next->UseVisualStyleBackColor = false;
			this->Next->Visible = false;
			this->Next->Click += gcnew System::EventHandler(this, &Level1::Next_Click);
			// 
			// Level1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 559);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Vocab);
			this->Controls->Add(this->U1T);
			this->Controls->Add(this->B1T);
			this->Controls->Add(this->Lp2T);
			this->Controls->Add(this->B2T);
			this->Controls->Add(this->U2T);
			this->Controls->Add(this->Lp1T);
			this->Controls->Add(this->M2T);
			this->Controls->Add(this->M1T);
			this->Controls->Add(this->Check);
			this->Controls->Add(this->M2);
			this->Controls->Add(this->M1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->U2);
			this->Controls->Add(this->U1);
			this->Controls->Add(this->Lp2);
			this->Controls->Add(this->Lp1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Plane2);
			this->Controls->Add(this->Ball1);
			this->Controls->Add(this->Umbrella2);
			this->Controls->Add(this->Ball2);
			this->Controls->Add(this->Umbrella1);
			this->Controls->Add(this->Medic1);
			this->Controls->Add(this->Medic2);
			this->Controls->Add(this->Plane1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Level1";
			this->Text = L"Level1";
			this->Load += gcnew System::EventHandler(this, &Level1::Level1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int q = -1, f = -1, clicks = 0;

		Void checker(Button^ i, Label^ x, Label^ y, Label^ a, Label^ b, Label^ w, Label^ z, Label^ d, Label^ c)
		{


			if (q == 0 && f == 0)
			{
				B1T->Show();
				B2T->Show();
				Vocab->Text = L"Ball";
				Vocab->Show();
			}
			if (q == 1 && f == 1)
			{
				M1T->Show();
				M2T->Show();
				Vocab->Text = L"Medic";
				Vocab->Show();
			}
			if (q == 2 && f == 2)
			{
				U1T->Show();
				U2T->Show();
				Vocab->Text = L"Umbrella";
				Vocab->Show();
			}
			if (q == 3 && f == 3)
			{
				Lp1T->Show();
				Lp2T->Show();
				Vocab->Text = L"Airplane";
				Vocab->Show();
			}

			f = -1; q = -1;
			M2->Hide();
			B1->Hide();
			Lp1->Hide();
			Lp2->Hide();
			M1->Hide();
			B2->Hide();
			U1->Hide();
			U2->Hide();
			if (M2T->Visible == true &&
				B1T->Visible == true &&
				Lp1T->Visible == true &&
				Lp2T->Visible == true &&
				M1T->Visible == true &&
				B2T->Visible == true &&
				U1T->Visible == true &&
				U2T->Visible == true)
			{
				StreamWriter^ sw = gcnew StreamWriter("highscores.txt");
				sw->WriteLine(clicks);
				sw->Close();
				i->Show();

			}

		}

	private: System::Void Level1_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Medic2_Click(System::Object^ sender, System::EventArgs^ e) {

		M2->Show();
		B1->Hide();
		Lp1->Hide();
		Lp2->Hide();
		M1->Hide();
		B2->Hide();
		U1->Hide();
		U2->Hide();
		f = 1;
		Vocab->Hide();
		clicks++;
	}

	private: System::Void Medic1_Click(System::Object^ sender, System::EventArgs^ e) {

		M1->Show();
		B1->Hide();
		M2->Hide();
		Lp1->Hide();
		Lp2->Hide();
		B2->Hide();
		M2->Hide();
		U1->Hide();
		U2->Hide();
		q = 1;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Plane1_Click(System::Object^ sender, System::EventArgs^ e) {

		Lp1->Show();
		B2->Hide();
		M2->Hide();
		B1->Hide();
		Lp2->Hide();
		M1->Hide();
		M2->Hide();
		U1->Hide();
		U2->Hide();
		q = 3;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Umbrella2_Click(System::Object^ sender, System::EventArgs^ e) {

		U2->Show();
		B2->Hide();
		M2->Hide();
		Lp1->Hide();
		Lp2->Hide();
		M1->Hide();
		M2->Hide();
		U1->Hide();
		B1->Hide();
		f = 2;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void B2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ball2_Click(System::Object^ sender, System::EventArgs^ e) {

		B2->Show();
		B1->Hide();
		M2->Hide();
		Lp1->Hide();
		Lp2->Hide();
		M1->Hide();
		M2->Hide();
		U1->Hide();
		U2->Hide();
		f = 0;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Lp2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Plane2_Click(System::Object^ sender, System::EventArgs^ e) {

		Lp2->Show();
		B2->Hide();
		M2->Hide();
		Lp1->Hide();
		B1->Hide();
		M1->Hide();
		M2->Hide();
		U1->Hide();
		U2->Hide();
		f = 3;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void B1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ball1_Click(System::Object^ sender, System::EventArgs^ e) {

		B1->Show();
		B2->Hide();
		M2->Hide();
		Lp1->Hide();
		Lp2->Hide();
		M1->Hide();
		M2->Hide();
		U1->Hide();
		U2->Hide();
		q = 0;
		clicks++;
	}
	private: System::Void U1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Umbrella1_Click(System::Object^ sender, System::EventArgs^ e) {

		U1->Show();
		B2->Hide();
		M2->Hide();
		Lp1->Hide();
		Lp2->Hide();
		M1->Hide();
		M2->Hide();
		B1->Hide();
		U2->Hide();
		q = 2;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void M2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void M1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		checker(Next, B1, B2, M1, M2, U1, U2, Lp1, Lp2);
	}

	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Vocab_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
		Level2^ x = gcnew Level2();
		x->Show();
		this->Close();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Score_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Lp1T_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void M1T_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

