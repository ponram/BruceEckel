/*
1. Write a simple class called Simplewith a constructor that
prints something to tell you that it’s been called. In
main( ) make an object of your class.

2. Add a destructor to Exercise 1 that prints out a message
to tell you that it’s been called.

3. Modify Exercise 2 so that the class contains an int
member. Modify the constructor so that it takes an int
argument that it stores in the class member. Both the
constructor and destructor should print out the int value
as part of their message, so you can see the objects as
they are created and destroyed.*/

#include <iostream>

class Simplewith
{
private:
	int i;
public:
	Simplewith()
	{
		std::cout << "Constructor called for object " << this << std::endl;
	}

	Simplewith(int ii)
	{
		std::cout << "Constructor called for object " << this << std::endl;
		i = ii;
		std::cout << "Value of i is " << i << std::endl;
	}

	~Simplewith()
	{
		std::cout << "Destructor called for object "<< this << std::endl;
		std::cout << "Value of i is " << i << std::endl;
	}
};

int main()
{
	Simplewith obj;

	Simplewith obj2(81);

	return 0;
}