/*
Create a class with both const and non-const member
functions. Try to call a non-const member function from
a const member function to see what kind of compiler
error message you get.
*/


#include <iostream>

class Test
{
private:
	int i;

public:
	
	Test() :i(0) {}
	
	Test(int ii) :i(ii) {}
	
	int square()
	{
		return i * i;
	}

	void print() const
	{
		//square();
		std::cout << i << std::endl;
	}
};

int main()
{
	Test obj1;
	const Test obj2(9);

	obj1.square();
	obj1.print();
	//obj2.square(); //Error
	obj2.print();

}