/*
Create a class that contains an array of char. Add an
inline constructor that uses the Standard C library
function memset( ) to initialize the array to the
constructor argument (default this to ‘ ’), and an inline
member function called print( ) to print out all the
characters in the array.
*/

#include <iostream>

class Test
{
	char* a;
	enum {size=3};

public:
	Test(char c = ' ')
	{
		a = new char[size];
		memset(a, c, size);
	}

	void Print()
	{
		//int size = sizeof(a) / sizeof(*a);
		for (int i = 0; i < size; i++)
		{
			std::cout << a[i] << std::endl;
		}
	}
};

int main()
{
	Test tt(3);
	tt.Print();
}