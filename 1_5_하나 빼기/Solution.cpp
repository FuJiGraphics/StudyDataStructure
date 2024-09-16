#include "Solution.h"
#include "StringHelper.h"

bool Solution(const std::string& str1, const std::string& str2)
{
	bool result = StringHelper::CheckOneEditString(str1, str2);
	return (result);
}