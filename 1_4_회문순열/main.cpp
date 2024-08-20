/* [2024-08-21] Jin
* sub: 회문 순열
* 주어진 문자열이 회문(palindrome)의 순열인지 아닌지 확인하는
* 함수를 작성하라. 회문이란 앞으로 읽으나 뒤로 읽으나 같은 단어
* 혹은 구절을 의미하며, 순열이란 문자열을 재배치하는 것을 뜻한다.
* 회문이 꼭 사전에 등장하는 단어로 제한될 필요는 없다.
*/

#include <iostream>
#include <vector>
#include <string>

// 구현부
#include "Solution.h"

int main(void)
{
	bool program_successed = true;

	std::vector<std::string> vTestCases = {
		"Tact Coa", "vcaca", "aicmd",
		"Apppao p", "asio", "V93dk aos",
		"A man a plan a canal Panama",
		"NOTAPALINDROME", "ISAPALINILAPASI"
	};
	std::vector<bool> vAnswers = {
		true, true, false,
		true, false, false,
		true,
		false, true,
	};


	int i = 0;
	int strSize = static_cast<int>(vTestCases.size());
	for (i = 0; i < strSize; ++i)
	{
		bool result = Solution(vTestCases[i]);
		if (result != vAnswers[i])
			program_successed = false;
	}

	if (program_successed)
		std::cout << "프로그램 성공!" << std::endl;
	else
		std::cout << "프로그램 실패!" << std::endl;

	return (0);
}