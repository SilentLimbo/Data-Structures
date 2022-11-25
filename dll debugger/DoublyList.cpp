#include "DoublyList.h"

DoublyList::DoublyList() : 
	first(nullptr), last(nullptr), count(0) {}


void DoublyList::createList()
{
	first = new DoublyNode(3, nullptr, nullptr);
	last = first;
	first = new DoublyNode(4, nullptr, first);
	last = new DoublyNode(7, first, nullptr);

	// Place a breakpoint on the next line and answer QUESTION 1
	DoublyNode* p1 = last->getPrev();
	DoublyNode* p2 = new DoublyNode(2, p1, last);
	last = first->getNext();
	DoublyNode* p3 = new DoublyNode(3, p2, p1);
	first = last->getPrev();
	delete p2;
	p2 = p1->getNext();
	
	// Place a breakpoint on the next line and answer QUESTIONS 2-3
	first = new DoublyNode(5, last, first);
	last = new DoublyNode(6, first, nullptr);
	
	// Place a breakpoint on the next line and answer QUESTIONS 4-5
	DoublyNode* p4 = p1;
	last = first->getNext();
	DoublyNode* p5 = new DoublyNode(1, p1, p3);
	
	// Place a breakpoint on the next line and answer QUESTION 6-7
	delete p2->getPrev();
	last = p2;
	p1->setPrev(p3);
	
	// Place a breakpoint on the next line and answer QUESTIONS 8-9
	p4 = p4->getNext();
	p5 = first->getNext();	
	p3->setPrev(p5);
	p1 = p2->getPrev();

	// Place a breakpoint on the next line and answer QUESTION 10
}

void DoublyList::destroyList()
{ 
	DoublyNode* temp = first;	
	while (temp != nullptr)
    {	
		first = first->getNext();
        delete temp;
		temp = first;		
    }

	last = nullptr;
	count = 0;
}

DoublyList::~DoublyList()
{
	destroyList();
}