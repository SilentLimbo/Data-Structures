/*
	Ghaly, Mina

	Febuary 29, 2020

	A6 - Vector2D Operator Overloading
*/
#include "Vector2D.h"
using namespace std;

ostream& operator<<(std::ostream& out, const Vector2D& other)
{
	out << "<" << other.x << "," << other.y << ">";
	return out;
}

int Vector2D::operator*(Vector2D& other)
{
	return (x * other.x) + (y * other.y);
}

bool Vector2D::operator==(const Vector2D& other)
{
	return (x == other.x && y == other.y);
}