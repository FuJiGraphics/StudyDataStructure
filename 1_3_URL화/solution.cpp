#include "solution.h"

// ������
#include "StringHelper.h"

std::string Solution(const char* str, size_t size)
{
	return (StringHelper::ConvertSpaceToPerTwenty(str, size));
}
