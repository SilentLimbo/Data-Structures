/*************************************************
		Operator Overloading
*************************************************/

#include "Pair.h"

#include <iostream>
using namespace std;

int main()
{
	Pair p1(1,2);
	Pair p2(2,3);

	if (p1 == p2)
	{
		cout << "Pair 1: " << p1;
		cout << "\nPair 2: " << p2;
		cout << "\nFirst try: Equal --> This is incorrect." << endl;
	}
	else
	{
		cout << "Pair 1: " << p1;
		cout << "\nPair 2: " << p2;
		cout << "\nFirst try: Not equal --> This is correct." << endl;
	}

	if (++p1 == p2)  //increment before evaluating if statement
					 // p1(2,3) and p2(2,3)
	{
		cout << "\nPair 1: " << p1;
		cout << "\nPair 2: " << p2;
		cout << "\nSecond try: Equal --> This is correct." << endl;
	}
	else 
	{
		cout << "\nPair 1: " << p1;
		cout << "\nPair 2: " << p2;
		cout << "\nSecond try: Not equal --> This is incorrect." << endl;
	}

	if (p1++ == p2)  //increment after evaluating if statement
					 //p1(2,3) and p2(2,3)
	{
		cout << "\nPair 1: " << p1;
		cout << "\nPair 2: " << p2;
		cout << "\nThird try: Equal --> This is correct." << endl;
	}
	else
	{
		cout << "\nPair 1: " << p1;
		cout << "\nPair 2: " << p2;
		cout << "\nThird try: Not equal --> This is incorrect." << endl;
	}

	cout << endl;
	system("Pause");
	return 0;
}
