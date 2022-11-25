#ifndef LISTS_H
#define LISTS_H

#include <iostream>
#include <string>
#include <list>
using namespace std;

void printList(const list<int>& aList)
{
	list<int>::const_iterator iter = aList.cbegin();
	list<int>::const_iterator iterEnd = aList.cend();
	for (iter; iter != iterEnd; ++iter)
		cout << *iter << " ";

	// => A more efficient way to traverse without using iterators:
	//for (auto i : aList)
	//	cout << i << " ";

	cout << endl;
}

void listExample()
{
	// (1) Using the default constructor

	list<int> list1;
	list1.push_back(100);
	list1.push_back(800);
	list1.push_back(540);

	cout << "list1 = ";
	printList(list1);

	// =================================================
	// (2) Using the copy constructor

	list<int> list2(list1);

	cout << "\nlist2 = ";
	printList(list2);

	// =================================================
	// (3) Using the initializer list constructor

	list<int> list3{ 1300, 7400, 3200, 8900 };
	list<int> list3a = { 1300, 7400, 3200, 8900 };

	cout << "\nlist3 = ";
	printList(list3);
	cout << "\nlist3a = ";
	printList(list3a);

	// =================================================
	// (4) Using the range constructor

	list<int>::iterator iter = list3.begin();
	++iter;
	++iter;									// Do NOT do this: ++++iter !!!
	list<int> list4(iter, list3.end());

	/*
		Note:
			list<int>::iterator iter = init.begin();
			++iter;
			++iter;

		Why are we incrementing instead of adding "+ 2"?
			list<int>::iterator iter = init.begin() + 2;
	*/

	cout << "\nlist4 = ";
	printList(list4);
}

#endif


