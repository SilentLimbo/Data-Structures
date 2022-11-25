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

#include "MidwestGraph.h"

#include <iostream>
#include <queue>
using namespace std;

// Default constructor
MidwestGraph::MidwestGraph()
{
	maxNoOfStates = MAX_NO_OF_STATES;
	numOfStates = 0;
	states = new string[maxNoOfStates];
	borders = new int* [maxNoOfStates];
	for (int i = 0; i < maxNoOfStates; ++i)
	{
		borders[i] = new int[maxNoOfStates];
	}
}

// Overloaded constructor
MidwestGraph::MidwestGraph(int capacity)
{
	maxNoOfStates = capacity;
	numOfStates = 0;
	states = new string[maxNoOfStates];
	borders = new int* [maxNoOfStates]; 
	for (int i = 0; i < maxNoOfStates; ++i)
	{
		borders[i] = new int[maxNoOfStates]; 
	}
}

// Copy constructor
MidwestGraph::MidwestGraph(const MidwestGraph& otherGraph)
{
	maxNoOfStates = otherGraph.maxNoOfStates;
	numOfStates = otherGraph.numOfStates;
	states = new string[maxNoOfStates];
	borders = new int* [maxNoOfStates];
	for (int i = 0; i < maxNoOfStates; ++i)
	{
		borders[i] = new int[maxNoOfStates]; 
	}
 
	for (int i = 0; i < numOfStates; ++i)
	{
		states[i] = otherGraph.states[i];
		for (int j = 0; j < numOfStates; ++j)
		{
			borders[i][j] = otherGraph.borders[i][j];
		}
	}
}

// Definition of overloaded assignment operator
MidwestGraph& MidwestGraph::operator=(const MidwestGraph& rightSide)
{
	if (&rightSide != this)
	{
		if (maxNoOfStates != rightSide.maxNoOfStates)
		{
			delete[] states;
			delete[] borders;
			maxNoOfStates = rightSide.maxNoOfStates;
			states = new string[maxNoOfStates];
			borders = new int* [maxNoOfStates];
			for (int i = 0; i < maxNoOfStates; ++i)
			{
				borders[i] = new int[maxNoOfStates];
			}
		}

		numOfStates = rightSide.numOfStates;
		for (int i = 0; i < numOfStates; ++i)
		{
			states[i] = rightSide.states[i];
			for (int j = 0; j < numOfStates; ++j)
			{
				borders[i][j] = rightSide.borders[i][j];
			}
		}
	}
	else
	{
		cerr << "Attempted assignment to itself.";
	}
	return *this;
}

// Definition of function createGraph
void MidwestGraph::createGraph(const vector<string>& stateNames, 
	const vector<vector<int>>& adjacentStates) 
{
	numOfStates = static_cast<int>(stateNames.size());
	for (int i = 0; i < numOfStates; ++i)
	{
		states[i] = stateNames[i];
		for (int j = 0; j < numOfStates; ++j)
		{
			borders[i][j] = adjacentStates[i][j];
		}
	}
}

// Definition of function printStates
// Assume there is at least one state.
void MidwestGraph::printStates() const
{
	for (int i = 0; i < maxNoOfStates; ++i)
	{
		cout << "\t" << states[i] << endl;
	}
}

// Definition of function printBorderingStates
// Assume the array of strings has at list one state.
// Assume the given state is in the array of strings.
// Assume the given state has at least one neighbor.
void MidwestGraph::printBorderingStates(const std::string& state) const
{
	int stateIndex = 0;
	bool found = false;
	while ((stateIndex < numOfStates) && !found)
	{
		if (states[stateIndex] == state)
		{
			found = true;
		}
		else
		{
			++stateIndex;
		}
	}

	for (int j = 0; j < numOfStates; ++j)
	{
		if (borders[stateIndex][j] == 1)
			cout << states[j] << " ";
	}
	cout << endl;
}

// Definition of function printBFS
void MidwestGraph::printBFS(const std::string& state) const
{
	// Marks all the vertices as not visited
	int* visited = new int[numOfStates]{0};

	queue<int> BFS;
	int stateIndex = 0;
	bool found = false;
	while ((stateIndex < numOfStates) && !found)
	{

		if (states[stateIndex] == state)
		{
			found = true;
			visited[stateIndex] = 1;
			BFS.push(stateIndex);
		}
		else
			++stateIndex;
	}   

	// Cycle through all states printing out BFS order.
	int temp = BFS.front();
	while (!BFS.empty())
	{
		if (BFS.front() == temp)
		{
			BFS.pop();
		}
		else
		{
			temp = BFS.front();
			cout << states[BFS.front()] << " ";
			BFS.pop();
		}

		for (int j = 0; j < numOfStates; ++j)
		{
			if (borders[temp][j] == 1)
			{
				if (visited[j] != 1)
				{
					visited[j] = 1;
					BFS.push(j);
				}
			}
		}
	}
	delete[] visited;
	visited = nullptr;
	cout << endl;
}

// Destructor
MidwestGraph::~MidwestGraph()
{
	delete[] states;
	states = nullptr;
	
	for (int i = 0; i < maxNoOfStates; ++i)
	{
		delete[] borders[i];
		borders[i] = nullptr;
	}
	delete[] borders;
	borders = nullptr;
}
