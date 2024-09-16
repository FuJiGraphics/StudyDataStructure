#include "Helper.h"
// #ifdef _START_PROJECT_MERGE_SORT_

void MergeSort(int nStart, int nEnd, char* input, int size);
void MergeSort_internal(int nStart, int nEnd, char* input);


void Solution(char* input, int size)
{
	if (input == 0 || size <= 1)
		return;

	MergeSort(0, size - 1, input, size - 1);
}


void MergeSort(int nStart, int nEnd, char* input, int size)
{
	if (input == 0 || size <= 1)
		return;

	if (nStart < nEnd)
	{



	}
}

void MergeSort_internal(int nStart, int nEnd, char* input)
{
	if (nStart >= nEnd || input == 0)
		return;

	
	MergeSort
}


// #endif
