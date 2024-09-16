#include "Helper.h"

#ifdef _START_PROJECT_BUBBLE_SORT_

void BubbleSort(char* input, int size);

void Solution(char* input, int size)
{
	if (input == 0 || size <= 1)
		return;

	BubbleSort(input, size);
}

void BubbleSort(char* input, int size)
{
	if (input == 0 || size <= 1)
		return;

	int i, j;
	int strSize = size - 1;
	for (i = 0; i < strSize; ++i)
	{
		for (j = 0; j < strSize - i; ++j)
		{
			if (input[j] > input[j + 1])
			{
				SWAP(input[j], input[j + 1], char);
			}
		}
	}
}
#endif
