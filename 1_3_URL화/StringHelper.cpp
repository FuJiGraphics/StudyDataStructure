#include "StringHelper.h"

using namespace std;

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

bool StringHelper::RelatedPermutation(const std::string& str1, const std::string& str2)
{
    // 비교하는 두 문자열의 크기가 다를 경우 false
    if (str1.size() != str2.size())
        return (false);

    int strSize = static_cast<int>(str1.size());
    vector<bool> bSelectedChars(str1.size(), false);

    for (int i = 0; i < strSize; ++i)
    {
        char c = str1[i];

        for (int j = 0; j < strSize; ++j)
        {
            if (bSelectedChars[j])
                continue;
            else
            {
                if (c == str2[j])
                {
                    bSelectedChars[j] = true;
                    break;
                }
            }
        }
    }

    for (bool b : bSelectedChars)
    {
        if (!b)
            return (false);
    }

    return (true);
}

std::string StringHelper::ConvertSpaceToPerTwenty(const char* str, size_t size)
{
    const std::string PerTwenty = "%20";
    std::string result;
    int i = 0;
    int strSize = static_cast<int>(size);

    for (i = 0; i < strSize; ++i)
    {
        if (str[i] == ' ')
            result += PerTwenty;
        else
            result += str[i];
    }

    return (result);
}
