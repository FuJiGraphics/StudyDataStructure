/* [2024-08-30] Jin
* sub: ���ڿ� ����
* �ݺ��Ǵ� ������ ������ ���� ����� �⺻���� ���ڿ� ����
* �޼��带 �ۼ��϶�. ���� ��� ���ڿ� aabccccaaa�� �����ϸ�
* a2b1c5a3�� �ȴ�. ���� ����� ���ڿ��� ���̰� ���� ���ڿ���
* ���̺��� ��ٸ� ���� ���ڿ��� ��ȯ�ؾ� �Ѵ�. ��ҹ��� ���ĺ�
* (a~z)�θ� �̷���� �ִ�.
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
		"aabccccaaa", "a", "aaaaaaaaaaaaabbbb",
	};
	std::vector<std::string> vAnswers =
	{
		"a2b1c4a3", "a", "a13b4",
	};


	int i = 0;
	int strSize = static_cast<int>(vTestCases1.size());
	for (i = 0; i < strSize; ++i)
	{
		std::string result = Solution(vTestCases1[i]);
		if (result != vAnswers[i])
			program_successed = false;
	}

	if (program_successed)
		std::cout << "���α׷� ����!" << std::endl;
	else
		std::cout << "���α׷� ����!" << std::endl;

	return (0);
}