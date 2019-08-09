//: C08:StringStack.cpp
// Using static const to create a
// compile-time constant inside a class

#include <string>
#include <iostream>
#include "StringStack.h"

using namespace std;


StringStack::StringStack() : index(0) 
{
	memset(stack, 0, size * sizeof(MyString*));
}

void StringStack::push(const MyString* s)
{
	if (index < size)
		stack[index++] = s;
}

const MyString* StringStack::pop()
{
	if (index > 0) {
		const MyString* rv = stack[--index];
		stack[index] = 0;
		return rv;
	}
	return 0;
}

