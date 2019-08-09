/*
Create a character array literal with a pointer that points
to the beginning of the array. Now use the pointer to
modify elements in the array. Does your compiler report
this as an error? Should it? If it doesn’t, why do you think
that is?
*/

#include<iostream>

int main()
{
	char literal[] = "text";
	char* cp = literal;

	std::cout << literal << std::endl;

	*cp = 'T'; //!No errors

	std::cout << literal << std::endl;
}