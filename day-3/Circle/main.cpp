#include <iostream>
#include "circle.h"

int main() {
	Circle c(Point(0, 0), Point(2, 2));

	std::cout << c.getArea();
}