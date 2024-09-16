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
    int nChange = 0;   // ���ڿ� ����, ����, ��ü�� Ƚ���� ����ϴ� ����

    // ���ڿ� ���̰� ���� ���
    if (str1.size() == str2.size())
    {
        // ���ڿ��� ���� ��� ����, ������ ����� ���� ������Ƿ�,
        // ���ڿ� ��ü�� ��Ȳ�� ����Ѵ�.
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
    // ���ڿ� ���̰� �ٸ� ���
    else
    {
        // ���� ���ڿ� a, b�� ���̰� 2�̻� ���̳� ���,
        // 2ȸ �̻� ����, ������ �ؾ��ϹǷ�, �۾� ������ ���� �ʵ��� �Ѵ�.
        int s1_size = static_cast<int>(str1.size());
        int s2_size = static_cast<int>(str2.size());
        int size = (s1_size > s2_size) ? s1_size - s2_size : s2_size - s1_size;
        // ���ڿ� a, b�� ���� ���̰� 1������ ��츸 �۾� ����
        if (size <= 1)
        {
            // �� ���ڿ��� Ž���ϴ� �������� ���� ���ڿ����� �ٸ� �κ��� ã�´�.
            auto& longStr = (str1.size() > str2.size()) ? str1 : str2;
            auto& shortStr = (str1.size() < str2.size()) ? str1 : str2;
            auto s2_iter = shortStr.begin();
            for (char c : longStr)
            {
                // ���� ������ �����Ͽ�, a,b�� ���ڰ� �ٸ� ���
                // ���� �� ������ ���� ������ �ʿ��ϹǷ� ����Ѵ�.
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
        // ���ڿ� ���̰� 1�̻� ���̳� ���� nChange�� ����ϰ� �۾� �������� ����
        else
        {
            nChange = size;
        }
    }

    // ��ü, ����, ������ 1ȸ �̳��� �Ͼ�� ��� true;
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
    int nCnt = 0;            // ���ڰ� �ߺ��Ǵ� ������ ���� ��Ų��.
    char prev_c = str[0];    // üũ�� ���� ���ڸ� ����Ѵ�.
    for (int i = 0; i < size; ++i)
    {
        // ���� ���ڿ� ���Ͽ� ���� ������ ���
        // ī��Ʈ�� ������Ų��.
        if (prev_c == str[i])
        {
            nCnt = nCnt + 1;
            // ���� �ε������� ����Ǵ� ������ ���
            // ������ ����� �ݿ��Ѵ�.
            if (i + 1 == size)
            {
                result = result + prev_c;
                result = result + std::to_string(nCnt);
            }
        }
        // ���� ���� ���ڿ� �ٸ� ������ ���
        // ���ڸ� �����ϰ� ���� ȸ���� ���� ����� �ݿ��Ѵ�.
        else
        {
            result = result + prev_c;
            result = result + std::to_string(nCnt);
            prev_c = str[i];
            nCnt = 1;
        }
    }
    // ����� ���ڿ��� ���� ���ڿ����� �� ��� 
    // ���� ���ڿ��� �ѹ�
    if (result.size() > str.size())
        result = str;
    return (result);
}
