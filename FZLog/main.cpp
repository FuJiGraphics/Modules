#include <iostream>
#include "FZLog.hpp"

int main(void)
{
	FZLOG_TRACE("log {0} {1} {2}", 0, 1.1, "String");
	FZLOG_DEBUG("log {0} {1} {2}", 0, 1.1, "String");
	FZLOG_INFO("log {0} {1} {2}", 0, 1.1, "String");
	FZLOG_WARN("log {0} {1} {2}", 0, 1.1, "String");
	FZLOG_ERROR("log {0} {1} {2}", 0, 1.1, "String");
	FZLOG_CRITICAL("log {0} {1} {2}", 0, 1.1, "String");
	int* ptr = nullptr;
	FZLOG_ASSERT(ptr, "ptr is null!");

	return 0;
}