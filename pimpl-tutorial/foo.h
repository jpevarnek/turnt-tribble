#pragma once
class FooImpl;
//Tells compiler that this class exists, somewhere, and lets us
//refer to it by pointer/reference.

class Foo {
public:
	Foo();
	~Foo();
	void bar();
private:
	FooImpl* impl_; //The actual pimpl
};
