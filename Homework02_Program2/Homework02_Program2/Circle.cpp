#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

Circle::Circle()
{
	radius = 0.0;
}

Circle::Circle(double r)
{
	radius = r;
}

//setters
void Circle::setRadius(double r)
{
	radius = r;
}

//getters
double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	return (pi * radius * radius);
}

double Circle::getDiameter()
{
	return (radius * 2);
}

double Circle::getCircumference()
{
	return (2 * pi * radius);
}