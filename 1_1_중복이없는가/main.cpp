/* [2024-08-18] Jin
* sub: �ߺ��� ���°�
* ���ڿ��� �־����� ��, �� ���ڿ��� ���� ���ڰ� �ߺ��Ǿ� �����ϴ���
* Ȯ���ϴ� �˰����� �ۼ��϶�. �ڷᱸ���� �߰��� ������� �ʰ� Ǯ �� 
* �ִ� �˰��� ���� ����϶�.
*/

#include <iostream>
#include <vector>
#include "solution.h"

int main(void)
{
	const std::vector<std::string> vTestCases = {
		"aacdeds", "fgoekdeq", "asxcqwe", "backto",
		"clear", "popup", "opened", "closed", "save",
		"feedback", "style", "ABCDabcd", "123456789ABCDEFG1"
	};

	const std::vector<bool> vAnswers = {
		true, true, false, false,
		false, true, true, false, false,
		true, false, false, true
	};

	const auto& vResults = Solution(vTestCases);
	
	bool program_successed = true;
	int ansSize = static_cast<int>(vAnswers.size());
	std::string failedString;
	if (vResults.size() == vAnswers.size())
	{
		for (int i = 0; i < ansSize; ++i)
		{
			if (vAnswers[i] != vResults[i])
			{
				program_successed = false;
				failedString = vTestCases[i];
				break;
			}
		}
	}
	else
	{
		program_successed = false;
		failedString = "\"����� ũ�Ⱑ �ùٸ��� �ʽ��ϴ�.\"";
	}

	if (program_successed)
		std::cout << "���α׷� ����!" << std::endl;
	else
	{
		std::cout << "���α׷� ����!" << std::endl;
		std::cout << "Ʋ�� �� = " << failedString << std::endl;
	}

	system("PAUSE");
	return (0);
}

