#include "fraction.h"

bool Fraction::setDeno(int denominator) {
	if (denominator == 0) {
		return false;
	}

	this->denominator = denominator;

	return true;
}

bool Fraction::setNum(int numerator) {
	this->numerator = numerator;

	return true;
}