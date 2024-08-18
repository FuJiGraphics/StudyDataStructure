#include "StringHelper.h"

bool StringHelper::HasDuplicated(const std::string& str)
{
    char c = 0;
    bool result = false;

    // 전체 문자열에서 특정 인덱스의 문자를 기준으로 
    // 중복 테스트를 실행한다.
    int strSize = static_cast<int>(str.size());
    for (int i = 0; i < strSize; ++i)
    {
        // 탐색할 문자를 지정한다.
        char c = str[i];

        // 탐색할 문자의 다음 인덱스를 탐색하며 중복테스트를 한다.
        for (int j = i + 1; j < strSize; ++j)
        {
            // 중복일 경우 중복 == true로 결과를 저장하고 루프를 종료
            if (c == str[j])
            {
                result = true;
                break;
            }
        }
    }
    return (result);
}
