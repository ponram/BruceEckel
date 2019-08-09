/*
Create a const array of char, then try to change one of the
chars.
*/

#include <iostream>

const char a[] = { 'a','b','c' };

int main()
{
	//a[3] = 'p'; //Error, must be a modifiable lvalue
	return 0;
}



