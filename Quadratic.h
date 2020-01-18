#pragma once

namespace Equation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Quadratic
	/// </summary>
	public ref class Quadratic : public System::Windows::Forms::Form
	{
	public:
		Form^ back_to_main;
		Quadratic(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Quadratic(Form^ cn)
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
		~Quadratic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label12;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ input_z1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ input_y1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ input_x1;
	private: System::Windows::Forms::Button^ SoloutionButton;
	private: System::Windows::Forms::Label^ xr2_answer;

	private: System::Windows::Forms::Label^ a;
	private: System::Windows::Forms::Label^ xr1_answer;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ backbutton;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Quadratic::typeid));
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->input_z1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->input_y1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input_x1 = (gcnew System::Windows::Forms::TextBox());
			this->SoloutionButton = (gcnew System::Windows::Forms::Button());
			this->xr2_answer = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::Label());
			this->xr1_answer = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(454, 178);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 30);
			this->label12->TabIndex = 52;
			this->label12->Text = L"0";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(386, 178);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 30);
			this->label9->TabIndex = 51;
			this->label9->Text = L"c  =";
			// 
			// input_z1
			// 
			this->input_z1->Location = System::Drawing::Point(342, 177);
			this->input_z1->Multiline = true;
			this->input_z1->Name = L"input_z1";
			this->input_z1->Size = System::Drawing::Size(38, 30);
			this->input_z1->TabIndex = 50;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(298, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 30);
			this->label5->TabIndex = 49;
			this->label5->Text = L"x +";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(179, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 30);
			this->label4->TabIndex = 48;
			this->label4->Text = L"x2   +";
			// 
			// input_y1
			// 
			this->input_y1->Location = System::Drawing::Point(257, 177);
			this->input_y1->Multiline = true;
			this->input_y1->Name = L"input_y1";
			this->input_y1->Size = System::Drawing::Size(35, 30);
			this->input_y1->TabIndex = 46;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(133, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 23);
			this->label1->TabIndex = 45;
			this->label1->Text = L"ax2      +      bx      +    c      =      0";
			// 
			// input_x1
			// 
			this->input_x1->Location = System::Drawing::Point(138, 178);
			this->input_x1->Multiline = true;
			this->input_x1->Name = L"input_x1";
			this->input_x1->Size = System::Drawing::Size(35, 30);
			this->input_x1->TabIndex = 44;
			// 
			// SoloutionButton
			// 
			this->SoloutionButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SoloutionButton->Location = System::Drawing::Point(239, 269);
			this->SoloutionButton->Name = L"SoloutionButton";
			this->SoloutionButton->Size = System::Drawing::Size(141, 33);
			this->SoloutionButton->TabIndex = 57;
			this->SoloutionButton->Text = L"Soloution";
			this->SoloutionButton->UseVisualStyleBackColor = false;
			// 
			// xr2_answer
			// 
			this->xr2_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xr2_answer->Location = System::Drawing::Point(417, 349);
			this->xr2_answer->Name = L"xr2_answer";
			this->xr2_answer->Size = System::Drawing::Size(50, 23);
			this->xr2_answer->TabIndex = 56;
			this->xr2_answer->Text = L"answer";
			// 
			// a
			// 
			this->a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->a->Location = System::Drawing::Point(298, 349);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(113, 23);
			this->a->TabIndex = 55;
			this->a->Text = L"x(root 2) =";
			// 
			// xr1_answer
			// 
			this->xr1_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xr1_answer->Location = System::Drawing::Point(220, 349);
			this->xr1_answer->Name = L"xr1_answer";
			this->xr1_answer->Size = System::Drawing::Size(50, 23);
			this->xr1_answer->TabIndex = 54;
			this->xr1_answer->Text = L"answer";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(98, 349);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 23);
			this->label8->TabIndex = 53;
			this->label8->Text = L"x(root 1) =";
			// 
			// backbutton
			// 
			this->backbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backbutton.BackgroundImage")));
			this->backbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backbutton->Location = System::Drawing::Point(12, 12);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(45, 36);
			this->backbutton->TabIndex = 58;
			this->backbutton->UseVisualStyleBackColor = true;
			this->backbutton->Click += gcnew System::EventHandler(this, &Quadratic::backbutton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(599, 183);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 30);
			this->textBox1->TabIndex = 59;
			// 
			// Quadratic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 408);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->backbutton);
			this->Controls->Add(this->SoloutionButton);
			this->Controls->Add(this->xr2_answer);
			this->Controls->Add(this->a);
			this->Controls->Add(this->xr1_answer);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->input_z1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->input_y1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->input_x1);
			this->Name = L"Quadratic";
			this->Text = L"Quadratic";
			this->Load += gcnew System::EventHandler(this, &Quadratic::Quadratic_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Quadratic_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	back_to_main->Show();
}
};
}
