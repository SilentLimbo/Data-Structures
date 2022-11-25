/*
	Ghaly, Mina

	March 7, 2020

	A7 - Inheritance
*/
#include "Circle.h"

#include <iostream>
using namespace std;

// Constructors 
Circle::Circle() {
	radius = 0.0;
	pi = 3.142;
}

Circle::Circle(double newRad, double newPi) {
	radius = newRad;
	pi = newPi;
}

// Getters followed by setters
double Circle::getRadius() const { return radius; }
double Circle::getPi() const { return pi; }
void Circle::setRadius(double newRad) { radius = newRad; }
void Circle::setPi(double newPi) { pi = newPi; }

// Member functions
// Calculates the area of a circle and returns that value.
double Circle::calculateArea() const {
	return pi * radius * radius;
}

// Prints Circle information.
void Circle::printDimensions() const {
	cout << "Radius: " << radius << endl;
	cout << "Pi: " << pi << endl;
}
// Destructor
Circle::~Circle() {}