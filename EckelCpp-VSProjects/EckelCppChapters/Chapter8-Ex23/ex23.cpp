/*
Create a class with both const and non-const member
functions. Create const and non-const objects of this
class, and try calling the different types of member
functions for the different types of objects.
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