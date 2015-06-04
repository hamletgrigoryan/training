#include "point.h"

class Circle {
private:
	Point center;
	double radius;

public:
	Circle(Point c, double r):
		center(c),
		radius(r)
	  {}
	Point getCenter();

	double getRadius();
};

bool isInnerPoint(Circle c, Point p);
