#pragma once

#include <vector>
#include <string>

class StringHelper
{
public:
	// ���ڿ� ���� �ߺ��Ǵ� ���ڰ� �ִ��� ���� Ȯ�� �޼���
	static bool HasDuplicated(const std::string& str);
	// ���� ���� ���� Ȯ�� �޼���
	static bool RelatedPermutation(const std::string& str1, const std::string& str2);
	// ���ڿ� ���� ��� ������ ��ū���� �ٲ��ִ� �޼���
	static std::string ConvertSpaceToToken(const std::string& str, const std::string& token);
	// ���� ���� �õ� ��, 1ȸ �̳� ȸ���� �����ص� �Ǵ��� ����
	static bool CheckOneEditString(const std::string& str1, const std::string& str2);
	// ���ڿ� ���� �˰���
	static std::string StringCompression(const std::string& str);
};