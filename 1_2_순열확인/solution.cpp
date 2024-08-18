#include "solution.h"

// ±¸ÇöºÎ
#include "StringHelper.h"

bool Solution(const std::string& str1, const std::string& str2)
{
	return (StringHelper::RelatedPermutation(str1, str2));
}
