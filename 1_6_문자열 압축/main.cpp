/* [2024-08-30] Jin
* sub: 문자열 압축
* 반복되는 문자의 개수를 세는 방식의 기본적인 문자열 압축
* 메서드를 작성하라. 예를 들어 문자열 aabccccaaa를 압축하면
* a2b1c5a3이 된다. 만약 압축된 문자열의 길이가 기존 문자열의
* 길이보다 길다면 기존 문자열을 반환해야 한다. 대소문자 알파벳
* (a~z)로만 이루어져 있다.
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
		std::cout << "프로그램 성공!" << std::endl;
	else
		std::cout << "프로그램 실패!" << std::endl;

	return (0);
}