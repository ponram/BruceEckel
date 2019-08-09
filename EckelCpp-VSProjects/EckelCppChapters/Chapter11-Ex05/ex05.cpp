/*
Create a class with some member functions, and make
that the object that is pointed to by the argument of
Exercise 4. Make the pointer a const and make some of
the member functions const and prove that you can only
call the const member functions inside your function.
Make the argument to your function a reference instead
of a pointer.
*/

#include <iostream>

class Test
{
	int i;

public:
	Test() :i(9) {}
	Test(const Test& src) :i(src.i) 
	{
		std::cout << "Entering copy-constructor" << std::endl;
	}

	void print() const
	{
		std::cout << i << std::endl;
	}

	void increment()
	{
		i++;
	}
};

Test& ReturnReference(Test* ptr)
{
	ptr->increment();
	Test& j = *ptr;
	return j;
}

const Test& ReturnReference(const Test& ref)
{
	const Test& m = ref;
	
	//m.increment(); //Error
	m.print();
	return m;
}

int main()
{
	Test obj;
	Test ret1 = ReturnReference(&obj);
	Test ret2 = ReturnReference(obj);

	std::cout << "Address of obj " << &obj << std::endl;
	std::cout << "Address of ret1 " << &ret1 << std::endl;
	std::cout << "Address of ret2 " << &ret2 << std::endl;
}