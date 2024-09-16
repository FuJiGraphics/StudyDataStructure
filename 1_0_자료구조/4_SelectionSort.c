#include "Helper.h"
#ifdef _START_PROJECT_SELECTION_SORT_

void SelectionSort(char* input, int size)
{
	if (input == 0 || size <= 1)
		return;

	int i, j;
	int nPrev, nMin;
	for (i = 0; i < size; ++i)
	{
		nPrev = i;
		nMin = nPrev;
		for (j = i + 1; j < size; ++j)
		{
			if (input[j] < input[nMin])
			{
				nMin = j;
			}
		}
		if (nMin != nPrev)
		{
			SWAP(input[nMin], input[nPrev], char);
		}
	}
}

void Solution(char* input, int size)
{
	if (input == 0 || size <= 1)
		return;

	SelectionSort(input, size);
}

#endif