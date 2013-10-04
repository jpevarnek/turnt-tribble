#ifndef __RUNNER_H
#define __RUNNER_H

#include <string>

class runner {
public:
	runner(void (*fn)(void));
	~runner();

	/* runs the function that was passed into the constructor */
	void run();

	static void print(std::string str);

	class impl;
	impl *impl_ptr;
};

#endif //__RUNNER_H
