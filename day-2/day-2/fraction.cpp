#include "fraction.h"
#include <iostream>

Fraction::Fraction() {
	this->numerator = 1;
	this->denominator = 1;
}

Fraction::Fraction(int numerator) {
	this->numerator = numerator;
	this->denominator = 1;
}

Fraction::Fraction(int numerator, int denominator) {
	this->numerator = numerator;
	this->denominator = denominator;
}

// operator +, Fraction1 + Fraction the result would be a Fraction
// unary operator
Fraction Fraction::operator + (Fraction const& fraction) {
	Fraction result;
	result.numerator = this->numerator * fraction.denominator
					 + this->denominator * fraction.numerator;
	result.denominator = this->denominator * fraction.denominator;

	return result;
}

Fraction Fraction::operator - (Fraction const& fraction) {
	Fraction result;
	result.numerator = this->numerator * fraction.denominator
		- this->denominator * fraction.numerator;
	result.denominator = this->denominator * fraction.denominator;

	return result;
}

Fraction Fraction::operator * (Fraction const& fraction) {
	Fraction result;
	result.numerator = this->numerator * fraction.numerator;
	result.denominator = this->denominator * fraction.denominator;
	return result;
}

Fraction Fraction::operator / (Fraction const& fraction) {
	Fraction result;
	result.numerator = this->numerator * fraction.denominator;
	result.denominator = this->denominator * fraction.numerator;
	return result;
}

Fraction& Fraction::operator = (Fraction const fraction) {
	this->numerator = fraction.numerator;
	this->denominator = fraction.denominator;
	return *this;
}

Fraction Fraction::operator ++() {
	this->numerator = this->numerator + this->denominator;
	return *this;
}

Fraction& Fraction::operator ++(int fake_arg) {
	Fraction temp = *this;
	this->numerator = this->numerator + this->denominator;
	return temp;
}

std::ostream& operator << (std::ostream& out, Fraction fraction) {
	out << fraction.numerator << "/" << fraction.denominator;

	return out;
}


void Fraction::show() {
	std::cerr << this->numerator << " / " << this->denominator;
}
