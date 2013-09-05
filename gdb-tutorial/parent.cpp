#include <iostream>
#include <cstdlib>
#include <ctime>

void *child(void *arg);

int main()
{
	pthread_t thread;

	srand(time(NULL));

	std::cout << "Entering main" << std::endl;

	pthread_create(&thread, NULL, child, NULL);

	pthread_join(thread, NULL);

	std::cout << "Exiting main" << std::endl;
}
