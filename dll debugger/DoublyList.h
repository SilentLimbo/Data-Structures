#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class DoublyNode
{
public:
	DoublyNode() : data(0), next(nullptr), prev(nullptr) {}
	DoublyNode(int theData, DoublyNode *ptrPrev, DoublyNode *next)
		: data(theData), next(next), prev(ptrPrev) {}
	DoublyNode *getNext() const { return next; }
	DoublyNode *getPrev() const { return prev; }
    int getData( ) const { return data; }
    void setData(int theElement) { data = theElement; }  
	void setNext(DoublyNode *ptrNext) { next = ptrNext; }
	void setPrev(DoublyNode *ptrPrev) { prev = ptrPrev; }
	~DoublyNode(){}
private:
    int data;
	DoublyNode *next;
	DoublyNode *prev;
};


class DoublyList
{
public:
	DoublyList(); 

	void createList();
	
	void destroyList();
	~DoublyList();

private:
	DoublyNode *first;	
	DoublyNode *last;	
	int count;	
};

#endif