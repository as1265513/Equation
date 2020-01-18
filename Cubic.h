#pragma once

namespace Equation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cubic
	/// </summary>
	public ref class Cubic : public System::Windows::Forms::Form
	{
	public:
		Form^ back_to_main;
		Cubic(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Cubic(Form^ cn)
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
		~Cubic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ zanswer;
	protected:
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ input_z3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ input_d3;
	private: System::Windows::Forms::TextBox^ input_y3;
	private: System::Windows::Forms::TextBox^ input_x3;
	private: System::Windows::Forms::Button^ SoloutionButton;
	private: System::Windows::Forms::Label^ y_answer;
	private: System::Windows::Forms::Label^ a;
	private: System::Windows::Forms::Label^ X_answer;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ backbutton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Cubic::typeid));
			this->zanswer = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->input_z3 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->input_d3 = (gcnew System::Windows::Forms::TextBox());
			this->input_y3 = (gcnew System::Windows::Forms::TextBox());
			this->input_x3 = (gcnew System::Windows::Forms::TextBox());
			this->SoloutionButton = (gcnew System::Windows::Forms::Button());
			this->y_answer = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::Label());
			this->X_answer = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// zanswer
			// 
			this->zanswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zanswer->Location = System::Drawing::Point(519, 311);
			this->zanswer->Name = L"zanswer";
			this->zanswer->Size = System::Drawing::Size(50, 23);
			this->zanswer->TabIndex = 69;
			this->zanswer->Text = L"answer";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(465, 311);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 23);
			this->label19->TabIndex = 68;
			this->label19->Text = L"z =";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(508, 136);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(110, 30);
			this->label13->TabIndex = 67;
			this->label13->Text = L"d  =     0";
			// 
			// input_z3
			// 
			this->input_z3->Location = System::Drawing::Point(346, 136);
			this->input_z3->Multiline = true;
			this->input_z3->Name = L"input_z3";
			this->input_z3->Size = System::Drawing::Size(38, 30);
			this->input_z3->TabIndex = 66;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(391, 138);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(70, 30);
			this->label14->TabIndex = 65;
			this->label14->Text = L"x     +";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(288, 138);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 30);
			this->label15->TabIndex = 64;
			this->label15->Text = L"x2 +";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(186, 138);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 30);
			this->label16->TabIndex = 63;
			this->label16->Text = L"x3 +";
			// 
			// input_d3
			// 
			this->input_d3->Location = System::Drawing::Point(467, 136);
			this->input_d3->Multiline = true;
			this->input_d3->Name = L"input_d3";
			this->input_d3->Size = System::Drawing::Size(35, 30);
			this->input_d3->TabIndex = 62;
			// 
			// input_y3
			// 
			this->input_y3->Location = System::Drawing::Point(255, 138);
			this->input_y3->Multiline = true;
			this->input_y3->Name = L"input_y3";
			this->input_y3->Size = System::Drawing::Size(35, 30);
			this->input_y3->TabIndex = 61;
			// 
			// input_x3
			// 
			this->input_x3->Location = System::Drawing::Point(145, 138);
			this->input_x3->Multiline = true;
			this->input_x3->Name = L"input_x3";
			this->input_x3->Size = System::Drawing::Size(35, 30);
			this->input_x3->TabIndex = 60;
			// 
			// SoloutionButton
			// 
			this->SoloutionButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SoloutionButton->Location = System::Drawing::Point(301, 238);
			this->SoloutionButton->Name = L"SoloutionButton";
			this->SoloutionButton->Size = System::Drawing::Size(141, 33);
			this->SoloutionButton->TabIndex = 59;
			this->SoloutionButton->Text = L"Soloution";
			this->SoloutionButton->UseVisualStyleBackColor = false;
			// 
			// y_answer
			// 
			this->y_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y_answer->Location = System::Drawing::Point(368, 311);
			this->y_answer->Name = L"y_answer";
			this->y_answer->Size = System::Drawing::Size(50, 23);
			this->y_answer->TabIndex = 58;
			this->y_answer->Text = L"answer";
			// 
			// a
			// 
			this->a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->a->Location = System::Drawing::Point(314, 311);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(48, 23);
			this->a->TabIndex = 57;
			this->a->Text = L"y =";
			// 
			// X_answer
			// 
			this->X_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->X_answer->Location = System::Drawing::Point(203, 311);
			this->X_answer->Name = L"X_answer";
			this->X_answer->Size = System::Drawing::Size(50, 23);
			this->X_answer->TabIndex = 56;
			this->X_answer->Text = L"answer";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(149, 311);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 23);
			this->label8->TabIndex = 55;
			this->label8->Text = L"x =";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(478, 23);
			this->label1->TabIndex = 70;
			this->label1->Text = L"ax3      +      bx2      +    cx     +         d       =      0";
			// 
			// backbutton
			// 
			this->backbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backbutton.BackgroundImage")));
			this->backbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backbutton->Location = System::Drawing::Point(12, 12);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(45, 36);
			this->backbutton->TabIndex = 71;
			this->backbutton->UseVisualStyleBackColor = true;
			this->backbutton->Click += gcnew System::EventHandler(this, &Cubic::backbutton_Click);
			// 
			// Cubic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 408);
			this->Controls->Add(this->backbutton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->zanswer);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->input_z3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->input_d3);
			this->Controls->Add(this->input_y3);
			this->Controls->Add(this->input_x3);
			this->Controls->Add(this->SoloutionButton);
			this->Controls->Add(this->y_answer);
			this->Controls->Add(this->a);
			this->Controls->Add(this->X_answer);
			this->Controls->Add(this->label8);
			this->Name = L"Cubic";
			this->Text = L"Cubic";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		back_to_main->Show();
	}
};
}
