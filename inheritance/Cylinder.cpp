/*
	Ghaly, Mina

	March 7, 2020

	A7 - Inheritance
*/
#include "Cylinder.h"

#include <iostream>
using namespace std;

// Constructors
Cylinder::Cylinder() {
	height = 0.0;
}

// Overloaded constructors that uses the Circle overloaded constructor
Cylinder::Cylinder(double newRad, double newPi, double newHeight)
	: Circle(newRad, newPi) {
	height = newHeight;
}

// Getters and setters
double Cylinder::getHeight() const { return height; }
void Cylinder::setHeight(double newHeight) { height = newHeight; }

// Calculate and return area value of Cylinder
double Cylinder::calculateVolume() const {
	return Circle::calculateArea() * height;
}

// Overriding the printDimensions function.
void Cylinder::printDimensions() const {
	Circle::printDimensions();
	cout << "Height: " << height << endl;
}

// Destructor
Cylinder::~Cylinder() {}