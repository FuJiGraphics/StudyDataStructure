#include "StringHelper.h"

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
