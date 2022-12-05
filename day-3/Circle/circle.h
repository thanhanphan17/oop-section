#pragma once
#include "point.h"

class Circle {
private:
	Point center; // O center
	Point layOnCircle; // A lay on circle

public:
	Circle();
	Circle(Point, Point);

	double getArea();
};