/*
Create a class that holds an array of ints. 
Set the size of the array using static const int inside the class. 
Add a const int variable, and initialize it in the constructor initializer list; make the constructor inline. 
Add a static int member variable and initialize it to a specific value.
Add a static member function that prints the static data member.
Add an inline member function called print( )
to print out all the values in the array and to call the
static member function. Exercise this class in main( ).
*/


#include <string>
#include <iostream>


class Test
{
	static const int size = 3;
	const int i;
	int a[size] = { 1,2,3 };
	static int sMem;
	std::string id = "";
public:
	Test(const int ii, std::string name):i(ii)
	{
		id = name;
		sMem = i;
	}
	static void PrintMem();

	void Print()
	{
		std::cout << "Inside: " << id << std::endl;
		
		for (int i = 0; i < size; ++i)
			std::cout << a[i] << std::endl;

		PrintMem();
	}
};

int Test::sMem = 9; //static membber is initialized outside the class

void Test::PrintMem()
{
	std::cout << sMem << std::endl;
	//std::cout << i << std::endl;//error: cannot call a non-static member
}

int main()
{
	Test t(9,"T");
	t.Print();

	Test x(81, "X");
	x.Print();
	t.Print();
}