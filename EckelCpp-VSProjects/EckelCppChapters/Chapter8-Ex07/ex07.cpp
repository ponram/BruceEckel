/*
Create an extern const declaration in one file, and put a
main( ) in that file that prints the value of the extern
const. Provide an extern const definition in a second file,
then compile and link the two files together.
*/

#include <iostream>
#include "ex07.h"

extern const int val; //Declaration only. No storage allocation

int main()
{
	std::cout << val << std::endl;
	
	return 0;
}