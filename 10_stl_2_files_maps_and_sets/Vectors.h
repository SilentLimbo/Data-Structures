#ifndef VECTORS_H
#define VECTORS_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printVector(const vector<int>& aVector)
{
	vector<int>::const_iterator iter = aVector.cbegin();
	vector<int>::const_iterator iterEnd = aVector.cend();
	for (iter; iter != iterEnd; ++iter)
		cout << *iter << " ";

	// => A more efficient way to traverse without using iterators:
	//for (auto i : aVector)
	//	cout << i << " ";

	cout << endl;
}

void vectorExample()
{
	// (1) Using the default constructor

	vector<int> vector1;
	vector1.push_back(10);
	vector1.push_back(80);
	vector1.push_back(54);

	cout << "vector1 = ";
	printVector(vector1);

	// =================================================
	// (2) Using the copy constructor

	vector<int> vector2(vector1);

	cout << "\nvector2 = ";
	printVector(vector2);

	// =================================================
	// (3) Using the initializer list constructor with values

	vector<int> vector3{ 130, 740, 320, 890 };  
	vector<int> vector4 = { 13, 74, 32, 89 };	// same as statement above

	cout << "\nvector3 = ";
	printVector(vector3);

	// =================================================
	// (4) Using the range constructor

	vector<int>::iterator iter = vector3.begin() + 2;
	vector<int> vector5(iter, vector3.end());

	cout << "\nvector5 = ";
	printVector(vector5);
	
	int array1[] = { 10, 11, 12, 13, 14, 15 };
	vector<int> vector6(array1, array1 + 3);

	cout << "\narray1 = ";
	for (auto i : array1) cout << i << " ";
	cout << endl;
	cout << "\nvector6 = ";
	printVector(vector6);

	// Why was 13 NOT printed? 
}

#endif

