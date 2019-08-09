/*
Create a function with a static variable that is a pointer
(with a default argument of zero). When the caller
provides a value for this argument it is used to point at
the beginning of an array of int. If you call the function
with a zero argument (using the default argument), the
function returns the next value in the array, until it sees a
“-1” value in the array (to act as an end-of-array
indicator). Exercise this function in main( ).
*/

#include <iostream>

int RetVal(int* i = 0)
{
	static int* ptr;

	if (i)
	{
		ptr = i;
		return *ptr;
	}

	if(*ptr == -1)
		return 0;

	return *(ptr++);
}

int main()
{
	int a[] = { 1,2,3,-1 };
	
	RetVal(a);
	
	int x;
	
	while ( (x = RetVal()) != 0 )
	{
		std::cout << x << std::endl;
	}	
	
}
