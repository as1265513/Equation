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
	/// Summary for two_veriable
	/// </summary>
	public ref class two_veriable : public System::Windows::Forms::Form
	{
	 
		
	public:
		SoloutionClass solve;
	private: System::Windows::Forms::TextBox^ input_c2;
	private: System::Windows::Forms::TextBox^ textBox1;

	public:
		Form^ obj;
		two_veriable(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		two_veriable(Form ^cn)
		{
			InitializeComponent();
			 obj = cn;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~two_veriable()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ backbutton;
	private: System::Windows::Forms::TextBox^ input_x1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ input_y1;
	private: System::Windows::Forms::TextBox^ input_c1;




	private: System::Windows::Forms::TextBox^ input_y2;

	private: System::Windows::Forms::TextBox^ input_x2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ X_answer;
	private: System::Windows::Forms::Label^ y_answer;


	private: System::Windows::Forms::Label^ a;

	private: System::Windows::Forms::Button^ SoloutionButton;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(two_veriable::typeid));
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->input_x1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input_y1 = (gcnew System::Windows::Forms::TextBox());
			this->input_c1 = (gcnew System::Windows::Forms::TextBox());
			this->input_y2 = (gcnew System::Windows::Forms::TextBox());
			this->input_x2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->X_answer = (gcnew System::Windows::Forms::Label());
			this->y_answer = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::Label());
			this->SoloutionButton = (gcnew System::Windows::Forms::Button());
			this->input_c2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// backbutton
			// 
			this->backbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backbutton.BackgroundImage")));
			this->backbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->backbutton->Location = System::Drawing::Point(12, 12);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(45, 36);
			this->backbutton->TabIndex = 0;
			this->backbutton->UseVisualStyleBackColor = true;
			this->backbutton->Click += gcnew System::EventHandler(this, &two_veriable::backbutton_Click);
			// 
			// input_x1
			// 
			this->input_x1->Location = System::Drawing::Point(181, 122);
			this->input_x1->Multiline = true;
			this->input_x1->Name = L"input_x1";
			this->input_x1->Size = System::Drawing::Size(35, 30);
			this->input_x1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(176, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ax       +       by     =         c";
			this->label1->Click += gcnew System::EventHandler(this, &two_veriable::label1_Click);
			// 
			// input_y1
			// 
			this->input_y1->Location = System::Drawing::Point(291, 122);
			this->input_y1->Multiline = true;
			this->input_y1->Name = L"input_y1";
			this->input_y1->Size = System::Drawing::Size(35, 30);
			this->input_y1->TabIndex = 3;
			// 
			// input_c1
			// 
			this->input_c1->Location = System::Drawing::Point(410, 122);
			this->input_c1->Multiline = true;
			this->input_c1->Name = L"input_c1";
			this->input_c1->Size = System::Drawing::Size(35, 30);
			this->input_c1->TabIndex = 4;
			// 
			// input_y2
			// 
			this->input_y2->Location = System::Drawing::Point(291, 190);
			this->input_y2->Multiline = true;
			this->input_y2->Name = L"input_y2";
			this->input_y2->Size = System::Drawing::Size(35, 30);
			this->input_y2->TabIndex = 6;
			// 
			// input_x2
			// 
			this->input_x2->Location = System::Drawing::Point(181, 190);
			this->input_x2->Multiline = true;
			this->input_x2->Name = L"input_x2";
			this->input_x2->Size = System::Drawing::Size(35, 30);
			this->input_x2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 23);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Line 1";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Line 2";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(222, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 23);
			this->label4->TabIndex = 10;
			this->label4->Text = L"x +";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(332, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 23);
			this->label5->TabIndex = 11;
			this->label5->Text = L"y =";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(222, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 23);
			this->label6->TabIndex = 12;
			this->label6->Text = L"x +";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(332, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 23);
			this->label7->TabIndex = 13;
			this->label7->Text = L"y =";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(168, 310);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 23);
			this->label8->TabIndex = 14;
			this->label8->Text = L"x =";
			// 
			// X_answer
			// 
			this->X_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->X_answer->Location = System::Drawing::Point(222, 310);
			this->X_answer->Name = L"X_answer";
			this->X_answer->Size = System::Drawing::Size(105, 23);
			this->X_answer->TabIndex = 15;
			this->X_answer->Text = L"answer";
			// 
			// y_answer
			// 
			this->y_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->y_answer->Location = System::Drawing::Point(387, 310);
			this->y_answer->Name = L"y_answer";
			this->y_answer->Size = System::Drawing::Size(118, 23);
			this->y_answer->TabIndex = 17;
			this->y_answer->Text = L"answer";
			// 
			// a
			// 
			this->a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->a->Location = System::Drawing::Point(333, 310);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(48, 23);
			this->a->TabIndex = 16;
			this->a->Text = L"y =";
			// 
			// SoloutionButton
			// 
			this->SoloutionButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->SoloutionButton->Location = System::Drawing::Point(242, 250);
			this->SoloutionButton->Name = L"SoloutionButton";
			this->SoloutionButton->Size = System::Drawing::Size(141, 33);
			this->SoloutionButton->TabIndex = 18;
			this->SoloutionButton->Text = L"Soloution";
			this->SoloutionButton->UseVisualStyleBackColor = false;
			this->SoloutionButton->Click += gcnew System::EventHandler(this, &two_veriable::SoloutionButton_Click);
			// 
			// input_c2
			// 
			this->input_c2->Location = System::Drawing::Point(410, 190);
			this->input_c2->Multiline = true;
			this->input_c2->Name = L"input_c2";
			this->input_c2->Size = System::Drawing::Size(35, 30);
			this->input_c2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(510, 151);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 19;
			// 
			// two_veriable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 408);
			this->Controls->Add(this->textBox1);
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
			this->Controls->Add(this->input_c2);
			this->Controls->Add(this->input_y2);
			this->Controls->Add(this->input_x2);
			this->Controls->Add(this->input_c1);
			this->Controls->Add(this->input_y1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->input_x1);
			this->Controls->Add(this->backbutton);
			this->Name = L"two_veriable";
			this->Text = L"two_veriable";
			this->Load += gcnew System::EventHandler(this, &two_veriable::two_veriable_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();   
	}
		   bool fraction_converter(double number) {


			   double fractional_part = number - floor(number);
			   if (fractional_part != 0)
			   {
				   return true;
			   }
			   else  return false;
			   
		   }
		   void simplify_fraction(int num, int denom,int k)
		   {
			   for (int i = denom; i >= 2; i--)
			   {
				   if (num % i == 0 && denom % i == 0)
				   {
					   num = num / i;
					   denom = denom / i;
				   }
			   }
			 
		   }
		   
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void two_veriable_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void SoloutionButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr[3][3];
		arr[0][0] = Int32::Parse(input_x1->Text);  arr[0][1] = Int32::Parse(input_y1->Text); arr[0][2] = Int32::Parse(input_c1->Text);
		arr[1][0] = Int32::Parse(input_x2->Text);   arr[1][1] = Int32::Parse(input_y2->Text); arr[1][2] = Int32::Parse(input_c2->Text);
		int det[3][3] = { {arr[0][0],arr[0][1]},{arr[1][0],arr[1][1]} };
		int det2[3][3] = { {arr[0][2],arr[1][2]},{arr[0][1],arr[1][1]} };
		int det1[3][3] = { {arr[0][0],arr[1][0]},{arr[0][2],arr[1][2]} };
		char exp[] = "ad*bc*-";
		double d = solve.determinent(det, exp);
		double d1 = solve.determinent(det1, exp);
		double d2 = solve.determinent(det2, exp);
		double x, y;
		String^ dd = System::Convert::ToString(d);
		if (d == 0)
		{
			MessageBox::Show("This system of Linear Equation Have infinite many soloution or Have No soloution");
		}
		else
		{

			x = d2 / d;

			String^ store1 = System::Convert::ToString(x);
			X_answer->Text = store1;

			y = d1 / d;
			String^ store = System::Convert::ToString(y);
			y_answer->Text = store;

		}
	}	
	
};
}
