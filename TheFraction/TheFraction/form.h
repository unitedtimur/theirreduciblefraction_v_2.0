/*
*
*Created by UnitedTimur
*
*/

#pragma once
#include "IrreducibleFraction.h"

namespace TheFraction {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	IrreducibleFraction a(0, 0), b(0, 0);

	public ref class form : public System::Windows::Forms::Form
	{

	public:
		form(void)
		{
			InitializeComponent();
		}

		void setFraction();
		void error();
		void print();
		bool isEmpty();
		bool isZero();

	private: System::Windows::Forms::TextBox^  f_up;
	private: System::Windows::Forms::TextBox^  f_down;
	private: System::Windows::Forms::TextBox^  s_up;
	private: System::Windows::Forms::TextBox^  s_down;
	private: System::Windows::Forms::TextBox^  ans_up;
	private: System::Windows::Forms::TextBox^  ans_down;
	private: System::Windows::Forms::TextBox^  error_logs;
	private: System::Windows::Forms::Button^  plus;
	private: System::Windows::Forms::TextBox^  answer;
	private: System::Windows::Forms::Button^  clean;
	private: System::Windows::Forms::Button^  minus;
	private: System::Windows::Forms::Button^  multiply;
	private: System::Windows::Forms::Button^  division;
	private: System::Windows::Forms::Button^  clear_value;
	private: System::Windows::Forms::Button^  nod;
	private: System::Windows::Forms::Button^  nok;
	private: System::Windows::Forms::Button^  is_less;
	private: System::Windows::Forms::Button^  is_more;
	private: System::Windows::Forms::Button^  is_lessE;
	private: System::Windows::Forms::Button^  is_moreE;
	private: System::Windows::Forms::Button^  is_equally;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 void InitializeComponent(void)
			 {
				 this->f_up = (gcnew System::Windows::Forms::TextBox());
				 this->f_down = (gcnew System::Windows::Forms::TextBox());
				 this->s_up = (gcnew System::Windows::Forms::TextBox());
				 this->s_down = (gcnew System::Windows::Forms::TextBox());
				 this->ans_up = (gcnew System::Windows::Forms::TextBox());
				 this->ans_down = (gcnew System::Windows::Forms::TextBox());
				 this->error_logs = (gcnew System::Windows::Forms::TextBox());
				 this->plus = (gcnew System::Windows::Forms::Button());
				 this->answer = (gcnew System::Windows::Forms::TextBox());
				 this->clean = (gcnew System::Windows::Forms::Button());
				 this->minus = (gcnew System::Windows::Forms::Button());
				 this->multiply = (gcnew System::Windows::Forms::Button());
				 this->division = (gcnew System::Windows::Forms::Button());
				 this->clear_value = (gcnew System::Windows::Forms::Button());
				 this->nod = (gcnew System::Windows::Forms::Button());
				 this->nok = (gcnew System::Windows::Forms::Button());
				 this->is_less = (gcnew System::Windows::Forms::Button());
				 this->is_more = (gcnew System::Windows::Forms::Button());
				 this->is_lessE = (gcnew System::Windows::Forms::Button());
				 this->is_moreE = (gcnew System::Windows::Forms::Button());
				 this->is_equally = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->SuspendLayout();
				 // 
				 // f_up
				 // 
				 this->f_up->Location = System::Drawing::Point(12, 12);
				 this->f_up->Multiline = true;
				 this->f_up->Name = L"f_up";
				 this->f_up->Size = System::Drawing::Size(108, 40);
				 this->f_up->TabIndex = 0;
				 this->f_up->TextChanged += gcnew System::EventHandler(this, &form::f_up_TextChanged);
				 // 
				 // f_down
				 // 
				 this->f_down->Location = System::Drawing::Point(12, 58);
				 this->f_down->Multiline = true;
				 this->f_down->Name = L"f_down";
				 this->f_down->Size = System::Drawing::Size(108, 40);
				 this->f_down->TabIndex = 1;
				 this->f_down->TextChanged += gcnew System::EventHandler(this, &form::f_down_TextChanged);
				 // 
				 // s_up
				 // 
				 this->s_up->Location = System::Drawing::Point(141, 12);
				 this->s_up->Multiline = true;
				 this->s_up->Name = L"s_up";
				 this->s_up->Size = System::Drawing::Size(108, 40);
				 this->s_up->TabIndex = 2;
				 this->s_up->TextChanged += gcnew System::EventHandler(this, &form::s_up_TextChanged);
				 // 
				 // s_down
				 // 
				 this->s_down->Location = System::Drawing::Point(141, 58);
				 this->s_down->Multiline = true;
				 this->s_down->Name = L"s_down";
				 this->s_down->Size = System::Drawing::Size(108, 40);
				 this->s_down->TabIndex = 3;
				 this->s_down->TextChanged += gcnew System::EventHandler(this, &form::s_down_TextChanged);
				 // 
				 // ans_up
				 // 
				 this->ans_up->Location = System::Drawing::Point(287, 12);
				 this->ans_up->Multiline = true;
				 this->ans_up->Name = L"ans_up";
				 this->ans_up->Size = System::Drawing::Size(108, 40);
				 this->ans_up->TabIndex = 5;
				 this->ans_up->TextChanged += gcnew System::EventHandler(this, &form::ans_up_TextChanged);
				 // 
				 // ans_down
				 // 
				 this->ans_down->Location = System::Drawing::Point(287, 58);
				 this->ans_down->Multiline = true;
				 this->ans_down->Name = L"ans_down";
				 this->ans_down->Size = System::Drawing::Size(108, 40);
				 this->ans_down->TabIndex = 6;
				 this->ans_down->TextChanged += gcnew System::EventHandler(this, &form::ans_down_TextChanged);
				 // 
				 // error_logs
				 // 
				 this->error_logs->Location = System::Drawing::Point(725, 39);
				 this->error_logs->Multiline = true;
				 this->error_logs->Name = L"error_logs";
				 this->error_logs->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				 this->error_logs->Size = System::Drawing::Size(282, 411);
				 this->error_logs->TabIndex = 7;
				 this->error_logs->TextChanged += gcnew System::EventHandler(this, &form::error_logs_TextChanged);
				 // 
				 // plus
				 // 
				 this->plus->Location = System::Drawing::Point(12, 158);
				 this->plus->Name = L"plus";
				 this->plus->Size = System::Drawing::Size(62, 55);
				 this->plus->TabIndex = 4;
				 this->plus->Text = L"+";
				 this->plus->UseVisualStyleBackColor = true;
				 this->plus->Click += gcnew System::EventHandler(this, &form::plus_Click);
				 // 
				 // answer
				 // 
				 this->answer->Location = System::Drawing::Point(428, 38);
				 this->answer->Multiline = true;
				 this->answer->Name = L"answer";
				 this->answer->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				 this->answer->Size = System::Drawing::Size(282, 411);
				 this->answer->TabIndex = 8;
				 this->answer->TextChanged += gcnew System::EventHandler(this, &form::answer_TextChanged);
				 // 
				 // clean
				 // 
				 this->clean->Location = System::Drawing::Point(428, 456);
				 this->clean->Name = L"clean";
				 this->clean->Size = System::Drawing::Size(579, 32);
				 this->clean->TabIndex = 9;
				 this->clean->Text = L"Clear";
				 this->clean->UseVisualStyleBackColor = true;
				 this->clean->Click += gcnew System::EventHandler(this, &form::clean_Click);
				 // 
				 // minus
				 // 
				 this->minus->Location = System::Drawing::Point(80, 158);
				 this->minus->Name = L"minus";
				 this->minus->Size = System::Drawing::Size(62, 55);
				 this->minus->TabIndex = 10;
				 this->minus->Text = L"-";
				 this->minus->UseVisualStyleBackColor = true;
				 this->minus->Click += gcnew System::EventHandler(this, &form::minus_Click);
				 // 
				 // multiply
				 // 
				 this->multiply->Location = System::Drawing::Point(148, 158);
				 this->multiply->Name = L"multiply";
				 this->multiply->Size = System::Drawing::Size(62, 55);
				 this->multiply->TabIndex = 11;
				 this->multiply->Text = L"*";
				 this->multiply->UseVisualStyleBackColor = true;
				 this->multiply->Click += gcnew System::EventHandler(this, &form::multiply_Click);
				 // 
				 // division
				 // 
				 this->division->Location = System::Drawing::Point(216, 158);
				 this->division->Name = L"division";
				 this->division->Size = System::Drawing::Size(62, 55);
				 this->division->TabIndex = 12;
				 this->division->Text = L"/";
				 this->division->UseVisualStyleBackColor = true;
				 this->division->Click += gcnew System::EventHandler(this, &form::division_Click);
				 // 
				 // clear_value
				 // 
				 this->clear_value->Location = System::Drawing::Point(12, 104);
				 this->clear_value->Name = L"clear_value";
				 this->clear_value->Size = System::Drawing::Size(383, 48);
				 this->clear_value->TabIndex = 13;
				 this->clear_value->Text = L"Clear";
				 this->clear_value->UseVisualStyleBackColor = true;
				 this->clear_value->Click += gcnew System::EventHandler(this, &form::clear_value_Click);
				 // 
				 // nod
				 // 
				 this->nod->Location = System::Drawing::Point(80, 280);
				 this->nod->Name = L"nod";
				 this->nod->Size = System::Drawing::Size(62, 55);
				 this->nod->TabIndex = 14;
				 this->nod->Text = L"Nod";
				 this->nod->UseVisualStyleBackColor = true;
				 this->nod->Click += gcnew System::EventHandler(this, &form::nod_Click);
				 // 
				 // nok
				 // 
				 this->nok->Location = System::Drawing::Point(148, 280);
				 this->nok->Name = L"nok";
				 this->nok->Size = System::Drawing::Size(62, 55);
				 this->nok->TabIndex = 15;
				 this->nok->Text = L"Nok";
				 this->nok->UseVisualStyleBackColor = true;
				 this->nok->Click += gcnew System::EventHandler(this, &form::nok_Click);
				 // 
				 // is_less
				 // 
				 this->is_less->Location = System::Drawing::Point(12, 219);
				 this->is_less->Name = L"is_less";
				 this->is_less->Size = System::Drawing::Size(62, 55);
				 this->is_less->TabIndex = 16;
				 this->is_less->Text = L"<";
				 this->is_less->UseVisualStyleBackColor = true;
				 this->is_less->Click += gcnew System::EventHandler(this, &form::is_less_Click);
				 // 
				 // is_more
				 // 
				 this->is_more->Location = System::Drawing::Point(216, 219);
				 this->is_more->Name = L"is_more";
				 this->is_more->Size = System::Drawing::Size(62, 55);
				 this->is_more->TabIndex = 17;
				 this->is_more->Text = L">";
				 this->is_more->UseVisualStyleBackColor = true;
				 this->is_more->Click += gcnew System::EventHandler(this, &form::is_more_Click);
				 // 
				 // is_lessE
				 // 
				 this->is_lessE->Location = System::Drawing::Point(80, 219);
				 this->is_lessE->Name = L"is_lessE";
				 this->is_lessE->Size = System::Drawing::Size(62, 55);
				 this->is_lessE->TabIndex = 18;
				 this->is_lessE->Text = L"<=";
				 this->is_lessE->UseVisualStyleBackColor = true;
				 this->is_lessE->Click += gcnew System::EventHandler(this, &form::is_lessE_Click);
				 // 
				 // is_moreE
				 // 
				 this->is_moreE->Location = System::Drawing::Point(148, 219);
				 this->is_moreE->Name = L"is_moreE";
				 this->is_moreE->Size = System::Drawing::Size(62, 55);
				 this->is_moreE->TabIndex = 19;
				 this->is_moreE->Text = L">=";
				 this->is_moreE->UseVisualStyleBackColor = true;
				 this->is_moreE->Click += gcnew System::EventHandler(this, &form::is_moreE_Click);
				 // 
				 // is_equally
				 // 
				 this->is_equally->Location = System::Drawing::Point(12, 280);
				 this->is_equally->Name = L"is_equally";
				 this->is_equally->Size = System::Drawing::Size(62, 55);
				 this->is_equally->TabIndex = 20;
				 this->is_equally->Text = L"==";
				 this->is_equally->UseVisualStyleBackColor = true;
				 this->is_equally->Click += gcnew System::EventHandler(this, &form::is_equally_Click);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(260, 48);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(16, 17);
				 this->label1->TabIndex = 21;
				 this->label1->Text = L"=";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(817, 15);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(75, 17);
				 this->label2->TabIndex = 22;
				 this->label2->Text = L"Error Logs";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(520, 15);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(97, 17);
				 this->label3->TabIndex = 23;
				 this->label3->Text = L"Function Logs";
				 // 
				 // form
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1019, 500);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->is_equally);
				 this->Controls->Add(this->is_moreE);
				 this->Controls->Add(this->is_lessE);
				 this->Controls->Add(this->is_more);
				 this->Controls->Add(this->is_less);
				 this->Controls->Add(this->nok);
				 this->Controls->Add(this->nod);
				 this->Controls->Add(this->clear_value);
				 this->Controls->Add(this->division);
				 this->Controls->Add(this->multiply);
				 this->Controls->Add(this->minus);
				 this->Controls->Add(this->clean);
				 this->Controls->Add(this->answer);
				 this->Controls->Add(this->error_logs);
				 this->Controls->Add(this->ans_down);
				 this->Controls->Add(this->ans_up);
				 this->Controls->Add(this->plus);
				 this->Controls->Add(this->s_down);
				 this->Controls->Add(this->s_up);
				 this->Controls->Add(this->f_down);
				 this->Controls->Add(this->f_up);
				 this->Name = L"form";
				 this->Text = L"IrreducibleFraction";
				 this->Load += gcnew System::EventHandler(this, &form::form_Load);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void form_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void f_up_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void f_down_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void s_up_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void s_down_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ans_up_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ans_down_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!isEmpty() && !isZero())
		{
			setFraction();
			a.sumFractions(b);
			a.pruning();
			print();
			answer->Text += "You used plus function." + Environment::NewLine;
		}
		else
		{
			error();
		}
	}
	private: System::Void error_logs_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void answer_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void clean_Click(System::Object^  sender, System::EventArgs^  e) {
		answer->Text = "";
		error_logs->Text = "";
	}
	private: System::Void division_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!isEmpty() && !isZero())
		{
			setFraction();
			a.divFractions(b);
			a.pruning();
			print();
			answer->Text += "You used division function." + Environment::NewLine;
		}
	}
	private: System::Void multiply_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!isEmpty() && !isZero())
		{
			setFraction();
			a.mulFractions(b);
			a.pruning();
			print();
			answer->Text += "You used multiply function." + Environment::NewLine;
		}
		else
		{
			error();
		}
	}
	private: System::Void minus_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!isEmpty() && !isZero())
		{
			setFraction();
			a.minFractions(b);
			a.pruning();
			print();
			answer->Text += "You used minus function." + Environment::NewLine;
		}
		else
		{
			error();
		}
	}
	private: System::Void clear_value_Click(System::Object^  sender, System::EventArgs^  e) {
		f_up->Text = "";
		f_down->Text = "";
		s_up->Text = "";
		s_down->Text = "";
		ans_up->Text = "";
		ans_down->Text = "";
	}
	private: System::Void nod_Click(System::Object^  sender, System::EventArgs^  e) {
		if (a._first() != 0 && a._second() != 0)
		{
			answer->Text += "===========================" + Environment::NewLine;
			answer->Text += "Nod is " + Convert::ToString(a._nod()) + Environment::NewLine;
			answer->Text += "===========================" + Environment::NewLine;
		}
	}
	private: System::Void nok_Click(System::Object^  sender, System::EventArgs^  e) {
		if (a._first() != 0 && a._second() != 0)
		{
			answer->Text += "===========================" + Environment::NewLine;
			answer->Text += "Nok is " + Convert::ToString(a.searchNok()) + Environment::NewLine;
			answer->Text += "===========================" + Environment::NewLine;
		}
	}
	private: System::Void is_less_Click(System::Object^  sender, System::EventArgs^  e) {
		setFraction();
		if (!isEmpty() && !isZero())
		{
			if (a < b)
			{
				answer->Text += "The left fraction is less than right fraction." + Environment::NewLine;
			}
			else
			{
				answer->Text += "The left fraction isn't less than right fraction." + Environment::NewLine;
			}
		}
	}
	private: System::Void is_more_Click(System::Object^  sender, System::EventArgs^  e) {
		setFraction();
		if (!isEmpty() && !isZero())
		{
			if (a > b)
			{
				answer->Text += "The left fraction is more than right fraction." + Environment::NewLine;
			}
			else
			{
				answer->Text += "The left fraction isn't more than right fraction." + Environment::NewLine;
			}
		}
	}
	private: System::Void is_lessE_Click(System::Object^  sender, System::EventArgs^  e) {
		setFraction();
		if (!isEmpty() && !isZero())
		{
			if (a <= b)
			{
				answer->Text += "The left fraction is less than or equal to the right fraction." + Environment::NewLine;
			}
			else
			{
				answer->Text += "The left fraction isn't less than or equal to the right fraction." + Environment::NewLine;
			}
		}
	}
	private: System::Void is_moreE_Click(System::Object^  sender, System::EventArgs^  e) {
		setFraction();
		if (!isEmpty() && !isZero())
		{
			if (a >= b)
			{
				answer->Text += "The left fraction is more than or equal to the right fraction." + Environment::NewLine;
			}
			else
			{
				answer->Text += "The left fraction isn't more than or equal to the right fraction." + Environment::NewLine;
			}
		}
	}
	private: System::Void is_equally_Click(System::Object^  sender, System::EventArgs^  e) {
		setFraction();
		if (!isEmpty() && !isZero())
		{
			if (a == b)
			{
				answer->Text += "The left fraction and the right fraction is equal." + Environment::NewLine;
			}
			else
			{
				answer->Text += "The left fraction and the right fraction isn't equal." + Environment::NewLine;
			}
		}
	}
};
}
