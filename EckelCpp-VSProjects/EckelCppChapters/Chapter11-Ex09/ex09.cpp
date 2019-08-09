/*
Write a class that has a const member function and a
non-const member function. Write three functions that
take an object of that class as an argument; the first takes
it by value, the second by reference, and the third by
const reference. Inside the functions, try to call both
member functions of your class and explain the results.
*/

#include <iostream>
//#include <string>

class Test
{
	int i;
	
public:
	Test (int ii = 9):i(ii){}
	void modify()
	{
		std::cout << "Inside modify()" << std::endl;
		i++;
	}
	void print() const
	{
		std::cout << "Inside print()" << i << std::endl;
	}
};

void f1(Test objByVal)
{
	objByVal.modify();
	objByVal.print();
}

void f2(Test& objRef)
{
	objRef.modify();
	objRef.print();
}

void f3(const Test& objRef)
{
	//objRef.modify(); //Error
	objRef.print();
}

int main()
{
	Test testObj;
	f1(testObj);
	f2(testObj);
	f3(testObj);
}