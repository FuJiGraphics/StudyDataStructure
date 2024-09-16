#include <stdio.h>

#define None			0
#define Bubble			1
#define Quick			2
#define Merge			3
#define Selection		4

// ���� �κ�
#define START_PROJECT	Merge

#if (START_PROJECT == None)
	#error "���� ������Ʈ�� ã�� �� �����ϴ�."
#elif (START_PROJECT == Bubble)
	#define _START_PROJECT_BUBBLE_SORT_
	#include "1_BubbleSort.c"
#elif (START_PROJECT == Quick)
	#define _START_PROJECT_QUICK_SORT_
	#include "2_QuickSort.c"
#elif (START_PROJECT == Merge)
	#define _START_PROJECT_MERGE_SORT_
	#include "3_MergeSort.c"
#elif (START_PROJECT == Selection)
	#define _START_PROJECT_SELECTION_SORT_
	#include "4_SelectionSort.c"
#endif

int main(void)
{
	// 342ABCadseopkg329VcdaX#@3#$!S
	const char testCase[] = "342ABCadseopkg329VcdaX#@3#$!S";
	char input[] = "342ABCadseopkg329VcdaX#@3#$!S";
	int strSize = sizeof(input) / sizeof(input[0]);
	Solution(input, strSize - 1);
	printf("���� ���ڿ�: %s\n", testCase);
	printf("���� ���ڿ�: %s\n", input);
	return (0);
}