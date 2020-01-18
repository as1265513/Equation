#pragma once
#include"Header.h"
namespace Equation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Three_veriable
	/// </summary>
	
	public ref class Three_veriable : public System::Windows::Forms::Form
	{
		
	public:
		SoloutionClass object;
	private: System::Windows::Forms::Label^ zanswer;
	public:
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ input_z3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ input_d3;
	private: System::Windows::Forms::TextBox^ input_y3;
	private: System::Windows::Forms::TextBox^ input_x3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ input_z2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ input_z1;
	private: System::Windows::Forms::Button^ SoloutionButton;
	private: System::Windows::Forms::Label^ y_answer;
	private: System::Windows::Forms::Label^ a;
	private: System::Windows::Forms::Label^ X_answer;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ input_d2;
	private: System::Windows::Forms::TextBox^ input_y2;
	private: System::Windows::Forms::TextBox^ input_x2;
	private: System::Windows::Forms::TextBox^ input_d1;
	private: System::Windows::Forms::TextBox^ input_y1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ input_x1;
	private: System::Windows::Forms::Button^ backbutton;
	private: System::Windows::Forms::TextBox^ textBox1;



	public:

	public:
		Form^ back_to_main;
		Three_veriable(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Three_veriable(Form^ cn)
		{
			back_to_main = cn;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Three_veriable()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Three_veriable::typeid));
			this->zanswer = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->input_z3 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->input_d3 = (gcnew System::Windows::Forms::TextBox());
			this->input_y3 = (gcnew System::Windows::Forms::TextBox());
			this->input_x3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->input_z2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->input_z1 = (gcnew System::Windows::Forms::TextBox());
			this->SoloutionButton = (gcnew System::Windows::Forms::Button());
			this->y_answer = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::Label());
			this->X_answer = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->input_d2 = (gcnew System::Windows::Forms::TextBox());
			this->input_y2 = (gcnew System::Windows::Forms::TextBox());
			this->input_x2 = (gcnew System::Windows::Forms::TextBox());
			this->input_d1 = (gcnew System::Windows::Forms::TextBox());
			this->input_y1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input_x1 = (gcnew System::Windows::Forms::TextBox());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// zanswer
			// 
			this->zanswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zanswer->Location = System::Drawing::Point(470, 352);
			this->zanswer->Name = L"zanswer";
			this->zanswer->Size = System::Drawing::Size(50, 23);
			this->zanswer->TabIndex = 90;
			this->zanswer->Text = L"answer";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(416, 352);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 23);
			this->label19->TabIndex = 89;
			this->label19->Text = L"z =";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(551, 223);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 30);
			this->label13->TabIndex = 88;
			this->label13->Text = L"d";
			// 
			// input_z3
			// 
			this->input_z3->Location = System::Drawing::Point(383, 223);
			this->input_z3->Multiline = true;
			this->input_z3->Name = L"input_z3";
			this->input_z3->Size = System::Drawing::Size(38, 30);
			this->input_z3->TabIndex = 87;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(427, 225);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 30);
			this->label14->TabIndex = 86;
			this->label14->Text = L"z  =";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(339, 225);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 30);
			this->label15->TabIndex = 85;
			this->label15->Text = L"y +";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(229, 232);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 30);
			this->label16->TabIndex = 84;
			this->label16->Text = L"x +";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(14, 232);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(85, 30);
			this->label17->TabIndex = 83;
			this->label17->Text = L"Line 2";
			// 
			// input_d3
			// 
			this->input_d3->Location = System::Drawing::Point(510, 223);
			this->input_d3->Multiline = true;
			this->input_d3->Name = L"input_d3";
			this->input_d3->Size = System::Drawing::Size(35, 30);
			this->input_d3->TabIndex = 82;
			// 
			// input_y3
			// 
			this->input_y3->Location = System::Drawing::Point(298, 225);
			this->input_y3->Multiline = true;
			this->input_y3->Name = L"input_y3";
			this->input_y3->Size = System::Drawing::Size(35, 30);
			this->input_y3->TabIndex = 81;
			// 
			// input_x3
			// 
			this->input_x3->Location = System::Drawing::Point(188, 225);
			this->input_x3->Multiline = true;
			this->input_x3->Name = L"input_x3";
			this->input_x3->Size = System::Drawing::Size(35, 30);
			this->input_x3->TabIndex = 80;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(551, 121);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 30);
			this->label12->TabIndex = 79;
			this->label12->Text = L"d";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(551, 171);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 30);
			this->label11->TabIndex = 78;
			this->label11->Text = L"d";
			// 
			// input_z2
			// 
			this->input_z2->Location = System::Drawing::Point(383, 171);
			this->input_z2->Multiline = true;
			this->input_z2->Name = L"input_z2";
			this->input_z2->Size = System::Drawing::Size(38, 30);
			this->input_z2->TabIndex = 77;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(427, 173);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 30);
			this->label10->TabIndex = 76;
			this->label10->Text = L"z  =";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(427, 122);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 30);
			this->label9->TabIndex = 75;
			this->label9->Text = L"z  =";
			// 
			// input_z1
			// 
			this->input_z1->Location = System::Drawing::Point(383, 121);
			this->input_z1->Multiline = true;
			this->input_z1->Name = L"input_z1";
			this->input_z1->Size = System::Drawing::Size(38, 30);
			this->input_z1->TabIndex = 74;
			// 
			// SoloutionButton
			// 
			this->SoloutionButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SoloutionButton->Location = System::Drawing::Point(280, 284);
			this->SoloutionButton->Name = L"SoloutionButton";
			this->SoloutionButton->Size = System::Drawing::Size(141, 33);
			this->SoloutionButton->TabIndex = 73;
			this->SoloutionButton->Text = L"Soloution";
			this->SoloutionButton->UseVisualStyleBackColor = false;
			this->SoloutionButton->Click += gcnew System::EventHandler(this, &Three_veriable::SoloutionButton_Click_1);
			// 
			// y_answer
			// 
			this->y_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y_answer->Location = System::Drawing::Point(319, 352);
			this->y_answer->Name = L"y_answer";
			this->y_answer->Size = System::Drawing::Size(50, 23);
			this->y_answer->TabIndex = 72;
			this->y_answer->Text = L"answer";
			// 
			// a
			// 
			this->a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->a->Location = System::Drawing::Point(265, 352);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(48, 23);
			this->a->TabIndex = 71;
			this->a->Text = L"y =";
			// 
			// X_answer
			// 
			this->X_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->X_answer->Location = System::Drawing::Point(154, 352);
			this->X_answer->Name = L"X_answer";
			this->X_answer->Size = System::Drawing::Size(50, 23);
			this->X_answer->TabIndex = 70;
			this->X_answer->Text = L"answer";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(100, 352);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 23);
			this->label8->TabIndex = 69;
			this->label8->Text = L"x =";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(339, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 30);
			this->label7->TabIndex = 68;
			this->label7->Text = L"y +";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(229, 180);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 30);
			this->label6->TabIndex = 67;
			this->label6->Text = L"x +";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(339, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 30);
			this->label5->TabIndex = 66;
			this->label5->Text = L"y +";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(229, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 30);
			this->label4->TabIndex = 65;
			this->label4->Text = L"x +";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 30);
			this->label3->TabIndex = 64;
			this->label3->Text = L"Line 2";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 30);
			this->label2->TabIndex = 63;
			this->label2->Text = L"Line 1";
			// 
			// input_d2
			// 
			this->input_d2->Location = System::Drawing::Point(510, 171);
			this->input_d2->Multiline = true;
			this->input_d2->Name = L"input_d2";
			this->input_d2->Size = System::Drawing::Size(35, 30);
			this->input_d2->TabIndex = 62;
			// 
			// input_y2
			// 
			this->input_y2->Location = System::Drawing::Point(298, 173);
			this->input_y2->Multiline = true;
			this->input_y2->Name = L"input_y2";
			this->input_y2->Size = System::Drawing::Size(35, 30);
			this->input_y2->TabIndex = 61;
			// 
			// input_x2
			// 
			this->input_x2->Location = System::Drawing::Point(188, 173);
			this->input_x2->Multiline = true;
			this->input_x2->Name = L"input_x2";
			this->input_x2->Size = System::Drawing::Size(35, 30);
			this->input_x2->TabIndex = 60;
			// 
			// input_d1
			// 
			this->input_d1->Location = System::Drawing::Point(510, 121);
			this->input_d1->Multiline = true;
			this->input_d1->Name = L"input_d1";
			this->input_d1->Size = System::Drawing::Size(35, 30);
			this->input_d1->TabIndex = 59;
			// 
			// input_y1
			// 
			this->input_y1->Location = System::Drawing::Point(298, 121);
			this->input_y1->Multiline = true;
			this->input_y1->Name = L"input_y1";
			this->input_y1->Size = System::Drawing::Size(35, 30);
			this->input_y1->TabIndex = 58;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(183, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 23);
			this->label1->TabIndex = 57;
			this->label1->Text = L"ax       +       by    +    cz        =        d";
			// 
			// input_x1
			// 
			this->input_x1->Location = System::Drawing::Point(188, 121);
			this->input_x1->Multiline = true;
			this->input_x1->Name = L"input_x1";
			this->input_x1->Size = System::Drawing::Size(35, 30);
			this->input_x1->TabIndex = 56;
			// 
			// backbutton
			// 
			this->backbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backbutton.BackgroundImage")));
			this->backbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backbutton->Location = System::Drawing::Point(19, 11);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(45, 36);
			this->backbutton->TabIndex = 55;
			this->backbutton->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(626, 162);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(0, 0);
			this->textBox1->TabIndex = 91;
			// 
			// Three_veriable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 408);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->zanswer);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->input_z3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->input_d3);
			this->Controls->Add(this->input_y3);
			this->Controls->Add(this->input_x3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->input_z2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->input_z1);
			this->Controls->Add(this->SoloutionButton);
			this->Controls->Add(this->y_answer);
			this->Controls->Add(this->a);
			this->Controls->Add(this->X_answer);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->input_d2);
			this->Controls->Add(this->input_y2);
			this->Controls->Add(this->input_x2);
			this->Controls->Add(this->input_d1);
			this->Controls->Add(this->input_y1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->input_x1);
			this->Controls->Add(this->backbutton);
			this->Name = L"Three_veriable";
			this->Text = L" ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		back_to_main->Show();

	}
private: System::Void SoloutionButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int arr[4][4];
	arr[0][0] = Int32::Parse(input_x1->Text);  arr[0][1] = Int32::Parse(input_y1->Text); arr[0][2] = Int32::Parse(input_z1->Text); arr[0][3] = Int32::Parse(input_d1->Text);
	arr[1][0] = Int32::Parse(input_x2->Text);   arr[1][1] = Int32::Parse(input_y2->Text); arr[1][2] = Int32::Parse(input_z2->Text); arr[1][3] = Int32::Parse(input_d2->Text);
	arr[2][0] = Int32::Parse(input_x3->Text); arr[2][1] = Int32::Parse(input_y3->Text); arr[2][2] = Int32::Parse(input_z3->Text); arr[2][3] = Int32::Parse(input_d3->Text);
	int det[3][3] = { {arr[0][0],arr[0][1],arr[0][3]},{arr[1][0],arr[1][1],arr[1][2]},{arr[2][0],arr[2][1],arr[2][2]} };
	int det1[3][3] = { {arr[0][3],arr[1][3],arr[2][3]},{arr[1][0],arr[1][1],arr[1][2]},{arr[2][0],arr[2][1],arr[2][2]} };
	int det2[3][3] = { {arr[0][0],arr[0][1],arr[0][3]},{arr[0][3],arr[1][3],arr[2][3]},{arr[2][0],arr[2][1],arr[2][2]} };
	int det3[3][3] = { {arr[0][0],arr[0][1],arr[0][3]},{arr[1][0],arr[1][1],arr[1][2]},{arr[0][3],arr[1][3],arr[2][3]} };
	char exp[] = "adi*fh*-*bci*fg*-*-ech*gd*-*+";
	double d = object.determinent(det, exp);
	double d1 = object.determinent(det1, exp);
	double d2 = object.determinent(det2, exp);
	double d3 = object.determinent(det3, exp);
	double x, y, z;
	String^ dd = System::Convert::ToString(d);
	textBox1->Text = dd;
	if (d == 0)
	{
		MessageBox::Show("This system of Linear Equation Have infinite many soloution or Have No soloution");
	}
	else
	{

		x = d1 / d;

		String^ store1 = System::Convert::ToString(x);
		X_answer->Text = store1;

		y = d2 / d;
		String^ store = System::Convert::ToString(y);
		y_answer->Text = store;
		z = d3 / d;
		String^ store3 = System::Convert::ToString(z);
		y_answer->Text = store3;
	}
}
};
}
