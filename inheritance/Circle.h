/*
	Ghaly, Mina

	March 7, 2020

	A7 - Inheritance
*/
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double newRad, double newPi);
	double getRadius() const;
	double getPi() const;
	void setRadius(double newRad);
	void setPi(double newPi);
	double calculateArea() const;
	void printDimensions() const;
	~Circle();
private:
	double radius;
	double pi;
};

#endif

