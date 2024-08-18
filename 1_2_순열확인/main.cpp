/* [2024-08-18] Jin
* sub: ���� Ȯ��
* ���ڿ� �� ���� �־����� ��, �� ���� ���� ���� ���迡 �ִ���
* Ȯ���ϴ� �޼��带 �ۼ��϶�.
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
		cout << "���α׷� ����!" << endl;
	else
		cout << "���α׷� ����!" << endl;

	return (0);
}