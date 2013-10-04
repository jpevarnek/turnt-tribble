#include "runner.h"
#include <iostream>

void foo()
{
	runner::print("I run!");
}

int main()
{
	runner run(foo);
	std::cout << "made runner" << std::endl;
	run.run();
}
