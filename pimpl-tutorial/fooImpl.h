
//FooImpl.h
#pragma once
#include <iostream>
#include <string>

class FooImpl {
public:
	void set(const char *str);
	void print();
private:
	std::string str_;
};
