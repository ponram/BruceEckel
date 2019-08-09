/*
Chapter7-ex07
Create a new version of the Stack class (from Chapter 6)
that contains the default constructor as before, and a
second constructor that takes as its arguments an array of
pointers to objects and the size of that array. This
constructor should move through the array and push
each pointer onto the Stack. Test your class with an array
of string.
*/

#include <iostream>
#include <string>
#include "Stack3.h"

int main()
{
	std::string strings[] = { "one","two","three" };
	

	const int array_size = sizeof(strings) / sizeof(std::string);
	std::string* inputs[array_size];
	for (int i = 0; i < array_size; i++)
	{
		inputs[i] = &strings[i];
	}

	Stack stack(inputs, array_size);

	std::string* s;
	while ((s = (std::string*)stack.pop()) != 0) {
		std::cout << *s << std::endl;
		//delete s;
	}
	
	//while(line = (std::string*)stack.pop() != 0)

}