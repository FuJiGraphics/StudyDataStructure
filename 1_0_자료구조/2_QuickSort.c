#include "Helper.h"

#ifdef _START_PROJECT_QUICK_SORT_

void QuickSort(int nBegin, int nEnd, char* input);
void QuickSort_internal(int nBegin, int nEnd, char* input);

void Solution(char* input, int size)
{
	if (input == 0 || size <= 1)
		return;

	QuickSort(0, size - 1, input);
}

void QuickSort(int nBegin, int nEnd, char* input)
{
	if (input == 0)
		return;

	if (nBegin < nEnd)
	{
		QuickSort_internal(nBegin, nEnd, input);
	}
}

void QuickSort_internal(int nBegin, int nEnd, char* input)
{
	if ((nBegin >= nEnd) || (input == 0))
		return;

	int nPivot = nEnd;

	int nLeft, nRight;
	nLeft = nBegin;
	nRight = nEnd;
	while (nBegin < nEnd)
	{
		for (nLeft; nLeft < nRight; ++nLeft)
		{
			if (input[nLeft] > input[nPivot])
				break;
		}

		for (nRight; nRight > nLeft; --nRight)
		{
			if (input[nRight] < input[nPivot])
				break;
		}

		if (nLeft < nRight)
		{
			SWAP(input[nLeft], input[nRight], char);
		}
		else
		{
			SWAP(input[nPivot], input[nLeft], char);
			break;
		}
	}

	QuickSort_internal(nBegin, nLeft - 1, input);
	QuickSort_internal(nLeft + 1, nEnd, input);
}

#endif