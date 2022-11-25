/*
	The Big Three
*/

#include "DArray.h"

#include <iostream>
using namespace std;

int main( )
{
	DArray myArray(20);

	for (int i = 10; i < 16; ++i)
		myArray.addElement(i);

	int numOfElements = myArray.getNumOfElements();

	cout << myArray << endl;

	//Modify one element
	myArray[2] = 1000;

	cout << myArray << endl;

	cout << endl;
	system("Pause");
    return 0;
}

