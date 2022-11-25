#include "AnyList.h"

#include <iostream>
using namespace std;

int main()
{
	AnyList myList;

	myList.insertFront(2);
	myList.insertFront(3);
	myList.insertFront(4);
	myList.insertFront(5);
	myList.insertFront(6);

	cout << "Inserted: 2 3 4 5 6\n";
	cout << "List is: ";
	myList.print();
	cout << endl;
	cout << endl;
	
	//testing select deleting
	cout << "Testing select deleting: element with data 5" << endl;
	myList.deleteItem(5);
	myList.print();
	cout << endl;
	cout << endl;
	
	cout << "Deleting first item: in this case, element with data 6" << endl;
	myList.deleteItem(6);
	myList.print();
	cout << endl;
	cout << endl;

	cout << "Deleting an element that does not exist, ex 12" << endl;
	myList.deleteItem(12);
	myList.print();
	cout << endl;
	cout << endl;

	cout << "Deleting last element, int this case 2" << endl;
	myList.deleteItem(2);
	myList.print();
	cout << endl;

	myList.destroyList(); // the list object still exists, 
						  // but the list is empty.

	cout << "\nPrint the list after emptying it...";
	cout << "\nList is: ";
	myList.print();
	cout << endl;
	cout << endl;

	cout << "Trying to delete from empty list" << endl;
	myList.deleteItem(3);
	myList.print();
	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}
