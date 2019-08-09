/*
Create a function that takes a char& argument and
modifies that argument. In main( ), print out a char
variable, call your function for that variable, and print it
out again to prove to yourself that it has been changed.
How does this affect program readability?
*/

#include <iostream>

void f(char& ref)
{
	ref = 'd';
}

int main()
{
	char c = 'c';
	std::cout << c << std::endl;
	f(c);
	std::cout << c << std::endl;
}