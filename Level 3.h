#pragma once
#pragma once
using namespace System::IO;
namespace Mirror_Memory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Level3
	/// </summary>
	public ref class Level3 : public System::Windows::Forms::Form
	{
	public:
		Level3(void)
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
		~Level3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Swords2;
	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ Check;


	private: System::Windows::Forms::Label^ Vocab;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Snow1;

	private: System::Windows::Forms::Button^ Scales2;
	private: System::Windows::Forms::Button^ Cloud1;
	private: System::Windows::Forms::Button^ Gas1;



	private: System::Windows::Forms::Button^ Comet1;
	private: System::Windows::Forms::Button^ Boat1;
	private: System::Windows::Forms::Button^ Anchor2;




	private: System::Windows::Forms::Button^ Swords1;
	private: System::Windows::Forms::Button^ Comet2;
	private: System::Windows::Forms::Button^ Gas2;
	private: System::Windows::Forms::Button^ Snow2;





	private: System::Windows::Forms::Button^ Scales1;
	private: System::Windows::Forms::Button^ Anchor1;



	private: System::Windows::Forms::Button^ Cloud2;

	private: System::Windows::Forms::Button^ Telephone2;

	private: System::Windows::Forms::Button^ Telephone1;
	private: System::Windows::Forms::Button^ Boat2;
	private: System::Windows::Forms::Label^ G1;
	private: System::Windows::Forms::Label^ S1;
	private: System::Windows::Forms::Label^ T1;
	private: System::Windows::Forms::Label^ R1;
	private: System::Windows::Forms::Label^ L1;
	private: System::Windows::Forms::Label^ A1;
	private: System::Windows::Forms::Label^ C1;
	private: System::Windows::Forms::Label^ B1;
	private: System::Windows::Forms::Label^ A2;
	private: System::Windows::Forms::Label^ L2;
	private: System::Windows::Forms::Label^ T2;
	private: System::Windows::Forms::Label^ B2;
	private: System::Windows::Forms::Label^ C2;
	private: System::Windows::Forms::Label^ S2;
	private: System::Windows::Forms::Label^ G2;
	private: System::Windows::Forms::Label^ W1;
	private: System::Windows::Forms::Label^ W2;
	private: System::Windows::Forms::Label^ R2;
	private: System::Windows::Forms::Label^ R2T;
	private: System::Windows::Forms::Label^ W2T;
	private: System::Windows::Forms::Label^ W1T;
	private: System::Windows::Forms::Label^ G2T;
	private: System::Windows::Forms::Label^ S2T;
	private: System::Windows::Forms::Label^ C2T;
	private: System::Windows::Forms::Label^ B2T;
	private: System::Windows::Forms::Label^ T2T;
	private: System::Windows::Forms::Label^ L2T;
	private: System::Windows::Forms::Label^ A2T;
	private: System::Windows::Forms::Label^ B1T;
	private: System::Windows::Forms::Label^ C1T;
	private: System::Windows::Forms::Label^ A1T;
	private: System::Windows::Forms::Label^ L1T;
	private: System::Windows::Forms::Label^ R1T;
	private: System::Windows::Forms::Label^ T1T;
	private: System::Windows::Forms::Label^ S1T;
	private: System::Windows::Forms::Label^ G1T;
	private: System::Windows::Forms::Button^ Ex;


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
			this->Swords2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Check = (gcnew System::Windows::Forms::Button());
			this->Vocab = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Snow1 = (gcnew System::Windows::Forms::Button());
			this->Scales2 = (gcnew System::Windows::Forms::Button());
			this->Cloud1 = (gcnew System::Windows::Forms::Button());
			this->Gas1 = (gcnew System::Windows::Forms::Button());
			this->Comet1 = (gcnew System::Windows::Forms::Button());
			this->Boat1 = (gcnew System::Windows::Forms::Button());
			this->Anchor2 = (gcnew System::Windows::Forms::Button());
			this->Swords1 = (gcnew System::Windows::Forms::Button());
			this->Comet2 = (gcnew System::Windows::Forms::Button());
			this->Gas2 = (gcnew System::Windows::Forms::Button());
			this->Snow2 = (gcnew System::Windows::Forms::Button());
			this->Scales1 = (gcnew System::Windows::Forms::Button());
			this->Anchor1 = (gcnew System::Windows::Forms::Button());
			this->Cloud2 = (gcnew System::Windows::Forms::Button());
			this->Telephone2 = (gcnew System::Windows::Forms::Button());
			this->Telephone1 = (gcnew System::Windows::Forms::Button());
			this->Boat2 = (gcnew System::Windows::Forms::Button());
			this->G1 = (gcnew System::Windows::Forms::Label());
			this->S1 = (gcnew System::Windows::Forms::Label());
			this->T1 = (gcnew System::Windows::Forms::Label());
			this->R1 = (gcnew System::Windows::Forms::Label());
			this->L1 = (gcnew System::Windows::Forms::Label());
			this->A1 = (gcnew System::Windows::Forms::Label());
			this->C1 = (gcnew System::Windows::Forms::Label());
			this->B1 = (gcnew System::Windows::Forms::Label());
			this->A2 = (gcnew System::Windows::Forms::Label());
			this->L2 = (gcnew System::Windows::Forms::Label());
			this->T2 = (gcnew System::Windows::Forms::Label());
			this->B2 = (gcnew System::Windows::Forms::Label());
			this->C2 = (gcnew System::Windows::Forms::Label());
			this->S2 = (gcnew System::Windows::Forms::Label());
			this->G2 = (gcnew System::Windows::Forms::Label());
			this->W1 = (gcnew System::Windows::Forms::Label());
			this->W2 = (gcnew System::Windows::Forms::Label());
			this->R2 = (gcnew System::Windows::Forms::Label());
			this->R2T = (gcnew System::Windows::Forms::Label());
			this->W2T = (gcnew System::Windows::Forms::Label());
			this->W1T = (gcnew System::Windows::Forms::Label());
			this->G2T = (gcnew System::Windows::Forms::Label());
			this->S2T = (gcnew System::Windows::Forms::Label());
			this->C2T = (gcnew System::Windows::Forms::Label());
			this->B2T = (gcnew System::Windows::Forms::Label());
			this->T2T = (gcnew System::Windows::Forms::Label());
			this->L2T = (gcnew System::Windows::Forms::Label());
			this->A2T = (gcnew System::Windows::Forms::Label());
			this->B1T = (gcnew System::Windows::Forms::Label());
			this->C1T = (gcnew System::Windows::Forms::Label());
			this->A1T = (gcnew System::Windows::Forms::Label());
			this->L1T = (gcnew System::Windows::Forms::Label());
			this->R1T = (gcnew System::Windows::Forms::Label());
			this->T1T = (gcnew System::Windows::Forms::Label());
			this->S1T = (gcnew System::Windows::Forms::Label());
			this->G1T = (gcnew System::Windows::Forms::Label());
			this->Ex = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Swords2
			// 
			this->Swords2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Swords2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Swords2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Swords2->Location = System::Drawing::Point(400, 317);
			this->Swords2->Name = L"Swords2";
			this->Swords2->Size = System::Drawing::Size(76, 71);
			this->Swords2->TabIndex = 5;
			this->Swords2->UseVisualStyleBackColor = false;
			this->Swords2->Click += gcnew System::EventHandler(this, &Level3::Umbrella1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(214, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 21);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Level 3";
			this->label1->Click += gcnew System::EventHandler(this, &Level3::label1_Click);
			// 
			// Check
			// 
			this->Check->BackColor = System::Drawing::Color::FloralWhite;
			this->Check->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Check->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Check->Location = System::Drawing::Point(208, 242);
			this->Check->Name = L"Check";
			this->Check->Size = System::Drawing::Size(75, 23);
			this->Check->TabIndex = 19;
			this->Check->Text = L"CHECK";
			this->Check->UseVisualStyleBackColor = false;
			this->Check->Click += gcnew System::EventHandler(this, &Level3::button1_Click_1);
			// 
			// Vocab
			// 
			this->Vocab->AutoSize = true;
			this->Vocab->BackColor = System::Drawing::Color::Transparent;
			this->Vocab->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vocab->ForeColor = System::Drawing::Color::Maroon;
			this->Vocab->Location = System::Drawing::Point(12, 24);
			this->Vocab->Name = L"Vocab";
			this->Vocab->Size = System::Drawing::Size(0, 35);
			this->Vocab->TabIndex = 28;
			this->Vocab->Click += gcnew System::EventHandler(this, &Level3::Vocab_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->label2->Location = System::Drawing::Point(301, 417);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 15);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Reminder : CHECK TWO AT A TIME ONLY";
			this->label2->Click += gcnew System::EventHandler(this, &Level3::label2_Click_1);
			// 
			// Snow1
			// 
			this->Snow1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Snow1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Snow1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Snow1->Location = System::Drawing::Point(400, 235);
			this->Snow1->Name = L"Snow1";
			this->Snow1->Size = System::Drawing::Size(76, 71);
			this->Snow1->TabIndex = 32;
			this->Snow1->UseVisualStyleBackColor = false;
			this->Snow1->Click += gcnew System::EventHandler(this, &Level3::Snow1_Click);
			// 
			// Scales2
			// 
			this->Scales2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Scales2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Scales2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Scales2->Location = System::Drawing::Point(400, 158);
			this->Scales2->Name = L"Scales2";
			this->Scales2->Size = System::Drawing::Size(76, 71);
			this->Scales2->TabIndex = 33;
			this->Scales2->UseVisualStyleBackColor = false;
			this->Scales2->Click += gcnew System::EventHandler(this, &Level3::Scales2_Click);
			// 
			// Cloud1
			// 
			this->Cloud1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Cloud1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cloud1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Cloud1->Location = System::Drawing::Point(400, 73);
			this->Cloud1->Name = L"Cloud1";
			this->Cloud1->Size = System::Drawing::Size(76, 71);
			this->Cloud1->TabIndex = 35;
			this->Cloud1->UseVisualStyleBackColor = false;
			this->Cloud1->Click += gcnew System::EventHandler(this, &Level3::Cloud1_Click);
			// 
			// Gas1
			// 
			this->Gas1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Gas1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gas1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Gas1->Location = System::Drawing::Point(13, 73);
			this->Gas1->Name = L"Gas1";
			this->Gas1->Size = System::Drawing::Size(76, 71);
			this->Gas1->TabIndex = 39;
			this->Gas1->UseVisualStyleBackColor = false;
			this->Gas1->Click += gcnew System::EventHandler(this, &Level3::Gas1_Click);
			// 
			// Comet1
			// 
			this->Comet1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Comet1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Comet1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Comet1->Location = System::Drawing::Point(13, 158);
			this->Comet1->Name = L"Comet1";
			this->Comet1->Size = System::Drawing::Size(76, 71);
			this->Comet1->TabIndex = 38;
			this->Comet1->UseVisualStyleBackColor = false;
			this->Comet1->Click += gcnew System::EventHandler(this, &Level3::Comet1_Click);
			// 
			// Boat1
			// 
			this->Boat1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Boat1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boat1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Boat1->Location = System::Drawing::Point(13, 235);
			this->Boat1->Name = L"Boat1";
			this->Boat1->Size = System::Drawing::Size(76, 71);
			this->Boat1->TabIndex = 37;
			this->Boat1->UseVisualStyleBackColor = false;
			this->Boat1->Click += gcnew System::EventHandler(this, &Level3::Boat1_Click);
			// 
			// Anchor2
			// 
			this->Anchor2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Anchor2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Anchor2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Anchor2->Location = System::Drawing::Point(13, 317);
			this->Anchor2->Name = L"Anchor2";
			this->Anchor2->Size = System::Drawing::Size(76, 71);
			this->Anchor2->TabIndex = 36;
			this->Anchor2->UseVisualStyleBackColor = false;
			this->Anchor2->Click += gcnew System::EventHandler(this, &Level3::Anchor2_Click);
			// 
			// Swords1
			// 
			this->Swords1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Swords1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Swords1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Swords1->Location = System::Drawing::Point(305, 73);
			this->Swords1->Name = L"Swords1";
			this->Swords1->Size = System::Drawing::Size(76, 71);
			this->Swords1->TabIndex = 43;
			this->Swords1->UseVisualStyleBackColor = false;
			this->Swords1->Click += gcnew System::EventHandler(this, &Level3::Swords1_Click);
			// 
			// Comet2
			// 
			this->Comet2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Comet2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Comet2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Comet2->Location = System::Drawing::Point(305, 158);
			this->Comet2->Name = L"Comet2";
			this->Comet2->Size = System::Drawing::Size(76, 71);
			this->Comet2->TabIndex = 42;
			this->Comet2->UseVisualStyleBackColor = false;
			this->Comet2->Click += gcnew System::EventHandler(this, &Level3::Comet2_Click);
			// 
			// Gas2
			// 
			this->Gas2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Gas2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gas2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Gas2->Location = System::Drawing::Point(305, 235);
			this->Gas2->Name = L"Gas2";
			this->Gas2->Size = System::Drawing::Size(76, 71);
			this->Gas2->TabIndex = 41;
			this->Gas2->UseVisualStyleBackColor = false;
			this->Gas2->Click += gcnew System::EventHandler(this, &Level3::Gas2_Click);
			// 
			// Snow2
			// 
			this->Snow2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Snow2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Snow2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Snow2->Location = System::Drawing::Point(305, 317);
			this->Snow2->Name = L"Snow2";
			this->Snow2->Size = System::Drawing::Size(76, 71);
			this->Snow2->TabIndex = 40;
			this->Snow2->UseVisualStyleBackColor = false;
			this->Snow2->Click += gcnew System::EventHandler(this, &Level3::Snow2_Click);
			// 
			// Scales1
			// 
			this->Scales1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Scales1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Scales1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Scales1->Location = System::Drawing::Point(111, 73);
			this->Scales1->Name = L"Scales1";
			this->Scales1->Size = System::Drawing::Size(76, 71);
			this->Scales1->TabIndex = 47;
			this->Scales1->UseVisualStyleBackColor = false;
			this->Scales1->Click += gcnew System::EventHandler(this, &Level3::Scales1_Click);
			// 
			// Anchor1
			// 
			this->Anchor1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Anchor1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Anchor1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Anchor1->Location = System::Drawing::Point(111, 158);
			this->Anchor1->Name = L"Anchor1";
			this->Anchor1->Size = System::Drawing::Size(76, 71);
			this->Anchor1->TabIndex = 46;
			this->Anchor1->UseVisualStyleBackColor = false;
			this->Anchor1->Click += gcnew System::EventHandler(this, &Level3::Anchor1_Click);
			// 
			// Cloud2
			// 
			this->Cloud2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Cloud2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cloud2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Cloud2->Location = System::Drawing::Point(111, 235);
			this->Cloud2->Name = L"Cloud2";
			this->Cloud2->Size = System::Drawing::Size(76, 71);
			this->Cloud2->TabIndex = 45;
			this->Cloud2->UseVisualStyleBackColor = false;
			this->Cloud2->Click += gcnew System::EventHandler(this, &Level3::Cloud2_Click);
			// 
			// Telephone2
			// 
			this->Telephone2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Telephone2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Telephone2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Telephone2->Location = System::Drawing::Point(111, 317);
			this->Telephone2->Name = L"Telephone2";
			this->Telephone2->Size = System::Drawing::Size(76, 71);
			this->Telephone2->TabIndex = 44;
			this->Telephone2->UseVisualStyleBackColor = false;
			this->Telephone2->Click += gcnew System::EventHandler(this, &Level3::Telephone2_Click);
			// 
			// Telephone1
			// 
			this->Telephone1->BackColor = System::Drawing::Color::LavenderBlush;
			this->Telephone1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Telephone1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Telephone1->Location = System::Drawing::Point(207, 73);
			this->Telephone1->Name = L"Telephone1";
			this->Telephone1->Size = System::Drawing::Size(76, 71);
			this->Telephone1->TabIndex = 49;
			this->Telephone1->UseVisualStyleBackColor = false;
			this->Telephone1->Click += gcnew System::EventHandler(this, &Level3::Telephone1_Click);
			// 
			// Boat2
			// 
			this->Boat2->BackColor = System::Drawing::Color::LavenderBlush;
			this->Boat2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boat2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->Boat2->Location = System::Drawing::Point(207, 317);
			this->Boat2->Name = L"Boat2";
			this->Boat2->Size = System::Drawing::Size(76, 71);
			this->Boat2->TabIndex = 48;
			this->Boat2->UseVisualStyleBackColor = false;
			this->Boat2->Click += gcnew System::EventHandler(this, &Level3::Boat2_Click);
			// 
			// G1
			// 
			this->G1->BackColor = System::Drawing::Color::LavenderBlush;
			this->G1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->G1->ForeColor = System::Drawing::Color::Teal;
			this->G1->Location = System::Drawing::Point(27, 86);
			this->G1->Name = L"G1";
			this->G1->Size = System::Drawing::Size(46, 48);
			this->G1->TabIndex = 50;
			this->G1->Text = L"⛽";
			this->G1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->G1->Visible = false;
			this->G1->Click += gcnew System::EventHandler(this, &Level3::C1T_Click_1);
			// 
			// S1
			// 
			this->S1->BackColor = System::Drawing::Color::LavenderBlush;
			this->S1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S1->ForeColor = System::Drawing::Color::Teal;
			this->S1->Location = System::Drawing::Point(125, 86);
			this->S1->Name = L"S1";
			this->S1->Size = System::Drawing::Size(46, 48);
			this->S1->TabIndex = 51;
			this->S1->Text = L"⚖";
			this->S1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->S1->Visible = false;
			// 
			// T1
			// 
			this->T1->BackColor = System::Drawing::Color::LavenderBlush;
			this->T1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1->ForeColor = System::Drawing::Color::Teal;
			this->T1->Location = System::Drawing::Point(227, 86);
			this->T1->Name = L"T1";
			this->T1->Size = System::Drawing::Size(46, 48);
			this->T1->TabIndex = 52;
			this->T1->Text = L"☎";
			this->T1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->T1->Visible = false;
			// 
			// R1
			// 
			this->R1->BackColor = System::Drawing::Color::LavenderBlush;
			this->R1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R1->ForeColor = System::Drawing::Color::Teal;
			this->R1->Location = System::Drawing::Point(318, 86);
			this->R1->Name = L"R1";
			this->R1->Size = System::Drawing::Size(46, 48);
			this->R1->TabIndex = 53;
			this->R1->Text = L"⚔";
			this->R1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->R1->Visible = false;
			// 
			// L1
			// 
			this->L1->BackColor = System::Drawing::Color::LavenderBlush;
			this->L1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L1->ForeColor = System::Drawing::Color::Teal;
			this->L1->Location = System::Drawing::Point(412, 86);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(46, 48);
			this->L1->TabIndex = 54;
			this->L1->Text = L"☁";
			this->L1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->L1->Visible = false;
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::Color::LavenderBlush;
			this->A1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A1->ForeColor = System::Drawing::Color::Teal;
			this->A1->Location = System::Drawing::Point(125, 170);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(46, 48);
			this->A1->TabIndex = 55;
			this->A1->Text = L"⚓";
			this->A1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->A1->Visible = false;
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::Color::LavenderBlush;
			this->C1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C1->ForeColor = System::Drawing::Color::Teal;
			this->C1->Location = System::Drawing::Point(27, 170);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(46, 48);
			this->C1->TabIndex = 56;
			this->C1->Text = L"☄";
			this->C1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C1->Visible = false;
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::LavenderBlush;
			this->B1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B1->ForeColor = System::Drawing::Color::Teal;
			this->B1->Location = System::Drawing::Point(27, 242);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(46, 48);
			this->B1->TabIndex = 57;
			this->B1->Text = L"⛵";
			this->B1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->B1->Visible = false;
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::Color::LavenderBlush;
			this->A2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A2->ForeColor = System::Drawing::Color::Teal;
			this->A2->Location = System::Drawing::Point(27, 327);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(46, 48);
			this->A2->TabIndex = 58;
			this->A2->Text = L"⚓";
			this->A2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->A2->Visible = false;
			// 
			// L2
			// 
			this->L2->BackColor = System::Drawing::Color::LavenderBlush;
			this->L2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L2->ForeColor = System::Drawing::Color::Teal;
			this->L2->Location = System::Drawing::Point(125, 242);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(46, 48);
			this->L2->TabIndex = 59;
			this->L2->Text = L"☁";
			this->L2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->L2->Visible = false;
			// 
			// T2
			// 
			this->T2->BackColor = System::Drawing::Color::LavenderBlush;
			this->T2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2->ForeColor = System::Drawing::Color::Teal;
			this->T2->Location = System::Drawing::Point(125, 327);
			this->T2->Name = L"T2";
			this->T2->Size = System::Drawing::Size(46, 48);
			this->T2->TabIndex = 60;
			this->T2->Text = L"☎";
			this->T2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->T2->Visible = false;
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::LavenderBlush;
			this->B2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B2->ForeColor = System::Drawing::Color::Teal;
			this->B2->Location = System::Drawing::Point(227, 327);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(46, 48);
			this->B2->TabIndex = 61;
			this->B2->Text = L"⛵";
			this->B2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->B2->Visible = false;
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::LavenderBlush;
			this->C2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C2->ForeColor = System::Drawing::Color::Teal;
			this->C2->Location = System::Drawing::Point(318, 170);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(46, 48);
			this->C2->TabIndex = 62;
			this->C2->Text = L"☄";
			this->C2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C2->Visible = false;
			// 
			// S2
			// 
			this->S2->BackColor = System::Drawing::Color::LavenderBlush;
			this->S2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S2->ForeColor = System::Drawing::Color::Teal;
			this->S2->Location = System::Drawing::Point(412, 170);
			this->S2->Name = L"S2";
			this->S2->Size = System::Drawing::Size(46, 48);
			this->S2->TabIndex = 63;
			this->S2->Text = L"⚖";
			this->S2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->S2->Visible = false;
			// 
			// G2
			// 
			this->G2->BackColor = System::Drawing::Color::LavenderBlush;
			this->G2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->G2->ForeColor = System::Drawing::Color::Teal;
			this->G2->Location = System::Drawing::Point(318, 242);
			this->G2->Name = L"G2";
			this->G2->Size = System::Drawing::Size(46, 48);
			this->G2->TabIndex = 64;
			this->G2->Text = L"⛽";
			this->G2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->G2->Visible = false;
			// 
			// W1
			// 
			this->W1->BackColor = System::Drawing::Color::LavenderBlush;
			this->W1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->W1->ForeColor = System::Drawing::Color::Teal;
			this->W1->Location = System::Drawing::Point(412, 242);
			this->W1->Name = L"W1";
			this->W1->Size = System::Drawing::Size(46, 48);
			this->W1->TabIndex = 65;
			this->W1->Text = L"☃";
			this->W1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->W1->Visible = false;
			// 
			// W2
			// 
			this->W2->BackColor = System::Drawing::Color::LavenderBlush;
			this->W2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->W2->ForeColor = System::Drawing::Color::Teal;
			this->W2->Location = System::Drawing::Point(318, 327);
			this->W2->Name = L"W2";
			this->W2->Size = System::Drawing::Size(46, 48);
			this->W2->TabIndex = 66;
			this->W2->Text = L"☃";
			this->W2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->W2->Visible = false;
			// 
			// R2
			// 
			this->R2->BackColor = System::Drawing::Color::LavenderBlush;
			this->R2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R2->ForeColor = System::Drawing::Color::Teal;
			this->R2->Location = System::Drawing::Point(412, 327);
			this->R2->Name = L"R2";
			this->R2->Size = System::Drawing::Size(46, 48);
			this->R2->TabIndex = 67;
			this->R2->Text = L"⚔";
			this->R2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->R2->Visible = false;
			// 
			// R2T
			// 
			this->R2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->R2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R2T->ForeColor = System::Drawing::Color::Teal;
			this->R2T->Location = System::Drawing::Point(412, 327);
			this->R2T->Name = L"R2T";
			this->R2T->Size = System::Drawing::Size(46, 48);
			this->R2T->TabIndex = 85;
			this->R2T->Text = L"⚔";
			this->R2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->R2T->Visible = false;
			// 
			// W2T
			// 
			this->W2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->W2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->W2T->ForeColor = System::Drawing::Color::Teal;
			this->W2T->Location = System::Drawing::Point(318, 327);
			this->W2T->Name = L"W2T";
			this->W2T->Size = System::Drawing::Size(46, 48);
			this->W2T->TabIndex = 84;
			this->W2T->Text = L"☃";
			this->W2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->W2T->Visible = false;
			// 
			// W1T
			// 
			this->W1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->W1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->W1T->ForeColor = System::Drawing::Color::Teal;
			this->W1T->Location = System::Drawing::Point(412, 242);
			this->W1T->Name = L"W1T";
			this->W1T->Size = System::Drawing::Size(46, 48);
			this->W1T->TabIndex = 83;
			this->W1T->Text = L"☃";
			this->W1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->W1T->Visible = false;
			// 
			// G2T
			// 
			this->G2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->G2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->G2T->ForeColor = System::Drawing::Color::Teal;
			this->G2T->Location = System::Drawing::Point(318, 242);
			this->G2T->Name = L"G2T";
			this->G2T->Size = System::Drawing::Size(46, 48);
			this->G2T->TabIndex = 82;
			this->G2T->Text = L"⛽";
			this->G2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->G2T->Visible = false;
			// 
			// S2T
			// 
			this->S2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->S2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S2T->ForeColor = System::Drawing::Color::Teal;
			this->S2T->Location = System::Drawing::Point(412, 170);
			this->S2T->Name = L"S2T";
			this->S2T->Size = System::Drawing::Size(46, 48);
			this->S2T->TabIndex = 81;
			this->S2T->Text = L"⚖";
			this->S2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->S2T->Visible = false;
			// 
			// C2T
			// 
			this->C2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->C2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C2T->ForeColor = System::Drawing::Color::Teal;
			this->C2T->Location = System::Drawing::Point(318, 170);
			this->C2T->Name = L"C2T";
			this->C2T->Size = System::Drawing::Size(46, 48);
			this->C2T->TabIndex = 80;
			this->C2T->Text = L"☄";
			this->C2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C2T->Visible = false;
			// 
			// B2T
			// 
			this->B2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->B2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B2T->ForeColor = System::Drawing::Color::Teal;
			this->B2T->Location = System::Drawing::Point(227, 327);
			this->B2T->Name = L"B2T";
			this->B2T->Size = System::Drawing::Size(46, 48);
			this->B2T->TabIndex = 79;
			this->B2T->Text = L"⛵";
			this->B2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->B2T->Visible = false;
			// 
			// T2T
			// 
			this->T2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->T2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T2T->ForeColor = System::Drawing::Color::Teal;
			this->T2T->Location = System::Drawing::Point(125, 327);
			this->T2T->Name = L"T2T";
			this->T2T->Size = System::Drawing::Size(46, 48);
			this->T2T->TabIndex = 78;
			this->T2T->Text = L"☎";
			this->T2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->T2T->Visible = false;
			// 
			// L2T
			// 
			this->L2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->L2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L2T->ForeColor = System::Drawing::Color::Teal;
			this->L2T->Location = System::Drawing::Point(125, 242);
			this->L2T->Name = L"L2T";
			this->L2T->Size = System::Drawing::Size(46, 48);
			this->L2T->TabIndex = 77;
			this->L2T->Text = L"☁";
			this->L2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->L2T->Visible = false;
			// 
			// A2T
			// 
			this->A2T->BackColor = System::Drawing::Color::LavenderBlush;
			this->A2T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A2T->ForeColor = System::Drawing::Color::Teal;
			this->A2T->Location = System::Drawing::Point(27, 327);
			this->A2T->Name = L"A2T";
			this->A2T->Size = System::Drawing::Size(46, 48);
			this->A2T->TabIndex = 76;
			this->A2T->Text = L"⚓";
			this->A2T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->A2T->Visible = false;
			// 
			// B1T
			// 
			this->B1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->B1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B1T->ForeColor = System::Drawing::Color::Teal;
			this->B1T->Location = System::Drawing::Point(27, 242);
			this->B1T->Name = L"B1T";
			this->B1T->Size = System::Drawing::Size(46, 48);
			this->B1T->TabIndex = 75;
			this->B1T->Text = L"⛵";
			this->B1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->B1T->Visible = false;
			// 
			// C1T
			// 
			this->C1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->C1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C1T->ForeColor = System::Drawing::Color::Teal;
			this->C1T->Location = System::Drawing::Point(27, 170);
			this->C1T->Name = L"C1T";
			this->C1T->Size = System::Drawing::Size(46, 48);
			this->C1T->TabIndex = 74;
			this->C1T->Text = L"☄";
			this->C1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C1T->Visible = false;
			// 
			// A1T
			// 
			this->A1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->A1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A1T->ForeColor = System::Drawing::Color::Teal;
			this->A1T->Location = System::Drawing::Point(125, 170);
			this->A1T->Name = L"A1T";
			this->A1T->Size = System::Drawing::Size(46, 48);
			this->A1T->TabIndex = 73;
			this->A1T->Text = L"⚓";
			this->A1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->A1T->Visible = false;
			// 
			// L1T
			// 
			this->L1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->L1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L1T->ForeColor = System::Drawing::Color::Teal;
			this->L1T->Location = System::Drawing::Point(412, 86);
			this->L1T->Name = L"L1T";
			this->L1T->Size = System::Drawing::Size(46, 48);
			this->L1T->TabIndex = 72;
			this->L1T->Text = L"☁";
			this->L1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->L1T->Visible = false;
			// 
			// R1T
			// 
			this->R1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->R1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R1T->ForeColor = System::Drawing::Color::Teal;
			this->R1T->Location = System::Drawing::Point(318, 86);
			this->R1T->Name = L"R1T";
			this->R1T->Size = System::Drawing::Size(46, 48);
			this->R1T->TabIndex = 71;
			this->R1T->Text = L"⚔";
			this->R1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->R1T->Visible = false;
			// 
			// T1T
			// 
			this->T1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->T1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T1T->ForeColor = System::Drawing::Color::Teal;
			this->T1T->Location = System::Drawing::Point(227, 86);
			this->T1T->Name = L"T1T";
			this->T1T->Size = System::Drawing::Size(46, 48);
			this->T1T->TabIndex = 70;
			this->T1T->Text = L"☎";
			this->T1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->T1T->Visible = false;
			// 
			// S1T
			// 
			this->S1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->S1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->S1T->ForeColor = System::Drawing::Color::Teal;
			this->S1T->Location = System::Drawing::Point(125, 86);
			this->S1T->Name = L"S1T";
			this->S1T->Size = System::Drawing::Size(46, 48);
			this->S1T->TabIndex = 69;
			this->S1T->Text = L"⚖";
			this->S1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->S1T->Visible = false;
			// 
			// G1T
			// 
			this->G1T->BackColor = System::Drawing::Color::LavenderBlush;
			this->G1T->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->G1T->ForeColor = System::Drawing::Color::Teal;
			this->G1T->Location = System::Drawing::Point(27, 86);
			this->G1T->Name = L"G1T";
			this->G1T->Size = System::Drawing::Size(46, 48);
			this->G1T->TabIndex = 68;
			this->G1T->Text = L"⛽";
			this->G1T->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->G1T->Visible = false;
			// 
			// Ex
			// 
			this->Ex->BackColor = System::Drawing::Color::FloralWhite;
			this->Ex->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ex->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->Ex->Location = System::Drawing::Point(207, 265);
			this->Ex->Name = L"Ex";
			this->Ex->Size = System::Drawing::Size(75, 23);
			this->Ex->TabIndex = 86;
			this->Ex->Text = L"Exit";
			this->Ex->UseVisualStyleBackColor = false;
			this->Ex->Click += gcnew System::EventHandler(this, &Level3::Ex_Click);
			// 
			// Level3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(495, 453);
			this->Controls->Add(this->Ex);
			this->Controls->Add(this->R2T);
			this->Controls->Add(this->W2T);
			this->Controls->Add(this->W1T);
			this->Controls->Add(this->G2T);
			this->Controls->Add(this->S2T);
			this->Controls->Add(this->C2T);
			this->Controls->Add(this->B2T);
			this->Controls->Add(this->T2T);
			this->Controls->Add(this->L2T);
			this->Controls->Add(this->A2T);
			this->Controls->Add(this->B1T);
			this->Controls->Add(this->C1T);
			this->Controls->Add(this->A1T);
			this->Controls->Add(this->L1T);
			this->Controls->Add(this->R1T);
			this->Controls->Add(this->T1T);
			this->Controls->Add(this->S1T);
			this->Controls->Add(this->G1T);
			this->Controls->Add(this->R2);
			this->Controls->Add(this->W2);
			this->Controls->Add(this->W1);
			this->Controls->Add(this->G2);
			this->Controls->Add(this->S2);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->T2);
			this->Controls->Add(this->L2);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->L1);
			this->Controls->Add(this->R1);
			this->Controls->Add(this->T1);
			this->Controls->Add(this->S1);
			this->Controls->Add(this->G1);
			this->Controls->Add(this->Telephone1);
			this->Controls->Add(this->Boat2);
			this->Controls->Add(this->Scales1);
			this->Controls->Add(this->Anchor1);
			this->Controls->Add(this->Cloud2);
			this->Controls->Add(this->Telephone2);
			this->Controls->Add(this->Swords1);
			this->Controls->Add(this->Comet2);
			this->Controls->Add(this->Gas2);
			this->Controls->Add(this->Snow2);
			this->Controls->Add(this->Gas1);
			this->Controls->Add(this->Comet1);
			this->Controls->Add(this->Boat1);
			this->Controls->Add(this->Anchor2);
			this->Controls->Add(this->Cloud1);
			this->Controls->Add(this->Scales2);
			this->Controls->Add(this->Snow1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Vocab);
			this->Controls->Add(this->Check);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Swords2);
			this->Name = L"Level3";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &Level3::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int q = -1, f = -1, clicks = 0;

		Void checker(Label^ x, Label^ y, Label^ a, Label^ b, Label^ w, Label^ z, Label^ d, Label^ c, Label^ h, Label^ k, Label^ u, Label^ m, Label^ n, Label^ j, Label^ t, Label^ v, Label^ s, Label^ e)
		{


			if (q == 0 && f == 0)
			{
				G1T->Show();
				G2T->Show();
				Vocab->Text = L"Gas Pump";
				Vocab->Show();
			}
			if (q == 1 && f == 1)
			{
				T1T->Show();
				T2T->Show();
				Vocab->Text = L"Telephone";
				Vocab->Show();
			}
			if (q == 2 && f == 2)
			{
				B1T->Show();
				B2T->Show();
				Vocab->Text = L"Boat";
				Vocab->Show();
			}
			if (q == 3 && f == 3)
			{
				A1T->Show();
				A2T->Show();
				Vocab->Text = L"Anchor";
				Vocab->Show();
			}
			if (q == 4 && f == 4)
			{
				S1T->Show();
				S2T->Show();
				Vocab->Text = L"Scales";
				Vocab->Show();
			}
			if (q == 5 && f == 5)
			{
				W1T->Show();
				W2T->Show();
				Vocab->Text = L"Snowman";
				Vocab->Show();
			}
			if (q == 6 && f == 6)
			{
				R1T->Show();
				R2T->Show();
				Vocab->Text = L"Swords";
				Vocab->Show();
			}
			if (q == 7 && f == 7)
			{
				L1T->Show();
				L2T->Show();
				Vocab->Text = L"Cloud";
				Vocab->Show();
			}
			if (q == 8 && f == 8)
			{
				C1T->Show();
				C2T->Show();
				Vocab->Text = L"Comet";
				Vocab->Show();
			}
			f = -1; q = -1;;
			C2->Hide();
			C1->Hide();
			L1->Hide();
			L2->Hide();
			R1->Hide();
			R2->Hide();
			T1->Hide();
			T2->Hide();
			W1->Hide();
			W2->Hide();
			A2->Hide();
			A1->Hide();
			S1->Hide();
			S2->Hide();
			B1->Hide();
			B2->Hide();
			G1->Hide();
			G2->Hide();


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

	}

	private: System::Void Medic1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Plane1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Umbrella2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void B2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ball2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Lp2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Plane2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void B1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ball1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void U1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Umbrella1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Show();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		f = 6;
		Vocab->Hide();
		clicks++;
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

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		;
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
	private: System::Void C1T_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Telephone1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Show();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		q = 1;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Gas1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Show();
		G2->Hide();
		q = 0;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Scales1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Show();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		q = 4;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Swords1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Show();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		q = 6;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Cloud1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Show();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		q = 7;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Comet1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Show();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		q = 8;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Anchor1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Show();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		q = 3;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Comet2_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Show();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		f = 8;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Scales2_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Show();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		f = 4;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Boat1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Show();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		q = 2;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Cloud2_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Show();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		f = 7;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Gas2_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Show();
		f = 0;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Snow1_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Show();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		q = 5;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Anchor2_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Show();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		f = 3;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Telephone2_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Show();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		f = 1;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Boat2_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Hide();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Show();
		G1->Hide();
		G2->Hide();
		f = 2;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void Snow2_Click(System::Object^ sender, System::EventArgs^ e) {
		C2->Hide();
		C1->Hide();
		L1->Hide();
		L2->Hide();
		R1->Hide();
		R2->Hide();
		T1->Hide();
		T2->Hide();
		W1->Hide();
		W2->Show();
		A2->Hide();
		A1->Hide();
		S1->Hide();
		S2->Hide();
		B1->Hide();
		B2->Hide();
		G1->Hide();
		G2->Hide();
		f = 5;
		Vocab->Hide();
		clicks++;
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		checker(G1, G2, T1, T2, B1, B2, A1, A2, S1, S2, W1, W2, R1, R2, L1, L2, C1, C2);
	}
	private: System::Void Ex_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamWriter^ sw = gcnew StreamWriter("highscores.txt",true);
		sw->WriteLine(clicks);
		sw->Close();
		this->Close();

	}

	private: System::Void Score_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

