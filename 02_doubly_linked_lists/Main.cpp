/***********************************************

	Class DoublyList

************************************************/

#include "DoublyList.h"

#include <iostream>
using namespace std;

void test_search(const DoublyList& aDList, int elemToSearch);
void test_delete(DoublyList& aDList, int elemToDelete);

int main()
{
	DoublyList intList;

	cout << "TEST insertFront, search...\n\n";
	intList.insertFront(5);
	intList.insertFront(4);
	intList.insertFront(3);
	intList.insertFront(2);
	intList.insertFront(1);

	test_search(intList, 1);
	test_search(intList, 3);
	test_search(intList, 5);
	test_search(intList, 100);

	cout << "\nTEST delete...\n\n";
	cout << "Delete 200: ";
	if(!intList.isEmpty()) intList.deleteNode(200);
	if (!intList.isEmpty()) test_delete(intList, 1);
	if (!intList.isEmpty()) test_delete(intList, 4);
	if (!intList.isEmpty()) test_delete(intList, 3);
	if (!intList.isEmpty()) test_delete(intList, 5);
	if (!intList.isEmpty()) test_delete(intList, 2);

	cout << endl ;
	system("Pause");
	return 0;
}

void test_search(const DoublyList& aDList, int elemToSearch)
{
	cout << "Element " << elemToSearch << ": ";
	cout << ((aDList.search(elemToSearch)) ? "Found.\n" : "Not found.\n");		
}

void test_delete(DoublyList& aDList, int elemToDelete)
{
	if (!aDList.isEmpty()) aDList.deleteNode(elemToDelete);
	cout << "Element to delete: " << elemToDelete 
		<< "\n    Deleting..."
		<< "\n    Search... => ";
	cout << ((aDList.search(elemToDelete)) ? "Found.\n" : "Not found.\n");
}