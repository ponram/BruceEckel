/*
Create a class containing an int, a constructor that
initializes the int from its argument, and a print( )
function to display the int. Now create a second class
that contains a static object of the first one. Add a static
member function that calls the static object’s print( )
function. Exercise your class in main( ).
*/

#include <iostream>
#include <string>

class Test
{
	int i;

public:
	Test(int ii = 0):i(ii){}
	void Print() { std::cout << i << std::endl; }
	void Modify(int newVal) { i = newVal; }
};

class TestStatic
{
	static Test t;
	std::string id;

public:
	TestStatic(std::string iid) :id(iid) {}
	void Print()
	{
		std::cout << "Print from " << id << std::endl;
		t.Print();
	}
	void Modify(int newVal)
	{
		t.Modify(newVal);
	}
};

Test TestStatic::t(9);

int main()
{
	TestStatic obj1("obj1");
	obj1.Print();

	TestStatic obj2("obj2");
	obj2.Print();

	
	obj1.Modify(81);
	obj1.Print();
	obj2.Print();

	return 0;
}