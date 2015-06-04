#include "point.h"
#include <iostream>
#include <math.h>


void Point::setAbs(double x)
{
	Point::abscissa = x;
}
void Point::setOrd(double y)
{
	Point::ordinate = y;
}

double Point::getAbs()
{
	return abscissa;
}

double Point::getOrd()
{
	return ordinate;
}

double calcDistance(Point p1, Point p2) 
{
	double x1, x2, y1, y2, distance;
	x1 = p1.getAbs();
	x2 = p2.getAbs();
	y1 = p1.getOrd();
	y2 = p2.getOrd();

	distance = std::sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	return distance;
}