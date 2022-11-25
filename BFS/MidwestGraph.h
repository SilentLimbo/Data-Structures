/*
	Ghaly, Mina
	Westerlund, Michaela
	Hoang, Huy
	Do, Kenny
	Tan, Engkanchanith

	September 2, 2020

	CS A200
	Lab 1
*/

#ifndef MIDWESTGRAPH_H
#define MIDWESTGRAPH_H

#include <string>
#include <vector>

const int MAX_NO_OF_STATES = 20;

class MidwestGraph
{
public:
	// Constructors
	MidwestGraph(); 
	MidwestGraph(int capacity); 
	MidwestGraph(const MidwestGraph& otherGraph); 

	// Declaration of overloaded assignment operator
	MidwestGraph& operator=(const MidwestGraph& rightSide);

	// Declaration of function createGraph
	void createGraph(const std::vector<std::string>& stateNames, 
		const std::vector<std::vector<int>>& adjacentStates);

	// Declarations of all print functions
	void printStates() const;

	void printBorderingStates(const std::string& state) const;

	void printBFS(const std::string& state) const;


	// Destructor
	~MidwestGraph();

private:

	std::string* states;	//will point to a dynamic array storing labels for states
	int** borders;			//will point to a dynamic array of pointers to dynamic arrays
	int maxNoOfStates;		//max number of states the graph can hold (capacity)
	int numOfStates;		//total number of states
};

#endif