// Iterative version

#include <iostream>
#include <stack>
#include <deque>

using namespace std;

#include "SwapStacks.h"

void checkResults(const stack<int>& stack1, const stack<int>& stack2);
void printStack(stack<int> stack);

int main()
{
	stack<int> stack1, stack2;

	for (int i = 1; i < 9; ++i) 
		stack1.push(i);

	/*stack1.push(8);
	stack1.push(81);
	stack1.push(555);
	stack1.push(32);
	stack1.push(4);
	stack1.push(1);
	stack1.push(2);
	stack1.push(4);*/

	iterSwapStacks(stack1, stack2);
	//recurSwapStacks(stack1, stack2);
	//stlSwapStacks(stack1, stack2);
	//swapStacks(stack1, stack2);

	checkResults(stack1, stack2);

	cout << endl;
	system("Pause");
	return 0;
}

void checkResults(const stack<int>& stack1, const stack<int>& stack2)
{
	cout << "Pop items from stack1 (from top):"
		<< "\n    (expected) => empty"
		<< "\n (your output) => ";
	printStack(stack1);

	cout << endl;

	cout << "Pop items from stack2 (from top):"
		<< "\n    (expected) => 8 7 6 5 4 3 2 1"
		//<< "\n    (expected) => 4 2 1 4 32 555 81 8"
		<< "\n (your output) => ";
	printStack(stack2);
}

void printStack(stack<int> stack)
{
	if (stack.empty())
		cerr << "empty" << endl;
	else
	{
		while (!stack.empty())
		{
			cout << stack.top() << " ";
			stack.pop();
		}
		cout << endl;
	}
}

