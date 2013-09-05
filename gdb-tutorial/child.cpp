#include <iostream>
#include <csignal>
#include <cstdlib>

void *child(void *arg)
{
	std::cout << "Entering child" << std::endl;

	int a = rand();

	/* the two lines below are just to make explaining gdb easier */
	signal(SIGUSR1, SIG_IGN);
	raise(SIGUSR1);

	std::cout << "Exiting child, a was " << a << std::endl;

	return NULL;
}

