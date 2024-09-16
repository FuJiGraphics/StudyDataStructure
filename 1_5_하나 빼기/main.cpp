/* [2024-08-29] Jin
* sub: �ϳ� ����
* ���ڿ��� �����ϴ� ������� �� ���� ������ �ִ�. ���� ����, 
* ���� ����, ���� ��ü. ���ڿ� �� ���� �־����� ��, ���ڿ���
* ���� ����� ���� ���� Ƚ���� 1ȸ �̳����� Ȯ���ϴ� �Լ��� �ۼ��϶�.
*/

#include <iostream>
#include <vector>
#include <string>

// ������
#include "Solution.h"

int main(void)
{
	bool program_successed = true;

	std::vector<std::string> vTestCases1 = 
	{
		"pale", "pales", "pale", "pale"
	};
	std::vector<std::string> vTestCases2 = 
	{
		"ple", "pale", "bale", "bake"
	};
	std::vector<bool> vAnswers = 
	{
		true, true, true, false
	};


	int i = 0;
	int strSize = static_cast<int>(vTestCases1.size());
	for (i = 0; i < strSize; ++i)
	{
		bool result = Solution(vTestCases1[i], vTestCases2[i]);
		if (result != vAnswers[i])
			program_successed = false;
	}

	if (program_successed)
		std::cout << "���α׷� ����!" << std::endl;
	else
		std::cout << "���α׷� ����!" << std::endl;

	return (0);
}