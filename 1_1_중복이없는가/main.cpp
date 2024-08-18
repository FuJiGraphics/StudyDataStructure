/* [2024-08-18] Jin
* sub: 중복이 없는가
* 문자열이 주어졌을 때, 이 문자열에 같은 문자가 중복되어 등장하는지
* 확인하는 알고리즘을 작성하라. 자료구조를 추가로 사용하지 않고 풀 수 
* 있는 알고리즘 또한 고민하라.
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
		failedString = "\"결과의 크기가 올바르지 않습니다.\"";
	}

	if (program_successed)
		std::cout << "프로그램 성공!" << std::endl;
	else
	{
		std::cout << "프로그램 실패!" << std::endl;
		std::cout << "틀린 답 = " << failedString << std::endl;
	}

	system("PAUSE");
	return (0);
}

