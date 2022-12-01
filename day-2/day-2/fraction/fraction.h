#pragma once
#include <iostream>

class Fraction {
private:
	int numerator;
	int denominator;

public:
	Fraction();
	Fraction(int);
	Fraction(int, int);

	bool setDeno(int);
	bool setNum(int);

	// operator +, Fraction1 + Fraction the result would be a Fraction
	Fraction operator + (Fraction const&);
	Fraction operator - (Fraction const&);
	Fraction operator * (Fraction const&);
	Fraction operator / (Fraction const&);
	
	Fraction operator ++(); // ++x
	Fraction& operator ++(int fake_arg); // x++
	// --x, x--
	Fraction& operator = (Fraction const);

	// iostream
	friend std::ostream& operator << (std::ostream&, Fraction);
	friend std::istream& operator >> (std::istream&, Fraction&);
};