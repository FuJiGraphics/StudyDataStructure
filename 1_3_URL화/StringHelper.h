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
	// ��� ������ %20���� �ٲ��ִ� �޼���
	static std::string ConvertSpaceToPerTwenty(const char* str, size_t size);
};