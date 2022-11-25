/*
	Ghaly, Mina

	January 29, 2020

	CS A250
	A1 - Array Duplicates
*/

// Definition function deleteDuplicates
void deleteDuplicates(int a[], int& numOfElements)
{
	for (int i = 0; i < numOfElements; i++)
	{
		int temp = a[i];
		if ((i + 1) < numOfElements)
		{
			for (int idx = i + 1; idx < numOfElements; idx++)
			{
				if (temp == a[idx])
				{
					for (int j = idx; j < numOfElements; j++)
					{
						a[j] = a[j + 1];
					}
					numOfElements--;
					--idx;
				}
			}
		}
	}
}

// Definition function printArray
void printArray(int a[], int numOfElements)
{
	for (int i = 0; i < numOfElements; ++i)
	{
		cout << a[i] << " ";
	}
}