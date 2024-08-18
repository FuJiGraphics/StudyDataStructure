/* [2024-08-18] Jin
* sub: URL화
* 문자열에 들어 있는 모든 공백을 '%20'으로 바꿔 주는 메서드를
* 작성하라. 최종적으로 모든 문자를 다 담을 수 있을 만큼 충분한 공간이
* 이미 확보되어 있으며, 문자열의 최종 길이가 함께 주어진다고 가정해도 된다.
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

	const vector<string> vTestCases = {
		"Computer", "I'm not monster", "this is my computer",
		"do not exist programs", "Hello, my name is jin",
		"I love gaeun"
	};

	const vector<string> vAnswers = {
		"Computer", "I'm%20not%20monster", "this%20is%20my%20computer",
		"do%20not%20exist%20programs", "Hello,%20my%20name%20is%20jin",
		"I%20love%20gaeun"
	};



	int i = 0;
	int strSize = static_cast<int>(vTestCases.size());
	for (i = 0; i < strSize; ++i)
	{
		std::string result = Solution(vTestCases[i].c_str(), vTestCases[i].size());
		if (result != vAnswers[i])
			program_successed = false;
	}

	if (program_successed)
		cout << "프로그램 성공!" << endl;
	else
		cout << "프로그램 실패!" << endl;

	return (0);
}