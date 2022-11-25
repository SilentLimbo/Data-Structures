/*
	Ghaly, Mina

	Febuary 29, 2020

	A6 - Vector2D Operator Overloading
*/
#include<iostream>
#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D
{
	// Output shit <x,y> (no spaces)
	friend std::ostream& operator<<(std::ostream& out, const Vector2D& other);

public:
	Vector2D() : x(0), y(0) {} // Default constructor set to <0,0>
	Vector2D(int newX, int newY) // Overloaded constructor sets vector to custom values
		: x(newX), y(newY) {}

	// Calculates and returns the dot product of the vectors (calling object and parameter object)
	int operator*(Vector2D& other); 

	// It compares two objects of the class Vector2D and 
	// returns true is the vectors are the same, or false otherwise.
	bool operator==(const Vector2D& other);

	~Vector2D() {}
private:
	int x, y;
};

#endif