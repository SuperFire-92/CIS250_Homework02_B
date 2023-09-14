#pragma once
class Circle
{
private:
	double radius;
	double pi = 3.14159;
public:
	Circle();
	Circle(double);
	//setters
	void setRadius(double);
	//getters
	double getRadius();
	double getArea();
	double getDiameter();
	double getCircumference();
};

