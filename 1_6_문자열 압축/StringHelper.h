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
	// 문자열 내에 모든 공백을 토큰으로 바꿔주는 메서드
	static std::string ConvertSpaceToToken(const std::string& str, const std::string& token);
	// 문자 편집 시도 시, 1회 이내 회수만 수정해도 되는지 여부
	static bool CheckOneEditString(const std::string& str1, const std::string& str2);
	// 문자열 압축 알고리즘
	static std::string StringCompression(const std::string& str);
};