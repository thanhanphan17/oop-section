#include <iostream>
#include "fraction.h"

int main() {
	Fraction A(1, 2);
	Fraction B(2, 3);
	
	std::cout << ++A << "\n";

	return 0;
}