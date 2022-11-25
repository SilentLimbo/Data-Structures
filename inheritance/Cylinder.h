/*
	Ghaly, Mina

	March 7, 2020

	A7 - Inheritance
*/
#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder : public Circle
{
public:
	Cylinder();
	Cylinder(double newRad, double newPi, double newHeight);
	double getHeight() const;
	void setHeight(double newHeight);
	double calculateVolume() const;
	void printDimensions() const;
	~Cylinder();
private:
	double height;
};

#endif
