#ifndef SETS_H
#define SETS_H

#include <iostream>
#include <string>
#include <set>
using namespace std;

void printSet(const set<int>& aSet)
{
	//set<int>::const_iterator iter = aSet.cbegin();
	//set<int>::const_iterator iterEnd = aSet.cend();
	//for (iter; iter != iterEnd; ++iter)
	//	cout << *iter << " ";

	//=> A more efficient way to traverse without using iterators:
	for (auto i : aSet) 
		cout << i << " ";

	cout << endl;
}

void setExample()
{
	// (1) Using the default constructor

	set<int> set1;
	set1.insert(6);		// Declaration: pair<iterator,bool> insert (const value_type& val);
	set1.insert(2);		// Function insert returns a pair which we will not be using; therefore,
	set1.insert(4);		// we have two choices:
								//		(1) Treat the function as a void function => set1.insert(value); 
								//		(2) Use "auto" to create the variable that will store the return value 
								//          (simpler than declaring a pair or, in some cases, an iterator.
								// Since we do not need the return value, you can ignore it.
	cout << "set1 = ";
	printSet(set1);

	// =================================================
	// (2) Using the copy constructor

	set<int> set2(set1);

	cout << "\nset2 = ";
	printSet(set2);

	// =================================================
	// (3) Using the initializer list constructor

	set<int> set3{ 10, 20, 30, 40 };	// if not in order, they will be sorted automatically
	set<int> set3a = { 5, 3, 1, 2, 4 };

	cout << "\nset3 = ";
	printSet(set3);
	cout << "\nset3a = ";
	printSet(set3a);

	// =================================================
	// (4) Using the range constructor

	set<int>::iterator iter = set3.begin();
	++iter;
	set<int> set4(iter, set3.end());

	cout << "\nset4 = ";
	printSet(set4);
	
	// =================================================
	// (5) Another function insert
	//     Declaration: pair<iterator,bool> insert (const value_type& val);
	//     Note that this overloaded insert function returns a pair, but 
	//     because we do not need the return value, we can ignore it.

	int input = 0;
	set<int> set5;
	for (int i = 1; i < 11; ++i)				
		set5.insert(i);
	
	cout << "\nset5 = ";
	printSet(set5);
}

#endif


