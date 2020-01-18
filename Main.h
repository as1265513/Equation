#pragma once
#include"Cubic.h"
#include"Quadratic.h"
#include"Three_veriable.h"
#include"two_veriable.h"
namespace Equation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cubicButton;
	protected:

	protected:

	private: System::Windows::Forms::Button^ Quadraticbutton;

	private: System::Windows::Forms::Button^ Twobutton;

	private: System::Windows::Forms::Button^ OneButton;


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
			this->cubicButton = (gcnew System::Windows::Forms::Button());
			this->Quadraticbutton = (gcnew System::Windows::Forms::Button());
			this->Twobutton = (gcnew System::Windows::Forms::Button());
			this->OneButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cubicButton
			// 
			this->cubicButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cubicButton->Location = System::Drawing::Point(392, 253);
			this->cubicButton->Name = L"cubicButton";
			this->cubicButton->Size = System::Drawing::Size(214, 82);
			this->cubicButton->TabIndex = 2;
			this->cubicButton->Text = L"ax^3+3bx^2+3cx+d^3=0";
			this->cubicButton->UseVisualStyleBackColor = true;
			this->cubicButton->Click += gcnew System::EventHandler(this, &Main::cubicButton_Click);
			// 
			// Quadraticbutton
			// 
			this->Quadraticbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Quadraticbutton->Location = System::Drawing::Point(86, 253);
			this->Quadraticbutton->Name = L"Quadraticbutton";
			this->Quadraticbutton->Size = System::Drawing::Size(214, 82);
			this->Quadraticbutton->TabIndex = 2;
			this->Quadraticbutton->Text = L"ax^2+bx+c=0";
			this->Quadraticbutton->UseVisualStyleBackColor = true;
			this->Quadraticbutton->Click += gcnew System::EventHandler(this, &Main::Quadraticbutton_Click);
			// 
			// Twobutton
			// 
			this->Twobutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Twobutton->Location = System::Drawing::Point(392, 60);
			this->Twobutton->Name = L"Twobutton";
			this->Twobutton->Size = System::Drawing::Size(214, 82);
			this->Twobutton->TabIndex = 2;
			this->Twobutton->Text = L"ax+by+cz=d";
			this->Twobutton->UseVisualStyleBackColor = true;
			this->Twobutton->Click += gcnew System::EventHandler(this, &Main::Twobutton_Click);
			// 
			// OneButton
			// 
			this->OneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OneButton->Location = System::Drawing::Point(86, 60);
			this->OneButton->Name = L"OneButton";
			this->OneButton->Size = System::Drawing::Size(214, 82);
			this->OneButton->TabIndex = 1;
			this->OneButton->Text = L"ax+by=c";
			this->OneButton->UseVisualStyleBackColor = true;
			this->OneButton->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 408);
			this->Controls->Add(this->cubicButton);
			this->Controls->Add(this->Twobutton);
			this->Controls->Add(this->Quadraticbutton);
			this->Controls->Add(this->OneButton);
			this->Name = L"Main";
			this->Text = L"Main";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		two_veriable^ obj = gcnew two_veriable(this);
		obj->Show();
	}
private: System::Void Twobutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Three_veriable^ obj = gcnew Three_veriable(this);
	obj->Show();
}
private: System::Void Quadraticbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Quadratic^ obj = gcnew Quadratic(this);
	obj->Show();
}
private: System::Void cubicButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Cubic^ obj = gcnew Cubic(this);
	obj->Show();
}
};
}
