#include "Pair.h"

using namespace std;

	//friend function
ostream& operator<<(ostream& out, const Pair& p)
{
	out << "(" << p.first << "," << p.second << ")";
	return out;
}

Pair::Pair( )
{ 
	first = 0;
	second = 0;
}

Pair::Pair(int firstValue, int secondValue)
{
    first = firstValue;
    second = secondValue;
}

Pair::~Pair( ){ }

void Pair::setFirst(int newValue)
{
    first = newValue;
}

int Pair::getFirst( ) const
{
    return first;
}

void Pair::setSecond(int newValue)
{
    second = newValue;
}

int Pair::getSecond( ) const
{
    return second;
}

bool Pair::operator==(const Pair& p) const
{
	return (first == p.first && second == p.second);
}

Pair& Pair::operator++()
{
	++first;
	++second;
	return *this;  //return reference to incremented object
}

Pair Pair::operator++(int)	//no need to write a parameter name
{
	Pair temp = *this;		//hold current state of object
	++first;
	++second;
	return temp;			//return unincremented, saved, temporary object
}