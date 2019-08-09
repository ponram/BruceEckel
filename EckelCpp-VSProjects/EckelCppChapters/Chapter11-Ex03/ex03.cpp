/*
Write a program in which you try to (1) Create a
reference that is not initialized when it is created. (2)
Change a reference to refer to another object after it is
initialized. (3) Create a NULL reference.
*/

#include <iostream>
int main()
{
	//int& a; //Error

	int i = 9;
	int& j = i;

	std::cout << j << std::endl;

	int k = 81;
	j = k;

	std::cout << j << std::endl;


	//const int& m = nullptr;
}