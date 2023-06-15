#include "Level 3.h"


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
	/// Summary for Level2
	/// </summary>
	public ref class Level2 : public System::Windows::Forms::Form
	{

	public:
		Level2(void)
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
		~Level2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Fountain2;
	protected:

	private: System::Windows::Forms::Button^ Coffee2;
	private: System::Windows::Forms::Button^ Fountain1;
	private: System::Windows::Forms::Button^ Pencil2;
	protected:




	protected:







	private: System::Windows::Forms::Button^ Coffee1;
	private: System::Windows::Forms::Button^ Pencil1;











	private: System::Windows::Forms::Button^ Rollers2;




	private: System::Windows::Forms::Label^ label1;














	private: System::Windows::Forms::Button^ Check;









	private: System::Windows::Forms::Label^ Vocab;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Tent2;


	private: System::Windows::Forms::Button^ Rollers1;
	private: System::Windows::Forms::Button^ Tent1;

	private: System::Windows::Forms::Label^ C1;
	private: System::Windows::Forms::Label^ F1;
	private: System::Windows::Forms::Label^ R1;
	private: System::Windows::Forms::Label^ T1;
	private: System::Windows::Forms::Label^ P1;
	private: System::Windows::Forms::Label^ F2;
	private: System::Windows::Forms::Label^ C2;
	private: System::Windows::Forms::Label^ P2;
	private: System::Windows::Forms::Label^ T2;
	private: System::Windows::Forms::Label^ R2;

	private: System::Windows::Forms::Label^ F1T;
	private: System::Windows::Forms::Label^ R1T;
	private: System::Windows::Forms::Label^ F2T;
	private: System::Windows::Forms::Label^ T1T;
	private: System::Windows::Forms::Label^ C2T;
	private: System::Windows::Forms::Label^ R2T;
	private: System::Windows::Forms::Label^ P1T;
	private: System::Windows::Forms::Label^ T2T;
	private: System::Windows::Forms::Label^ P2T;
	private: System::Windows::Forms::Label^ C1T;
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
			this->Fountain2 = (gcnew System::Windows::Forms::Button());
			this->Coffee2 = (gcnew System::Windows::Forms::Button());
			this->Fountain1 = (gcnew System::Windows::Forms::Button());
			this->Pencil2 = (gcnew System::Windows::Forms::Button());
			this->Coffee1 = (gcnew System::Windows::Forms::Button());
			this->Tent1 = (gcnew System::Windows::Forms::Button());
			this->Pencil1 = (gcnew System::Windows::Forms::Button());
			this->Rollers2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Check = (gcnew System::Windows::Forms::Button());
			this->Vocab = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Tent2 = (gcnew System::Windows::Forms::Button());
			this->Rollers1 = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Label());
			this->F1 = (gcnew System::Windows::Forms::Label());
			this->R1 = (gcnew System::Windows::Forms::Label());
			this->T1 = (gcnew System::Windows::Forms::Label());
			this->P1 = (gcnew System::Windows::Forms::Label());
			this->F2 = (gcnew System::Windows::Forms::Label());
			this->C2 = (gcnew System::Windows::Forms::Label());
			this->P2 = (gcnew System::Windows::Forms::Label());
			this->T2 = (gcnew System::Windows::Forms::Label());
			this->R2 = (gcnew System::Windows::Forms::Label());
			this->F1T = (gcnew System::Windows::Forms::Label());
			this->R1T = (gcnew System::Windows::Forms::Label());
			this->F2T = (gcnew System::Windows::Forms::Label());
			this->T1T = (gcnew System::Windows::Forms::Label());
			this->C2T = (gcnew System::Windows::Forms::Label());
			this->R2T = (gcnew System::Windows::Forms::Label());
			this->P1T = (gcnew System::Windows::Forms::Label());
			this->T2T = (gcnew System::Windows::Forms::Label());
			this->P2T = (gcnew System::Windows::Forms::Label());
			this->C1T = (gcnew System::Windows::Forms::Label());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Fountain2
			// 
			this->Fountain2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Fountain2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fountain2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Fountain2->Location = System::Drawing::Point(334, 55);
			this->Fountain2->Name = L"Fountain2";
			this->Fountain2->Size = System::Drawing::Size(85, 82);
			this->Fountain2->TabIndex = 2;
			this->Fountain2->UseVisualStyleBackColor = false;
			this->Fountain2->Click += gcnew System::EventHandler(this, &Level2::Plane1_Click);
			// 
			// Coffee2
			// 
			this->Coffee2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Coffee2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Coffee2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Coffee2->Location = System::Drawing::Point(334, 183);
			this->Coffee2->Name = L"Coffee2";
			this->Coffee2->Size = System::Drawing::Size(84, 85);
			this->Coffee2->TabIndex = 3;
			this->Coffee2->UseVisualStyleBackColor = false;
			this->Coffee2->Click += gcnew System::EventHandler(this, &Level2::Medic2_Click);
			// 
			// Fountain1
			// 
			this->Fountain1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Fountain1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fountain1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Fountain1->Location = System::Drawing::Point(122, 55);
			this->Fountain1->Name = L"Fountain1";
			this->Fountain1->Size = System::Drawing::Size(81, 82);
			this->Fountain1->TabIndex = 4;
			this->Fountain1->UseVisualStyleBackColor = false;
			this->Fountain1->Click += gcnew System::EventHandler(this, &Level2::Medic1_Click);
			// 
			// Pencil2
			// 
			this->Pencil2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Pencil2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pencil2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Pencil2->Location = System::Drawing::Point(334, 313);
			this->Pencil2->Name = L"Pencil2";
			this->Pencil2->Size = System::Drawing::Size(81, 80);
			this->Pencil2->TabIndex = 5;
			this->Pencil2->UseVisualStyleBackColor = false;
			this->Pencil2->Click += gcnew System::EventHandler(this, &Level2::Umbrella1_Click);
			// 
			// Coffee1
			// 
			this->Coffee1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Coffee1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Coffee1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Coffee1->Location = System::Drawing::Point(12, 55);
			this->Coffee1->Name = L"Coffee1";
			this->Coffee1->Size = System::Drawing::Size(81, 82);
			this->Coffee1->TabIndex = 6;
			this->Coffee1->UseVisualStyleBackColor = false;
			this->Coffee1->Click += gcnew System::EventHandler(this, &Level2::Ball2_Click);
			// 
			// Tent1
			// 
			this->Tent1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Tent1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tent1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Tent1->Location = System::Drawing::Point(12, 185);
			this->Tent1->Name = L"Tent1";
			this->Tent1->Size = System::Drawing::Size(84, 82);
			this->Tent1->TabIndex = 7;
			this->Tent1->UseVisualStyleBackColor = false;
			this->Tent1->Click += gcnew System::EventHandler(this, &Level2::Umbrella2_Click);
			// 
			// Pencil1
			// 
			this->Pencil1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Pencil1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pencil1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Pencil1->Location = System::Drawing::Point(122, 313);
			this->Pencil1->Name = L"Pencil1";
			this->Pencil1->Size = System::Drawing::Size(81, 77);
			this->Pencil1->TabIndex = 8;
			this->Pencil1->UseVisualStyleBackColor = false;
			this->Pencil1->Click += gcnew System::EventHandler(this, &Level2::Ball1_Click);
			// 
			// Rollers2
			// 
			this->Rollers2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Rollers2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rollers2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Rollers2->Location = System::Drawing::Point(12, 313);
			this->Rollers2->Name = L"Rollers2";
			this->Rollers2->Size = System::Drawing::Size(84, 77);
			this->Rollers2->TabIndex = 9;
			this->Rollers2->UseVisualStyleBackColor = false;
			this->Rollers2->Click += gcnew System::EventHandler(this, &Level2::Plane2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(185, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 21);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Level 2";
			this->label1->Click += gcnew System::EventHandler(this, &Level2::label1_Click);
			// 
			// Check
			// 
			this->Check->BackColor = System::Drawing::Color::FloralWhite;
			this->Check->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Check->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Check->Location = System::Drawing::Point(179, 219);
			this->Check->Name = L"Check";
			this->Check->Size = System::Drawing::Size(75, 23);
			this->Check->TabIndex = 19;
			this->Check->Text = L"CHECK";
			this->Check->UseVisualStyleBackColor = false;
			this->Check->Click += gcnew System::EventHandler(this, &Level2::button1_Click_1);
			// 
			// Vocab
			// 
			this->Vocab->AutoSize = true;
			this->Vocab->BackColor = System::Drawing::Color::Transparent;
			this->Vocab->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vocab->ForeColor = System::Drawing::Color::Maroon;
			this->Vocab->Location = System::Drawing::Point(12, 18);
			this->Vocab->Name = L"Vocab";
			this->Vocab->Size = System::Drawing::Size(0, 27);
			this->Vocab->TabIndex = 28;
			this->Vocab->Click += gcnew System::EventHandler(this, &Level2::Vocab_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->label2->Location = System::Drawing::Point(248, 421);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 15);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Reminder : CHECK TWO AT A TIME ONLY";
			this->label2->Click += gcnew System::EventHandler(this, &Level2::label2_Click_1);
			// 
			// Tent2
			// 
			this->Tent2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Tent2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tent2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Tent2->Location = System::Drawing::Point(229, 313);
			this->Tent2->Name = L"Tent2";
			this->Tent2->Size = System::Drawing::Size(81, 77);
			this->Tent2->TabIndex = 31;
			this->Tent2->UseVisualStyleBackColor = false;
			this->Tent2->Click += gcnew System::EventHandler(this, &Level2::button1_Click_2);
			// 
			// Rollers1
			// 
			this->Rollers1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Rollers1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rollers1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Rollers1->Location = System::Drawing::Point(229, 55);
			this->Rollers1->Name = L"Rollers1";
			this->Rollers1->Size = System::Drawing::Size(81, 82);
			this->Rollers1->TabIndex = 30;
			this->Rollers1->UseVisualStyleBackColor = false;
			this->Rollers1->Click += gcnew System::EventHandler(this, &Level2::button2_Click);
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::Color::LavenderBlush;
			this->C1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C1->ForeColor = System::Drawing::Color::Teal;
			this->C1->Location = System::Drawing::Point(29, 68);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(54, 54);
			this->C1->TabIndex = 32;
			this->C1->Text = L"☕";
			this->C1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C1->Visible = false;
			// 
			// F1
			// 
			this->F1->BackColor = System::Drawing::Color::LavenderBlush;
			this->F1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->F1->ForeColor = System::Drawing::Color::Teal;
			this->F1->Location = System::Drawing::Point(139, 68);
			this->F1->Name = L"F1";
			this->F1->Size = System::Drawing::Size(54, 54);
			this->F1->TabIndex = 33;
			this->F1->Text = L"⛲";
			this->F1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->F1->Visible = false;
			// 
			// R1
			// 
			this->R1->BackColor = System::Drawing::Color::LavenderBlush;
			this->R1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R1->ForeColor = System::Drawing::Color::Teal;
			this->R1->Location = System::Drawing::Point(242, 68);
			this->R1->Name = L"R1";
			this->R1->Size = System::Drawing::Size(54, 54);
			this->R1->TabIndex = 34;
			this->R1->Text = L"⛸";
			this->R1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->R1->Visible = false;
			// 
			// T1
			// 
			this->T1->BackColor = System::Drawing::Color::LavenderBlush;
			this->T1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1->ForeColor = System::Drawing::Color::Teal;
			this->T1->Location = System::Drawing::Point(29, 192);
			this->T1->Name = L"T1";
			this->T1->Size = System::Drawing::Size(54, 54);
			this->T1->TabIndex = 35;
			this->T1->Text = L"⛺";
			this->T1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->T1->Visible = false;
			// 
			// P1
			// 
			this->P1->BackColor = System::Drawing::Color::LavenderBlush;
			this->P1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1->ForeColor = System::Drawing::Color::Teal;
			this->P1->Location = System::Drawing::Point(139, 324);
			this->P1->Name = L"P1";
			this->P1->Size = System::Drawing::Size(54, 54);
			this->P1->TabIndex = 36;
			this->P1->Text = L"✏";
			this->P1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->P1->Visible = false;
			// 
			// F2
			// 
			this->F2->BackColor = System::Drawing::Color::LavenderBlush;
			this->F2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->F2->ForeColor = System::Drawing::Color::Teal;
			this->F2->Location = System::Drawing::Point(351, 68);
			this->F2->Name = L"F2";
			this->F2->Size = System::Drawing::Size(54, 54);
			this->F2->TabIndex = 37;
			this->F2->Text = L"⛲";
			this->F2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->F2->Visible = false;
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::LavenderBlush;
			this->C2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C2->ForeColor = System::Drawing::Color::Teal;
			this->C2->Location = System::Drawing::Point(351, 192);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(54, 54);
			this->C2->TabIndex = 38;
			this->C2->Text = L"☕";
			this->C2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C2->Visible = false;
			// 
			// P2
			// 
			this->P2->BackColor = System::Drawing::Color::LavenderBlush;
			this->P2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2->ForeColor = System::Drawing::Color::Teal;
			this->P2->Location = System::Drawing::Point(351, 324);
			this->P2->Name = L"P2";
			this->P2->Size = System::Drawing::Size(54, 54);
			this->P2->TabIndex = 39;
			this->P2->Text = L"✏";
			this->P2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->P2->Visible = false;
			// 
			// T2
			// 
			this->T2->BackColor = System::Drawing::Color::LavenderBlush;
			this->T2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2->ForeColor = System::Drawing::Color::Teal;
			this->T2->Location = System::Drawing::Point(242, 324);
			this->T2->Name = L"T2";
			this->T2->Size = System::Drawing::Size(54, 54);
			this->T2->TabIndex = 40;
			this->T2->Text = L"⛺";
			this->T2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->T2->Visible = false;
			// 
			// R2
			// 
			this->R2->BackColor = System::Drawing::Color::LavenderBlush;
			this->R2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R2->ForeColor = System::Drawing::Color::Teal;
			this->R2->Location = System::Drawing::Point(29, 324);
			this->R2->Name = L"R2";
			this->R2->Size = System::Drawing::Size(54, 54);
			this->R2->TabIndex = 41;
			this->R2->Text = L"⛸";
			this->R2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->R2->Visible = false;
			// 
			// F1T
			// 
			this->F1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->F1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->F1T->ForeColor = System::Drawing::Color::Teal;
			this->F1T->Location = System::Drawing::Point(139, 68);
			this->F1T->Name = L"F1T";
			this->F1T->Size = System::Drawing::Size(54, 54);
			this->F1T->TabIndex = 43;
			this->F1T->Text = L"⛲";
			this->F1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->F1T->Visible = false;
			this->F1T->Click += gcnew System::EventHandler(this, &Level2::F1T_Click);
			// 
			// R1T
			// 
			this->R1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->R1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R1T->ForeColor = System::Drawing::Color::Teal;
			this->R1T->Location = System::Drawing::Point(242, 68);
			this->R1T->Name = L"R1T";
			this->R1T->Size = System::Drawing::Size(54, 54);
			this->R1T->TabIndex = 44;
			this->R1T->Text = L"⛸";
			this->R1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->R1T->Visible = false;
			this->R1T->Click += gcnew System::EventHandler(this, &Level2::R1T_Click);
			// 
			// F2T
			// 
			this->F2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->F2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->F2T->ForeColor = System::Drawing::Color::Teal;
			this->F2T->Location = System::Drawing::Point(351, 68);
			this->F2T->Name = L"F2T";
			this->F2T->Size = System::Drawing::Size(54, 54);
			this->F2T->TabIndex = 45;
			this->F2T->Text = L"⛲";
			this->F2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->F2T->Visible = false;
			// 
			// T1T
			// 
			this->T1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->T1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1T->ForeColor = System::Drawing::Color::Teal;
			this->T1T->Location = System::Drawing::Point(29, 192);
			this->T1T->Name = L"T1T";
			this->T1T->Size = System::Drawing::Size(54, 54);
			this->T1T->TabIndex = 46;
			this->T1T->Text = L"⛺";
			this->T1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->T1T->Visible = false;
			this->T1T->Click += gcnew System::EventHandler(this, &Level2::T1T_Click);
			// 
			// C2T
			// 
			this->C2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->C2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C2T->ForeColor = System::Drawing::Color::Teal;
			this->C2T->Location = System::Drawing::Point(351, 192);
			this->C2T->Name = L"C2T";
			this->C2T->Size = System::Drawing::Size(54, 54);
			this->C2T->TabIndex = 47;
			this->C2T->Text = L"☕";
			this->C2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C2T->Visible = false;
			this->C2T->Click += gcnew System::EventHandler(this, &Level2::C2T_Click);
			// 
			// R2T
			// 
			this->R2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->R2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R2T->ForeColor = System::Drawing::Color::Teal;
			this->R2T->Location = System::Drawing::Point(29, 324);
			this->R2T->Name = L"R2T";
			this->R2T->Size = System::Drawing::Size(54, 54);
			this->R2T->TabIndex = 48;
			this->R2T->Text = L"⛸";
			this->R2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->R2T->Visible = false;
			// 
			// P1T
			// 
			this->P1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->P1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1T->ForeColor = System::Drawing::Color::Teal;
			this->P1T->Location = System::Drawing::Point(139, 324);
			this->P1T->Name = L"P1T";
			this->P1T->Size = System::Drawing::Size(54, 54);
			this->P1T->TabIndex = 49;
			this->P1T->Text = L"✏";
			this->P1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->P1T->Visible = false;
			this->P1T->Click += gcnew System::EventHandler(this, &Level2::P1T_Click);
			// 
			// T2T
			// 
			this->T2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->T2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2T->ForeColor = System::Drawing::Color::Teal;
			this->T2T->Location = System::Drawing::Point(242, 324);
			this->T2T->Name = L"T2T";
			this->T2T->Size = System::Drawing::Size(54, 54);
			this->T2T->TabIndex = 50;
			this->T2T->Text = L"⛺";
			this->T2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->T2T->Visible = false;
			this->T2T->Click += gcnew System::EventHandler(this, &Level2::T2T_Click);
			// 
			// P2T
			// 
			this->P2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->P2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2T->ForeColor = System::Drawing::Color::Teal;
			this->P2T->Location = System::Drawing::Point(351, 324);
			this->P2T->Name = L"P2T";
			this->P2T->Size = System::Drawing::Size(54, 54);
			this->P2T->TabIndex = 51;
			this->P2T->Text = L"✏";
			this->P2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->P2T->Visible = false;
			// 
			// C1T
			// 
			this->C1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->C1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C1T->ForeColor = System::Drawing::Color::Teal;
			this->C1T->Location = System::Drawing::Point(29, 68);
			this->C1T->Name = L"C1T";
			this->C1T->Size = System::Drawing::Size(54, 54);
			this->C1T->TabIndex = 42;
			this->C1T->Text = L"☕";
			this->C1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C1T->Visible = false;
			this->C1T->Click += gcnew System::EventHandler(this, &Level2::C1T_Click);
			// 
			// Next
			// 
			this->Next->BackColor = System::Drawing::Color::FloralWhite;
			this->Next->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Next->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Next->Location = System::Drawing::Point(179, 248);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(75, 23);
			this->Next->TabIndex = 52;
			this->Next->Text = L"Next";
			this->Next->UseVisualStyleBackColor = false;
			this->Next->Visible = false;
			this->Next->Click += gcnew System::EventHandler(this, &Level2::Next_Click);
			// 
			// Level2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 454);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->P2T);
			this->Controls->Add(this->T2T);
			this->Controls->Add(this->P1T);
			this->Controls->Add(this->R2T);
			this->Controls->Add(this->C2T);
			this->Controls->Add(this->T1T);
			this->Controls->Add(this->F2T);
			this->Controls->Add(this->R1T);
			this->Controls->Add(this->F1T);
			this->Controls->Add(this->C1T);
			this->Controls->Add(this->R2);
			this->Controls->Add(this->T2);
			this->Controls->Add(this->P2);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->F2);
			this->Controls->Add(this->P1);
			this->Controls->Add(this->T1);
			this->Controls->Add(this->R1);
			this->Controls->Add(this->F1);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->Tent2);
			this->Controls->Add(this->Rollers1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Vocab);
			this->Controls->Add(this->Check);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Rollers2);
			this->Controls->Add(this->Pencil1);
			this->Controls->Add(this->Tent1);
			this->Controls->Add(this->Coffee1);
			this->Controls->Add(this->Pencil2);
			this->Controls->Add(this->Fountain1);
			this->Controls->Add(this->Coffee2);
			this->Controls->Add(this->Fountain2);
			this->Name = L"Level2";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &Level2::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int q = -1, f = -1, clicks = 0;

		Void checker(Button^ i, Label^ x, Label^ y, Label^ a, Label^ b, Label^ w, Label^ z, Label^ d, Label^ c, Label^ h, Label^ k)
		{


			if (q == 0 && f == 0)
			{
				C1T->Show();
				C2T->Show();
				Vocab->Text = L"Coffee";
				Vocab->Show();
			}
			if (q == 1 && f == 1)
			{
				F1T->Show();
				F2T->Show();
				Vocab->Text = L"Fountain";
				Vocab->Show();
			}
			if (q == 2 && f == 2)
			{
				R1T->Show();
				R2T->Show();
				Vocab->Text = L"Roller-skates";
				Vocab->Show();
			}
			if (q == 3 && f == 3)
			{
				T1T->Show();
				T2T->Show();
				Vocab->Text = L"Tent";
				Vocab->Show();
			}
			if (q == 4 && f == 4)
			{
				P1T->Show();
				P2T->Show();
				Vocab->Text = L"Pencil";
				Vocab->Show();

			}

			f = -1; q = -1;;
			C2->Hide();
			C1->Hide();
			P1->Hide();
			P2->Hide();
			R1->Hide();
			R2->Hide();
			T1->Hide();
			T2->Hide();
			F1->Hide();
			F2->Hide();
			if (C2T->Visible == true &&
				C1T->Visible == true &&
				P1T->Visible == true &&
				P2T->Visible == true &&
				R1T->Visible == true &&
				R2T->Visible == true &&
				T1T->Visible == true &&
				T2T->Visible == true &&
				F1T->Visible == true &&
				F2T->Visible == true)
			{
				StreamWriter^ sw = gcnew StreamWriter("highscores.txt", true);
				sw->WriteLine(clicks);
				sw->Close();
				i->Show();
			}



		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

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
		C2->Show();
		C1->Hide();
		P1->Hide();
		P2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		F1->Hide();
		F2->Hide();
		clicks++;
		f = 0;
		Vocab->Hide();

	}

	private: System::Void Medic1_Click(System::Object^ sender, System::EventArgs^ e) {
		F1->Show();
		C2->Hide();
		P1->Hide();
		P2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		C1->Hide();
		F2->Hide();
		clicks++;
		q = 1;
		Vocab->Hide();

	}
	private: System::Void Plane1_Click(System::Object^ sender, System::EventArgs^ e) {
		F2->Show();
		C2->Hide();
		P1->Hide();
		P2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		F1->Hide();
		C1->Hide();
		clicks++;
		f = 1;
		Vocab->Hide();

	}
	private: System::Void Umbrella2_Click(System::Object^ sender, System::EventArgs^ e) {
		T1->Show();
		C2->Hide();
		P1->Hide();
		P2->Hide();
		R1->Hide();
		R2->Hide();
		C1->Hide();
		T2->Hide();
		F1->Hide();
		F2->Hide();
		clicks++;
		q = 3;
		Vocab->Hide();

	}
	private: System::Void B2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ball2_Click(System::Object^ sender, System::EventArgs^ e) {
		C1->Show();
		C2->Hide();
		P1->Hide();
		P2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		F1->Hide();
		F2->Hide();
		clicks++;
		q = 0;
		Vocab->Hide();

	}
	private: System::Void Lp2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Plane2_Click(System::Object^ sender, System::EventArgs^ e) {
		R2->Show();
		C2->Hide();
		P1->Hide();
		P2->Hide();
		R1->Hide();
		C1->Hide();
		T1->Hide();
		T2->Hide();
		F1->Hide();
		F2->Hide();
		clicks++;
		f = 2;
		Vocab->Hide();

	}
	private: System::Void B1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ball1_Click(System::Object^ sender, System::EventArgs^ e) {
		P1->Show();
		C2->Hide();
		C1->Hide();
		P2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		F1->Hide();
		F2->Hide();
		clicks++;
		q = 4;
		Vocab->Hide();

	}
	private: System::Void U1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Umbrella1_Click(System::Object^ sender, System::EventArgs^ e) {

		P2->Show();
		C2->Hide();
		P1->Hide();
		R1->Hide();
		C1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		F1->Hide();
		F2->Hide();
		clicks++;
		f = 4;
		Vocab->Hide();

	}
	private: System::Void M2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void M1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Vocab_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		T2->Show();
		C2->Hide();
		P1->Hide();
		P2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		C1->Hide();
		F1->Hide();
		F2->Hide();
		clicks++;
		f = 3;
		Vocab->Hide();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		R1->Show();
		C2->Hide();
		P1->Hide();
		P2->Hide();
		C1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		F1->Hide();
		F2->Hide();
		clicks++;
		q = 2;
		Vocab->Hide();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		checker(Next, C1, C2, F1, F2, R1, R2, T1, T2, P1, P2);
	}
	private: System::Void C1T_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void F1T_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void R1T_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void C2T_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void T1T_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void T2T_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void P1T_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
		Level3^ x = gcnew Level3();
		x->Show();
		this->Close();
		Button^ jeso;
		jeso->Text = "hi";

	}


	};
}

