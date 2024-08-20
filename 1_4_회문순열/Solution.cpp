#include "solution.h"

// ������
#include "StringHelper.h"

using namespace std;

bool Solution(const std::string& str)
{
	bool result = true;
	// input string�� ������ ��� �����Ѵ�.
	string target = StringHelper::ConvertSpaceToToken(str, "");

	// ������ ���ڸ� ������ֱ� ���� �������̺��� �ʱ�ȭ�Ѵ�.
	int strSize = static_cast<int>(target.size());
	vector<bool> selectTable(strSize, false);

	int i, j;
	for (i = 0; i < strSize; ++i)
	{
		// �̹� ���õ�(���ŵ�) �������̺� �ε����� ��� ��ŵ
		if (selectTable[i])
			continue;

		// ���� ���ڸ� �����Ѵ�.
		char base_c = (char)tolower(target[i]);
		// ���� ���� �ε����� �� �ε����� ���� Ž���Ѵ�.
		for (j = i + 1; j < strSize; ++j)
		{
			char conv_c = (char)tolower(target[j]);
			// ���� ���ڰ� ���� ���
			if (base_c == conv_c)
			{
				// �������̺� ����ϰ� for�� ����
				selectTable[i] = true;
				selectTable[j] = true;
				break;
			}
		}
	}

	// ���ŵ��� ���� �������̺�(false)��
	// �ߺ��Ǵ� ���ڰ� ���ٴ� �ǹ��̹Ƿ�
	// ī��Ʈ�� ����
	int oddCount = 0;
	for (i = 0; i < strSize; ++i)
	{
		if (!selectTable[i])
		{
			++oddCount;
		}
		if (oddCount >= 2)
			break;
	}
	

	// ȸ���� ������ ������ ���ŵ��� ���� ���ڴ� 1�� ���Ͽ����ϹǷ�
	if (oddCount <= 1)
		result = true;
	else
		result = false;


	return (result);
}
