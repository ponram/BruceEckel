/*
Demonstrate automatic counting and aggregate
initialization with an array of objects of the class you
created in Exercise 3. Add a member function to that
class that prints a message. Calculate the size of the array
and move through it, calling your new member function.
*/
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
		std::cout << "Destructor called for object " << this << std::endl;
		std::cout << "Value of i is " << i << std::endl;
	}

	void Print()
	{
		std::cout << "Value is: " << i << std::endl;
	}
};

int main()
{
	Simplewith obj1(1), obj2(2);
	
	Simplewith a[] = {obj1, obj2};

	int array_size = sizeof(a) / sizeof(*a);

	for (int i = 0; i < array_size; i++)
		a[i].Print();

}