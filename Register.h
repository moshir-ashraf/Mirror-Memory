#pragma once
#include <fstream>
#include "Level 1.h"
using namespace std;
using namespace System::IO;
namespace Mirror_Memory
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ puser;
	private: System::Windows::Forms::TextBox^ ppass;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ cuser;
	private: System::Windows::Forms::TextBox^ cpass;
	private: System::Windows::Forms::Button^ user3;

	private: System::Windows::Forms::Button^ user1;
	private: System::Windows::Forms::Button^ user2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->puser = (gcnew System::Windows::Forms::TextBox());
			this->ppass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cuser = (gcnew System::Windows::Forms::TextBox());
			this->cpass = (gcnew System::Windows::Forms::TextBox());
			this->user3 = (gcnew System::Windows::Forms::Button());
			this->user1 = (gcnew System::Windows::Forms::Button());
			this->user2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 34);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Parent  Registration ";
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 84);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->Click += gcnew System::EventHandler(this, &Register::label2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 122);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// puser
			// 
			this->puser->Location = System::Drawing::Point(179, 93);
			this->puser->Margin = System::Windows::Forms::Padding(2);
			this->puser->MaxLength = 500000;
			this->puser->Name = L"puser";
			this->puser->Size = System::Drawing::Size(229, 20);
			this->puser->TabIndex = 3;
			this->puser->TextChanged += gcnew System::EventHandler(this, &Register::textBox1_TextChanged);
			// 
			// ppass
			// 
			this->ppass->Location = System::Drawing::Point(179, 134);
			this->ppass->Margin = System::Windows::Forms::Padding(2);
			this->ppass->MaxLength = 500000;
			this->ppass->Name = L"ppass";
			this->ppass->Size = System::Drawing::Size(229, 20);
			this->ppass->TabIndex = 4;
			this->ppass->TextChanged += gcnew System::EventHandler(this, &Register::ppass_TextChanged);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 199);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(228, 38);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Child  Registration ";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 267);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 27);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Username";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(9, 312);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 27);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Password";
			// 
			// cuser
			// 
			this->cuser->Location = System::Drawing::Point(179, 280);
			this->cuser->Margin = System::Windows::Forms::Padding(2);
			this->cuser->MaxLength = 500000;
			this->cuser->Name = L"cuser";
			this->cuser->Size = System::Drawing::Size(229, 20);
			this->cuser->TabIndex = 8;
			this->cuser->TextChanged += gcnew System::EventHandler(this, &Register::cuser_TextChanged);
			// 
			// cpass
			// 
			this->cpass->Location = System::Drawing::Point(179, 321);
			this->cpass->Margin = System::Windows::Forms::Padding(2);
			this->cpass->MaxLength = 500000;
			this->cpass->Name = L"cpass";
			this->cpass->Size = System::Drawing::Size(229, 20);
			this->cpass->TabIndex = 9;
			this->cpass->TextChanged += gcnew System::EventHandler(this, &Register::cpass_TextChanged);
			// 
			// user3
			// 
			this->user3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user3->Location = System::Drawing::Point(579, 241);
			this->user3->Margin = System::Windows::Forms::Padding(2);
			this->user3->Name = L"user3";
			this->user3->Size = System::Drawing::Size(104, 43);
			this->user3->TabIndex = 10;
			this->user3->Text = L"User 3";
			this->user3->UseVisualStyleBackColor = true;
			this->user3->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// user1
			// 
			this->user1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user1->Location = System::Drawing::Point(579, 147);
			this->user1->Margin = System::Windows::Forms::Padding(2);
			this->user1->Name = L"user1";
			this->user1->Size = System::Drawing::Size(104, 43);
			this->user1->TabIndex = 11;
			this->user1->Text = L"User 1";
			this->user1->UseVisualStyleBackColor = true;
			this->user1->Click += gcnew System::EventHandler(this, &Register::user1_Click);
			// 
			// user2
			// 
			this->user2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user2->Location = System::Drawing::Point(579, 194);
			this->user2->Margin = System::Windows::Forms::Padding(2);
			this->user2->Name = L"user2";
			this->user2->Size = System::Drawing::Size(104, 43);
			this->user2->TabIndex = 12;
			this->user2->Text = L"User 2";
			this->user2->UseVisualStyleBackColor = true;
			this->user2->Click += gcnew System::EventHandler(this, &Register::button3_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(752, 418);
			this->Controls->Add(this->user2);
			this->Controls->Add(this->user1);
			this->Controls->Add(this->user3);
			this->Controls->Add(this->cpass);
			this->Controls->Add(this->cuser);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ppass);
			this->Controls->Add(this->puser);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Register";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void saveu1(TextBox^ x, TextBox^ y, TextBox^ z, TextBox^ w)
		{
			StreamReader^ srw = gcnew StreamReader("registeredusers1.txt");
			String^ srww = srw->ReadToEnd();
			srw->Close();
		
			StreamWriter^ sw = gcnew StreamWriter("registeredusers1.txt");
			sw->WriteLine(x->Text);
			sw->WriteLine(y->Text);
			sw->WriteLine(z->Text);
			sw->WriteLine(w->Text);
			sw->WriteLine(srww);
			sw->Close();
		}
		void saveu2(TextBox^ x, TextBox^ y, TextBox^ z, TextBox^ w)
		{
			StreamReader^ srw = gcnew StreamReader("registeredusers2.txt");
			String^ srww = srw->ReadToEnd();
			srw->Close();

			StreamWriter^ sw = gcnew StreamWriter("registeredusers2.txt");
			sw->WriteLine(x->Text);
			sw->WriteLine(y->Text);
			sw->WriteLine(z->Text);
			sw->WriteLine(w->Text);
			sw->WriteLine(srww);
			sw->Close();
		}
		void saveu3(TextBox^ x, TextBox^ y, TextBox^ z, TextBox^ w)
		{
			StreamReader^ srw = gcnew StreamReader("registeredusers3.txt");
			String^ srww = srw->ReadToEnd();
			srw->Close();

			StreamWriter^ sw = gcnew StreamWriter("registeredusers3.txt");
			sw->WriteLine(x->Text);
			sw->WriteLine(y->Text);
			sw->WriteLine(z->Text);
			sw->WriteLine(w->Text);
			sw->WriteLine(srww);
			sw->Close();
		}

#include <fstream >

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->puser->Text;
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void ppass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->ppass->Text;
	}
	private: System::Void cuser_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		 this->cuser->Text;
	}
	private: System::Void cpass_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->cpass->Text;

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{

		saveu3(puser, ppass, cuser, cpass);
		Level1^ x1 = gcnew Level1();
		x1->Show();
		this->Close();
	}
	private: System::Void Register_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		saveu2(puser, ppass, cuser, cpass);
		Level1^ x1 = gcnew Level1();
		x1->Show();
		this->Close();
	}
private: System::Void user1_Click(System::Object^ sender, System::EventArgs^ e) {
	saveu1(puser, ppass, cuser, cpass);
	Level1^ x1 = gcnew Level1();
	x1->Show();
	this->Close();
}
};
}


