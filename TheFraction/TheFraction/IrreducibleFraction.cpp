/*
*
*Created by UnitedTimur
*
*/

#include "IrreducibleFraction.h"	

IrreducibleFraction::IrreducibleFraction(int first = 0, int second = 0)
{
	this->first = first;
	this->second = second;
}

int IrreducibleFraction::min()
{
	return first < second ? first : second;
}

int IrreducibleFraction::searchNod()
{
	int current = min();

	int f = first, s = second;

	if (current < 0) current *= -1;

	for (int i = current; i > 0; i--)
	{
		if (f % i == 0 && s % i == 0)
		{
			return i;
		}
	}
}

int IrreducibleFraction::searchNok()
{
	int f = first, s = second, res = searchNod();

	return f * s / res;
}

void IrreducibleFraction::pruning()
{
	nod = searchNod();

	if (nod != 1 && nod != 0)
	{
		first /= nod;
		second /= nod;
	}
}

void IrreducibleFraction::setFraction(int first, int second)
{
	this->first = first;
	this->second = second;
}

void IrreducibleFraction::sumFractions(IrreducibleFraction b)
{
	first = first * b.second + b.first * second;
	second *= b.second;
}

void IrreducibleFraction::minFractions(IrreducibleFraction b)
{
	first = first * b.second - b.first * second;
	second *= b.second;
}

void IrreducibleFraction::mulFractions(IrreducibleFraction b)
{
	first *= b.first;
	second *= b.second;
}

void IrreducibleFraction::divFractions(IrreducibleFraction b)
{
	first *= b.second;
	second *= b.first;
}

int IrreducibleFraction::_first()
{
	return first;
}

int IrreducibleFraction::_second()
{
	return second;
}

int IrreducibleFraction::_nod()
{
	return nod;
}

bool IrreducibleFraction::operator< (IrreducibleFraction const& second)
{
	float up_f = first;
	float down_f = this->second;

	float up_s = second.first;
	float down_s = second.second;

	return (up_f / down_f) < (up_s / down_s) ? true : false;
}

bool IrreducibleFraction::operator<= (IrreducibleFraction const& second)
{
	float up_f = first;
	float down_f = this->second;

	float up_s = second.first;
	float down_s = second.second;

	return (up_f / down_f) <= (up_s / down_s) ? true : false;
}

bool IrreducibleFraction::operator> (IrreducibleFraction const& second)
{
	float up_f = first;
	float down_f = this->second;

	float up_s = second.first;
	float down_s = second.second;

	return (up_f / down_f) > (up_s / down_s) ? true : false;
}

bool IrreducibleFraction::operator>= (IrreducibleFraction const& second)
{
	float up_f = first;
	float down_f = this->second;

	float up_s = second.first;
	float down_s = second.second;

	return (up_f / down_f) >= (up_s / down_s) ? true : false;
}

bool IrreducibleFraction::operator== (IrreducibleFraction const& second) 
{
	return first == second.first && this->second == second.second ? true : false;
}
