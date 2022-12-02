#pragma once

class Point {
private:
	int x, y;

public:
	Point();
	Point(int, int);

	int getX() const;
	int getY() const;

	bool setX(int);
	bool setY(int);

	double distance(const Point point);
};