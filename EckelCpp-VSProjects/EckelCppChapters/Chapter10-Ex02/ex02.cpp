/*
Create a function that returns the next value in a
Fibonacci sequence every time you call it. Add an
argument that is a bool with a default value of false such
that when you give the argument with true it “resets” the
function to the beginning of the Fibonacci sequence.
Exercise this function in main( ).
*/

#include <iostream>

double ReturnFibonacci(bool initialize = false)
{
	static double prev, next, retval; 

	if (initialize)
	{
		prev = 0;
		next = 1;
		retval = prev + next;
	}
	else
	{
		prev = next;
		next = retval;
		retval = prev + next;
	}

	return retval;
}

int main()
{
	int x = 0;
	
	std::cout << x << " :\t" << ReturnFibonacci(true) << std::endl;

	while (++x != 100)
		std::cout << x << " :\t" << ReturnFibonacci() << std::endl;

}
