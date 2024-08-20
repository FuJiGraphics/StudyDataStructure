#include "solution.h"

// 구현부
#include "StringHelper.h"

using namespace std;

bool Solution(const std::string& str)
{
	bool result = true;
	// input string의 공백을 모두 제거한다.
	string target = StringHelper::ConvertSpaceToToken(str, "");

	// 선택한 문자를 기록해주기 위해 셀렉테이블을 초기화한다.
	int strSize = static_cast<int>(target.size());
	vector<bool> selectTable(strSize, false);

	int i, j;
	for (i = 0; i < strSize; ++i)
	{
		// 이미 선택된(제거된) 셀렉테이블 인덱스일 경우 스킵
		if (selectTable[i])
			continue;

		// 기준 문자를 선택한다.
		char base_c = (char)tolower(target[i]);
		// 기준 문자 인덱스의 앞 인덱스를 선형 탐색한다.
		for (j = i + 1; j < strSize; ++j)
		{
			char conv_c = (char)tolower(target[j]);
			// 같은 문자가 있을 경우
			if (base_c == conv_c)
			{
				// 셀렉테이블에 기록하고 for문 종료
				selectTable[i] = true;
				selectTable[j] = true;
				break;
			}
		}
	}

	// 제거되지 않은 셀렉테이블(false)는
	// 중복되는 문자가 없다는 의미이므로
	// 카운트를 센다
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
	

	// 회문의 기준은 무조건 제거되지 않은 문자는 1개 이하여야하므로
	if (oddCount <= 1)
		result = true;
	else
		result = false;


	return (result);
}
