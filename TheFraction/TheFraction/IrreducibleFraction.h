/*
*
*Created by UnitedTimur
*
*/

#pragma once
#ifndef IRREDUCIBLEFRACTION_H
#define IRREDUCIBLEFRACTION_H

class IrreducibleFraction
{
public:
	IrreducibleFraction(int, int);

	//
	//void functions
	//
	void setFraction(int, int);
	void pruning();
	void sumFractions(IrreducibleFraction);
	void minFractions(IrreducibleFraction);
	void mulFractions(IrreducibleFraction);
	void divFractions(IrreducibleFraction);

	//
	//int functions
	//
	int min();
	int searchNod();
	int searchNok();
	int _first();
	int _second();
	int _nod();
	
	//
	//bool functions
	//
	bool operator< (IrreducibleFraction const&);
	bool operator<= (IrreducibleFraction const&);
	bool operator> (IrreducibleFraction const&);
	bool operator>= (IrreducibleFraction const&);
	bool operator== (IrreducibleFraction const&);

private:
	int first, second;
	int nod, nok;
};

#endif IRREDUCIBLEFRACTION_H
