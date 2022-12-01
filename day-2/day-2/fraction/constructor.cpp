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
