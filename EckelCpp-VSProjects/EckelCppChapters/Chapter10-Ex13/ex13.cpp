/*
Declare a function in a header file. Define the function in
one cpp file and call it inside main( ) in a second cpp file.
Compile and verify that it works. Now change the
function definition so that it is static and verify that the
linker cannot find it.
*/

#include "ex13.h"
#include <iostream>

//static
void testFunc() {
	std::cout << "testFunc() called." << std::endl;
}

