#ifndef PAIR_H
#define PAIR_H

#include <iostream>

class Pair
{
	friend std::ostream& operator<<(std::ostream& out, const Pair& p);

public:
    Pair( );	
	Pair(int firstValue, int secondValue);
	~Pair( );

    void setFirst(int);
    void setSecond(int);

    int getFirst( ) const;
    int getSecond( ) const;

	bool operator==(const Pair& p) const;

	Pair& operator++();

	Pair operator++(int);

private:
    int first;
    int second;
};

#endif 



