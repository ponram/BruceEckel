/*
Create a class that contains a double*. The constructor
initializes the double* by calling new double and
assigning a value to the resulting storage from the
constructor argument. The destructor prints the value
that’s pointed to, assigns that value to -1, calls delete for
the storage, and then sets the pointer to zero. Now create
a function that takes an object of your class by value, and
call this function in main( ). What happens? Fix the
problem by writing a copy-constructor.
*/
#include <iostream>

class Test
{
	double* ptr;

public:
	Test() :ptr(new double(9)) {}

	Test(const Test& orig)
	{
		std::cout << "Inside Test(Test&) " << this << std::endl;
		ptr = new double(*(orig.ptr));
		std::cout << "New ptr constructed " << ptr << std::endl;
	}

	double* ptrVal() const
	{
		return ptr;
	}

	~Test()
	{
		std::cout << "Inside ~Test() for " << this << std::endl;
		std::cout << "Deleting ptr " << ptr << std::endl;
		*ptr = -1;
		delete ptr;
		ptr = 0;
	}
};

Test f(const Test obj)
{
	std::cout << "Inside f() " << std::endl;	
	std::cout << "Addr of obj " << &obj << std::endl;
	std::cout << "Ptr Value " << obj.ptrVal() << std::endl;
	return obj;
}

int main()
{
	Test tstObj; 
	std::cout << "orig obj " << &tstObj << std::endl;
	std::cout << "orig ptr " << tstObj.ptrVal() << std::endl;
	Test tstObj2 = f(tstObj);  //This is copy-construction and not copy-assignment
	std::cout << "orig ptr after f()" << tstObj2.ptrVal() << std::endl;
}