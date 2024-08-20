/* [2024-08-21] Jin
* sub: ȸ�� ����
* �־��� ���ڿ��� ȸ��(palindrome)�� �������� �ƴ��� Ȯ���ϴ�
* �Լ��� �ۼ��϶�. ȸ���̶� ������ ������ �ڷ� ������ ���� �ܾ�
* Ȥ�� ������ �ǹ��ϸ�, �����̶� ���ڿ��� ���ġ�ϴ� ���� ���Ѵ�.
* ȸ���� �� ������ �����ϴ� �ܾ�� ���ѵ� �ʿ�� ����.
*/

#include <iostream>
#include <vector>
#include <string>

// ������
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
		std::cout << "���α׷� ����!" << std::endl;
	else
		std::cout << "���α׷� ����!" << std::endl;

	return (0);
}