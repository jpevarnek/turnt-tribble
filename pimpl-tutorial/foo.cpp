#include "foo.h"
#include "fooImpl.h"
//Need to #include “FooImpl.h” here so that the compiler knows what
//functions it has.

Foo::Foo() : impl_(new FooImpl())
{
}

Foo::~Foo()
{
	delete impl_;
}

void Foo::bar()
{
	impl_->bar();
}
