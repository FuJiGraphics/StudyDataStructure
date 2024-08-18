#include "solution.h"

// 구현부 헤더
#include "StringHelper.h"

using namespace std;

std::vector<bool> Solution(const std::vector<std::string>& strings)
{
	std::vector<bool> vResults;

	bool result = false;
	for (const string& str : strings)
	{
		result = StringHelper::HasDuplicated(str);
		vResults.push_back(result);
	}

	return (vResults);
}
