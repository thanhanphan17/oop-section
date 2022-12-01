#include "fraction.h"

std::ostream& operator << (std::ostream& out, Fraction fraction) {
	out << fraction.numerator << "/" << fraction.denominator;

	return out;
}

std::istream& operator >> (std::istream& in, Fraction& fraction) {
	int numerator, denominator;

	in >> numerator;
	in >> denominator;
	
	while (!fraction.setDeno(denominator)) {
		std::cerr << "Denominator can't be zero\n";
		in >> denominator;
	}

	fraction.setNum(numerator);
	fraction.setDeno(denominator);

	return in;
}