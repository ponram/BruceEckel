#include "StatFunc1.h"
#include "StatFunc2.h"

Dependency1& D1()
{
	static Dependency1 dep1;  //This object is constructed once. It will always have the same address
	return dep1;
}

Dependency2& D2()
{
	Dependency1 obj = D1(); //Remember object construction is initialization
	obj.increment();
	static Dependency2 dep2(obj);
	return dep2;
}