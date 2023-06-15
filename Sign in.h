#pragma once
#include "Level 1.h"
#include "Register.h"
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
	/// Summary for Sign_in
	/// </summary>
	public ref class Sign_in : public System::Windows::Forms::Form
	{

	public:
		Sign_in(void)
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
		~Sign_in()
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
	private: System::Windows::Forms::Button^ User3;

	private: System::Windows::Forms::Label^ IDX;
	private: System::Windows::Forms::Button^ Rg2;
	private: System::Windows::Forms::Button^ User2;
	private: System::Windows::Forms::Button^ User1;

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
			this->User3 = (gcnew System::Windows::Forms::Button());
			this->IDX = (gcnew System::Windows::Forms::Label());
			this->Rg2 = (gcnew System::Windows::Forms::Button());
			this->User2 = (gcnew System::Windows::Forms::Button());
			this->User1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 34);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(530, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Parent  Login";
			this->label1->Click += gcnew System::EventHandler(this, &Sign_in::label1_Click);
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
			this->label2->Click += gcnew System::EventHandler(this, &Sign_in::label2_Click);
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
			this->puser->TextChanged += gcnew System::EventHandler(this, &Sign_in::textBox1_TextChanged);
			// 
			// ppass
			// 
			this->ppass->Location = System::Drawing::Point(179, 134);
			this->ppass->Margin = System::Windows::Forms::Padding(2);
			this->ppass->MaxLength = 500000;
			this->ppass->Name = L"ppass";
			this->ppass->Size = System::Drawing::Size(229, 20);
			this->ppass->TabIndex = 4;
			this->ppass->TextChanged += gcnew System::EventHandler(this, &Sign_in::ppass_TextChanged);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 214);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(204, 38);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Child  Login";
			this->label4->Click += gcnew System::EventHandler(this, &Sign_in::label4_Click);
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
			this->cuser->TextChanged += gcnew System::EventHandler(this, &Sign_in::cuser_TextChanged);
			// 
			// cpass
			// 
			this->cpass->Location = System::Drawing::Point(179, 321);
			this->cpass->Margin = System::Windows::Forms::Padding(2);
			this->cpass->MaxLength = 500000;
			this->cpass->Name = L"cpass";
			this->cpass->Size = System::Drawing::Size(229, 20);
			this->cpass->TabIndex = 9;
			this->cpass->TextChanged += gcnew System::EventHandler(this, &Sign_in::cpass_TextChanged);
			// 
			// User3
			// 
			this->User3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->User3->Location = System::Drawing::Point(579, 225);
			this->User3->Margin = System::Windows::Forms::Padding(2);
			this->User3->Name = L"User3";
			this->User3->Size = System::Drawing::Size(106, 39);
			this->User3->TabIndex = 10;
			this->User3->Text = L"User 3";
			this->User3->UseVisualStyleBackColor = true;
			this->User3->Click += gcnew System::EventHandler(this, &Sign_in::button1_Click);
			// 
			// IDX
			// 
			this->IDX->AutoSize = true;
			this->IDX->Font = (gcnew System::Drawing::Font(L"Agency FB", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDX->ForeColor = System::Drawing::Color::OrangeRed;
			this->IDX->Location = System::Drawing::Point(516, 379);
			this->IDX->Name = L"IDX";
			this->IDX->Size = System::Drawing::Size(226, 34);
			this->IDX->TabIndex = 30;
			this->IDX->Text = L"Data entered is INVALID !";
			this->IDX->Visible = false;
			// 
			// Rg2
			// 
			this->Rg2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rg2->Location = System::Drawing::Point(581, 340);
			this->Rg2->Margin = System::Windows::Forms::Padding(2);
			this->Rg2->Name = L"Rg2";
			this->Rg2->Size = System::Drawing::Size(103, 37);
			this->Rg2->TabIndex = 31;
			this->Rg2->Text = L"Register";
			this->Rg2->UseVisualStyleBackColor = true;
			this->Rg2->Visible = false;
			this->Rg2->Click += gcnew System::EventHandler(this, &Sign_in::Rg2_Click);
			// 
			// User2
			// 
			this->User2->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->User2->Location = System::Drawing::Point(578, 182);
			this->User2->Margin = System::Windows::Forms::Padding(2);
			this->User2->Name = L"User2";
			this->User2->Size = System::Drawing::Size(106, 39);
			this->User2->TabIndex = 32;
			this->User2->Text = L"User 2";
			this->User2->UseVisualStyleBackColor = true;
			this->User2->Click += gcnew System::EventHandler(this, &Sign_in::User2_Click);
			// 
			// User1
			// 
			this->User1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->User1->Location = System::Drawing::Point(578, 139);
			this->User1->Margin = System::Windows::Forms::Padding(2);
			this->User1->Name = L"User1";
			this->User1->Size = System::Drawing::Size(106, 39);
			this->User1->TabIndex = 33;
			this->User1->Text = L"User 1";
			this->User1->UseVisualStyleBackColor = true;
			this->User1->Click += gcnew System::EventHandler(this, &Sign_in::User1_Click);
			// 
			// Sign_in
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(752, 424);
			this->Controls->Add(this->User1);
			this->Controls->Add(this->User2);
			this->Controls->Add(this->Rg2);
			this->Controls->Add(this->IDX);
			this->Controls->Add(this->User3);
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
			this->Name = L"Sign_in";
			this->Text = L"Sign_in";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		String^ transfer(TextBox^ g, TextBox^ g1, TextBox^ g2, TextBox^ g3)
		{
			
			String^ o= g->Text + g1->Text + g2->Text + g3->Text;
			return o;
		}
		void readu3(String^ fn)
		{
			String^ rl; String^ dd; String^ dl; String^ dw; String^ dk;
			StreamReader^ sr = gcnew StreamReader("registeredusers3.txt");
			dd = sr->ReadLine();
			dl = sr->ReadLine();
			dw = sr->ReadLine();
			dk = sr->ReadLine();
			rl = dd + dl + dw + dk;
			sr->Close();
			if (rl == fn)
			{
				Level1^ x2 = gcnew Level1();
				x2->Show();
				this->Close();
			}
			else if (rl != fn)
			{
				IDX->Show();
				Rg2->Show();

			}
		}
		void readu2(String^ fn)
		{
			String^ rl; String^ dd; String^ dl; String^ dw; String^ dk;
			StreamReader^ sr = gcnew StreamReader("registeredusers2.txt");
			dd = sr->ReadLine();
			dl = sr->ReadLine();
			dw = sr->ReadLine();
			dk = sr->ReadLine();
			rl = dd + dl + dw + dk;
			sr->Close();
			if (rl == fn)
			{
				Level1^ x2 = gcnew Level1();
				x2->Show();
				this->Close();
			}
			else if (rl != fn)
			{
				IDX->Show();
				Rg2->Show();

			}
		}
		void readu1(String^ fn)
		{
			String^ rl; String^ dd; String^ dl; String^ dw; String^ dk;
			StreamReader^ sr = gcnew StreamReader("registeredusers1.txt");
			dd = sr->ReadLine();
			dl = sr->ReadLine();
			dw = sr->ReadLine();
			dk = sr->ReadLine();
			rl = dd + dl + dw + dk;
			sr->Close();
			if (rl == fn)
			{
				Level1^ x2 = gcnew Level1();
				x2->Show();
				this->Close();
			}
			else if(rl!=fn)
			{ 
				IDX->Show();
				Rg2->Show();

			}
		}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ck = transfer(puser, ppass, cuser, cpass);
		readu3(ck);
	}
	private: System::Void Rg2_Click(System::Object^ sender, System::EventArgs^ e) {
		Register^ trr = gcnew Register();
		trr->Show();
		this->Close();
	}
private: System::Void User2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ck = transfer(puser, ppass, cuser, cpass);
	readu2(ck);
}
private: System::Void User1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ck = transfer(puser, ppass, cuser, cpass);
	readu1(ck);
}
};
}


