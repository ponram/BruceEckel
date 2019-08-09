/*
Create a class with a copy-constructor that announces
itself. Make a second class containing a member object of
the first class, but do not create a copy-constructor. Show
that the synthesized copy-constructor in the second class
automatically calls the copy-constructor of the first class.
*/

#include <iostream>

class A
{
public:
	A() {}	
	A(const A&)
	{ 
		std::cout << "Inside A(A&) " << std::endl;
	}
};

class B
{
	A obj;
public:
	B() {}
};

int main()
{
	B b1;
	B b2 = b1;
}