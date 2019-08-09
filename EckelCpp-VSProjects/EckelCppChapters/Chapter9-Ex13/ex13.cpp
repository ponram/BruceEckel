/*
Create a class with two inline member functions, such
that the first function that’s defined in the class calls the
second function, without the need for a forward
declaration. Write a main that creates an object of the
class and calls the first function.
*/

#include <iostream>


class Test
{
public:
	void member1()
	{
		member2();
	}
private:
	void member2()
	{
		std::cout << "member2 called" << std::endl;
	}
};


int main()
{
	Test t;
	t.member1();
}

