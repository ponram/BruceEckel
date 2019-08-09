/*
Create three const int values, then add them together to
produce a value that determines the size of an array in an
array definition. Try to compile the same code in C and
see what happens (you can generally force your C++
compiler to run as a C compiler by using a command-line
flag).
*/

#include <iostream>

const int v1 = 3;
const int v2 = 2;
const int v3 = 4;

int a[v1 + v2 + v3];

int main()
{
	return 0;
}