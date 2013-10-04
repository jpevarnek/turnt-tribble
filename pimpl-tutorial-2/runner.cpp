#include <iostream>
#include "runner.h"
#include "runnerImpl.h"


runner::impl::impl(void(*fn)(void))
{
	_fn = fn;
}

void runner::impl::print(std::string str)
{
	std::cout << "foo";
}

void runner::impl::run()
{
	_fn();
}

runner::runner(void (*fn)(void))
{
	impl_ptr = new impl(fn);
}

runner::~runner()
{
	delete impl_ptr;
}

void runner::print(std::string str)
{
	impl::print(str);
}

void runner::run()
{
	impl_ptr->run();
}
