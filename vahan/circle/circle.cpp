#include <iostream>
#include <math.h>
#include "circle.h"

Point Circle::getCenter()
{
	return center;
}

double Circle::getRadius()
{
	return radius;
}


bool isInnerPoint(Circle c, Point p)
{
	double distance;
	
	Point center = c.getCenter();
	double radius = c.getRadius();
	distance = calcDistance(center, p);
	if (distance <= radius)
	{
		return true;
	} else {
		return false;
	}
}



















