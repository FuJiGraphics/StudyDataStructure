/* [2024-08-18] Jin
* sub: URLȭ
* ���ڿ��� ��� �ִ� ��� ������ '%20'���� �ٲ� �ִ� �޼��带
* �ۼ��϶�. ���������� ��� ���ڸ� �� ���� �� ���� ��ŭ ����� ������
* �̹� Ȯ���Ǿ� ������, ���ڿ��� ���� ���̰� �Բ� �־����ٰ� �����ص� �ȴ�.
*/

#include <iostream>
#include <vector>
#include <string>

// ������
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
		cout << "���α׷� ����!" << endl;
	else
		cout << "���α׷� ����!" << endl;

	return (0);
}