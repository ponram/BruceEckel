/*
Create a simple class without a copy-constructor, and a
simple function that takes an object of that class by value.
Now change your class by adding a private declaration
(only) for the copy-constructor. Explain what happens
when your function is compiled.
*/

#include <iostream>

class A
{
private:
	A(const A&)
	{
		std::cout << "Inside A(A&) " << std::endl;
	}
public:
	A() {}	
};

void f(A obj)
{

}


int main()
{
	A origObj;
	//f(origObj); //A(const A&) is inaccessible
}