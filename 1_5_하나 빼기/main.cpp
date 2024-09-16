/* [2024-08-29] Jin
* sub: 하나 빼기
* 문자열을 편집하는 방법에는 세 가지 종류가 있다. 문자 삽입, 
* 문자 삭제, 문자 교체. 문자열 두 개가 주어졌을 때, 문자열을
* 같게 만들기 위한 편집 횟수가 1회 이내인지 확인하는 함수를 작성하라.
*/

#include <iostream>
#include <vector>
#include <string>

// 구현부
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
		std::cout << "프로그램 성공!" << std::endl;
	else
		std::cout << "프로그램 실패!" << std::endl;

	return (0);
}