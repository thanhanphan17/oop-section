#include "point.h"
#include <math.h>

Point::Point() {
	this->x = this->y = 0;
}

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

int Point::getX() const {
	return this->x;	
}

int Point::getY() const {
	return this->y;
}

bool Point::setX(int x) {
	this->x = x;
	return true;
}

bool Point::setY(int y) {
	this->y = y;
	return true;
}

double Point::distance(const Point point) {
	double _dist = 0;
	float x1 = this->x;
	float x2 = point.x;

	float y1 = this->y;
	float y2 = point.y;

	_dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return _dist;
}
