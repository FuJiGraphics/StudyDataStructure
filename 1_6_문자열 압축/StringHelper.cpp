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

std::string StringHelper::ConvertSpaceToToken(const std::string& str, const std::string& token)
{
    const std::string& PER_TOKEN = token;
    std::string result;
    int i = 0;
    int strSize = static_cast<int>(str.size());

    for (i = 0; i < strSize; ++i)
    {
        if (str[i] == ' ')
            result += PER_TOKEN;
        else
            result += str[i];
    }

    return (result);
}

bool StringHelper::CheckOneEditString(const std::string& str1, const std::string& str2)
{
    bool result = false;
    int nChange = 0;   // 문자열 삽입, 삭제, 교체의 횟수를 기록하는 변수

    // 문자열 길이가 같을 경우
    if (str1.size() == str2.size())
    {
        // 문자열이 같을 경우 삽입, 삭제할 경우의 수는 사라지므로,
        // 문자열 교체의 상황만 고려한다.
        int size = static_cast<int>(str1.size());
        for (int i = 0; i < size; ++i)
        {
            if (str1[i] != str2[i])
            {
                nChange = nChange + 1;
                if (nChange > 1)
                    break;
            }
        }
    }
    // 문자열 길이가 다를 경우
    else
    {
        // 만약 문자열 a, b의 길이가 2이상 차이날 경우,
        // 2회 이상 삽입, 삭제를 해야하므로, 작업 진행을 하지 않도록 한다.
        int s1_size = static_cast<int>(str1.size());
        int s2_size = static_cast<int>(str2.size());
        int size = (s1_size > s2_size) ? s1_size - s2_size : s2_size - s1_size;
        // 문자열 a, b의 길이 차이가 1이하일 경우만 작업 진행
        if (size <= 1)
        {
            // 긴 문자열을 탐색하는 기준으로 작은 문자열에서 다른 부분을 찾는다.
            auto& longStr = (str1.size() > str2.size()) ? str1 : str2;
            auto& shortStr = (str1.size() < str2.size()) ? str1 : str2;
            auto s2_iter = shortStr.begin();
            for (char c : longStr)
            {
                // 만약 공백을 포함하여, a,b의 문자가 다를 경우
                // 삽입 및 삭제에 대한 변경이 필요하므로 기록한다.
                if (c != *s2_iter)
                {
                    nChange = nChange - 1;
                    if (nChange > 1)
                        break;
                }
                s2_iter = s2_iter + 1;
                if (s2_iter == shortStr.end())
                    break;
            }
        }
        // 문자열 길이가 1이상 차이날 경우는 nChange에 기록하고 작업 진행하지 않음
        else
        {
            nChange = size;
        }
    }

    // 교체, 삽입, 삭제가 1회 이내로 일어났을 경우 true;
    if (nChange <= 1)
        result = true;
    else
        result = false;
    return (result);
}

#include <iostream>
std::string StringHelper::StringCompression(const std::string& str)
{
    std::string result = "";
    int size = static_cast<int>(str.size());
    int nCnt = 0;            // 문자가 중복되는 개수를 누적 시킨다.
    char prev_c = str[0];    // 체크된 이전 문자를 기록한다.
    for (int i = 0; i < size; ++i)
    {
        // 이전 문자와 비교하여 같은 문자일 경우
        // 카운트를 증가시킨다.
        if (prev_c == str[i])
        {
            nCnt = nCnt + 1;
            // 다음 인덱스에서 종료되는 루프일 경우
            // 누적된 결과를 반영한다.
            if (i + 1 == size)
            {
                result = result + prev_c;
                result = result + std::to_string(nCnt);
            }
        }
        // 만약 이전 문자와 다른 문자일 경우
        // 문자를 갱신하고 누적 회수를 압축 결과에 반영한다.
        else
        {
            result = result + prev_c;
            result = result + std::to_string(nCnt);
            prev_c = str[i];
            nCnt = 1;
        }
    }
    // 압축된 문자열이 기존 문자열보다 길 경우 
    // 원본 문자열로 롤백
    if (result.size() > str.size())
        result = str;
    return (result);
}
