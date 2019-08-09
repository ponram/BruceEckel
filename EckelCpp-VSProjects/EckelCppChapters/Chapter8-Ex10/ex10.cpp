/*
Write a const pointer to a const object. Show that you can
only read the value that the pointer points to, but you
can’t change the pointer or what it points to.
*/

#include <iostream>

const int i = 9;
const int* const ptr = &i;

int main()
{
	//ptr++; //Error
	//*ptr = 6; // Error

	std::cout << *ptr << std::endl; //ok
}