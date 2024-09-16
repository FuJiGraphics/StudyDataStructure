#include "Solution.h"
#include "StringHelper.h"

std::string Solution(const std::string& str1)
{
	std::string compression = StringHelper::StringCompression(str1);
	return (compression);
}