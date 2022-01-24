#include <regex>

int main()
{
	std::wregex re(LR"(^("[^"]+"|[^ ]+)\s+(.+))");
}
