#include "circle.h"

Circle::Circle() {
	this->center = Point(0, 0);
	this->layOnCircle = Point(0, 0);
}

Circle::Circle(Point center, Point layOnCircle) {
	this->center = center;
	this->layOnCircle = layOnCircle;
}

double Circle::getArea() {
	double r = center.distance(layOnCircle); // radius

	return 3.14 * r * r;
}