/* 
Write two for loops that print out values from zero to 10.
In the first, define the loop counter before the for loop,
and in the second, define the loop counter in the control
expression of the for loop. For the second part of this
exercise, modify the identifier in the second for loop so
that it as the same name as the loop counter for the first
and see what your compiler does.
*/

#include <iostream>

int main()
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		std::cout << i << std::endl;
	}

	for (int j = 0; j <= 10; j++)
	{
		std::cout << j << std::endl;
	}


	for (int i = 0; i <= 10; i++)
	{
		std::cout << i << std::endl;
	}
}