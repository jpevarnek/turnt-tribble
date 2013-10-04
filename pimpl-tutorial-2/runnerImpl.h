#ifndef __RUNNERIMPL_H
#define __RUNNERIMPL_H

class runner::impl {
public:
	impl(void(*fn)(void));
	static void print(std::string str);
	void run();

private:
	void (*_fn)(void);

};

#endif //__RUNNNERIMPL_H
