/*
	Ghaly, Mina
	Westerlund, Michaela
	Hoang, Huy
	Do, Kenny
	Tan, Engkanchanith

	October 7, 2020

	CS A200
	Lab 3
*/

#pragma once

// Definition function iterSwapStacks
void iterSwapStacks(stack<int>& s1, stack<int>& s2)
{
	int element = s1.top();
	auto size = s1.size();

	for (auto i = 0; i < size + 1; ++i)
	{
		s2.push(s1.top());
		s1.pop();
		if (s1.size() == 1)
		{
			element = s1.top();
			s1.pop();
			--size;
			for (auto j = 0; j < size; ++j)
			{
				s1.push(s2.top());
				s2.pop();
			}
			s2.push(element);
			i = 0;
		}
	}
}

// Definition function recurSwapStacks
void recurSwapStacks(stack<int>& s1, stack<int>& s2)
{
	if (!s1.empty())
	{
		int element = s1.top();
		s1.pop();
		recurSwapStacks(s1, s2);
		s2.push(element);
	}
}

// Definition function stlSwapStacks
void stlSwapStacks(stack<int>& s1, stack<int>& s2)
{
	s1.swap(s2);
}

// Definition function swapStacks
void swapStacks(stack<int>& s1, stack<int>& s2)
{
	s2 = s1;
	while (!s1.empty())
		s1.pop();
}