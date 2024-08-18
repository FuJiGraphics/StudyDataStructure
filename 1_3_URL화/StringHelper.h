#pragma once

#include <vector>
#include <string>

class StringHelper
{
public:
	// 문자열 내에 중복되는 문자가 있는지 여부 확인 메서드
	static bool HasDuplicated(const std::string& str);
	// 순열 관계 여부 확인 메서드
	static bool RelatedPermutation(const std::string& str1, const std::string& str2);
	// 모든 공백을 %20으로 바꿔주는 메서드
	static std::string ConvertSpaceToPerTwenty(const char* str, size_t size);
};