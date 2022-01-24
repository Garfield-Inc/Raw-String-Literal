#include <regex>

void fun()
{
	std::wregex re(LR"(^("[^"]+"|[^ ]+)\s+(.+))");
}
