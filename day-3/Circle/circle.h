#pragma once
#include "point.h"

class Circle {
private:
	Point center; // O
	Point layOnCircle; // A

public:
	Circle();
	Circle(Point, Point);

	double getArea();
};