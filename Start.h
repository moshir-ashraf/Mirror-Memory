#pragma once
#include "Register.h"
#include "Sign in.h"


namespace Mirror_Memory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Start
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)
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
		~Start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Rg2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ HS;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ timen;

	private: System::ComponentModel::IContainer^ components;


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
			this->components = (gcnew System::ComponentModel::Container());
			this->Rg2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->HS = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timen = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Rg2
			// 
			this->Rg2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rg2->Location = System::Drawing::Point(63, 104);
			this->Rg2->Margin = System::Windows::Forms::Padding(2);
			this->Rg2->Name = L"Rg2";
			this->Rg2->Size = System::Drawing::Size(102, 38);
			this->Rg2->TabIndex = 33;
			this->Rg2->Text = L"Register";
			this->Rg2->UseVisualStyleBackColor = true;
			this->Rg2->Click += gcnew System::EventHandler(this, &Start::Rg2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(62, 55);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 40);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Start::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(61, 155);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 38);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Start::button2_Click);
			// 
			// HS
			// 
			this->HS->AutoSize = true;
			this->HS->Font = (gcnew System::Drawing::Font(L"Agency FB", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HS->ForeColor = System::Drawing::Color::OrangeRed;
			this->HS->Location = System::Drawing::Point(12, 206);
			this->HS->Name = L"HS";
			this->HS->Size = System::Drawing::Size(50, 15);
			this->HS->TabIndex = 35;
			this->HS->Text = L"Last Score :";
			this->HS->Click += gcnew System::EventHandler(this, &Start::label2_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Start::timer1_Tick);
			// 
			// timen
			// 
			this->timen->AutoSize = true;
			this->timen->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timen->Location = System::Drawing::Point(100, 27);
			this->timen->Name = L"timen";
			this->timen->Size = System::Drawing::Size(25, 16);
			this->timen->TabIndex = 36;
			this->timen->Text = L"0:0";
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(238, 230);
			this->Controls->Add(this->timen);
			this->Controls->Add(this->HS);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Rg2);
			this->Controls->Add(this->button1);
			this->Name = L"Start";
			this->Text = L"Start";
			this->Load += gcnew System::EventHandler(this, &Start::Start_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void filesave()
		{
			String^ l1; String^ l2; String^ l3;
			String^ label;
			StreamReader^ SR = gcnew StreamReader("highscores.txt");
			l1 = SR->ReadLine(); l2 = SR->ReadLine(); l3 = SR->ReadLine();
			SR->Close();
			label = "Last Scores : L1(" + l1 + ") L2(" + l2 + ") L3(" + l3 + ")";
			HS -> Text = label;
		}
	private: System::Void Start_Load(System::Object^ sender, System::EventArgs^ e) {

		filesave();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Sign_in^ inn = gcnew Sign_in();
		inn->Show();
	}
	private: System::Void Rg2_Click(System::Object^ sender, System::EventArgs^ e) {
		Register^ regg = gcnew Register();
		regg->Show();
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	static int Second = 0;
	static int Minute = 0;
	String^ Sec;
	String^ Min;
	Second++;
	if (Second == 60)
	{
		Second = 0;
		Minute++;
	}
	Sec = Convert::ToString(Second);
	Min = Convert::ToString(Minute);
	timen->Text = Min + ":" + Sec;
}
};
}
