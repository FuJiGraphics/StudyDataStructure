#include "StringHelper.h"

using namespace std;

bool StringHelper::HasDuplicated(const std::string& str)
{
    char c = 0;
    bool result = false;

    // ��ü ���ڿ����� Ư�� �ε����� ���ڸ� �������� 
    // �ߺ� �׽�Ʈ�� �����Ѵ�.
    int strSize = static_cast<int>(str.size());
    for (int i = 0; i < strSize; ++i)
    {
        // Ž���� ���ڸ� �����Ѵ�.
        char c = str[i];

        // Ž���� ������ ���� �ε����� Ž���ϸ� �ߺ��׽�Ʈ�� �Ѵ�.
        for (int j = i + 1; j < strSize; ++j)
        {
            // �ߺ��� ��� �ߺ� == true�� ����� �����ϰ� ������ ����
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
    // ���ϴ� �� ���ڿ��� ũ�Ⱑ �ٸ� ��� false
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
