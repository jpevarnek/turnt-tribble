#include "fooImpl.h"

void FooImpl::set(const char *str)
{
	str_ = str;
}

void FooImpl::print()
{
	std::cout << str_ << std::endl;
}
