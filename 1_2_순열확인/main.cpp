/* [2024-08-18] Jin
* sub: 순열 확인
* 문자열 두 개가 주어졌을 때, 이 둘이 서로 순열 관계에 있는지
* 확인하는 메서드를 작성하라.
*/

#include <iostream>
#include <vector>
#include <string>

// 구현부
#include "solution.h"

using namespace std;

int main(void)
{
	bool program_successed = true;

	const vector<string> vStrings1 = {
		"abc defg", "pl ay", "cold", 
		"told", "abcd", "window",
		"power", "computer", "open"
	};
	
	const vector<string> vStrings2 = {
		"defg abc", "pay i", "cood",
		"ldto", "badc", "wdowin",
		"powre", "comabter", "eedn"
	};

	const vector<bool> vAnswers = {
		true, false, false,
		true, true, true,
		true, false, false
	};

	int i = 0;
	int strSize = static_cast<int>(vStrings1.size());
	for (i = 0; i < strSize; ++i)
	{
		bool result = Solution(vStrings1[i], vStrings2[i]);
		if (result != vAnswers[i])
		{
			program_successed = false;
			break;
		}
	}

	if (program_successed)
		cout << "프로그램 성공!" << endl;
	else
		cout << "프로그램 실패!" << endl;

	return (0);
}