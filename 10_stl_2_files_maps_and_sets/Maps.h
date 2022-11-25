#ifndef MAPS_H
#define MAPS_H

#include <iostream>
#include <string>
#include <map>
using namespace std;

void printMap(const map<int, string>& aMap)
{
	map<int, string>::const_iterator iter = aMap.cbegin();
	map<int, string>::const_iterator iterEnd = aMap.cend();
	for (iter; iter != iterEnd; ++iter)
		cout << "(" << iter->first << ", " << iter->second << ") ";

	// => A more efficient way to traverse without using iterators:
	//for (auto i : aMap)
	//	cout << "(" << i.first << ", " << i.second << ")";

	cout << endl;
}

void mapExample()
{
	// (1) Using the default constructor

	map<int, string> map1;
	map1[129] = "Jane";
	map1[245] = "Amy";
	map1[391] = "Tad";

	cout << "map1 = ";
	printMap(map1);

	// =================================================
	// (2) Using the copy constructor

	map<int, string> map2(map1);

	cout << "\nmap2 = ";
	printMap(map2);

	// =================================================
	// (3) Using the initializer list constructor

	map<int, string> map3{
		{ 329, "Jeff" },
		{ 713, "Karl" },
		{ 258, "Mary" },
		{ 736, "Karl" },
		{ 412, "Burt" }
	};

	cout << "\nmap3 = ";
	printMap(map3);

	// =================================================
	// (4) Using the range constructor

	map<int, string>::iterator iter = map3.begin();
	++iter;											// More efficient to use 
	map<int, string> map4(iter, map3.end());		// prefix for STL iterators.	

	cout << "\nmap4 = ";
	printMap(map4);

	// =================================================
	// (5) Using the make_pair function

	map<int, double> map5;

	for (int i = 1; i < 6; ++i)  
		map5.insert(make_pair(i, (i / 10.0)));

	cout << "\nmap5 = "; 
	for (auto i : map5)
		cout << "(" << i.first << ", " << i.second << ") ";

	cout << endl;
}

#endif

