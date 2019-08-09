/*
Use aggregate initialization to create an array of double
in which you specify the size of the array but do not
provide enough elements. Print out this array using
sizeofto determine the size of the array. Now create an
array of double using aggregate initialization and
automatic counting. Print out the array.
*/

#include <iostream>

int main()
{
	double a[4] = { 2.4,3.3 };
	int array_size_a = sizeof(a) / sizeof(*a);

	for (int i = 0; i<array_size_a; i++)
		std::cout << a[i] << std::endl;
}