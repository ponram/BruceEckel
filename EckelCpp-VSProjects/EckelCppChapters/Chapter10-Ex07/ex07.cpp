/*
Create a class with a destructor that prints a message and
then calls exit( ). Create a global object of this class and
see what happens
*/

#include <iostream>

class Test
{
public:
	Test() {}
	~Test()
	{
		std::cout << "~Test() called" << std::endl;
		std::exit(EXIT_FAILURE);
	}	
};

Test obj1;
Test obj2;

int main()
{
	return 0;
}