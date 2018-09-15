/*
*
*Created by UnitedTimur
*
*/

#include "form.h"
#include "IrreducibleFraction.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TheFraction::form form;
	Application::Run(%form);
}

void TheFraction::form::setFraction()
{
	if (!isEmpty() && !isZero())
	{
		a.setFraction(Convert::ToInt64(f_up->Text), Convert::ToInt64(f_down->Text));
		b.setFraction(Convert::ToInt64(s_up->Text), Convert::ToInt64(s_down->Text));
	}
}

void TheFraction::form::error()
{
	
	error_logs->Text += "Warning! You must set all the values or your values is 0." + Environment::NewLine;
	
}

void TheFraction::form::print()
{
	if (!isEmpty())
	{
		ans_up->Text = Convert::ToString(a._first());
		ans_down->Text = Convert::ToString(a._second());
	}
}

bool TheFraction::form::isEmpty()
{
	return f_up->Text == "" || f_down->Text == "" || s_up->Text == "" || s_down->Text == "" ? true : false;
}

bool TheFraction::form::isZero()
{
	return Convert::ToInt64(f_up->Text) == 0 || Convert::ToInt64(f_down->Text) == 0 || Convert::ToInt64(s_up->Text) == 0 || Convert::ToInt64(s_down->Text) == 0 ? true : false;
}
