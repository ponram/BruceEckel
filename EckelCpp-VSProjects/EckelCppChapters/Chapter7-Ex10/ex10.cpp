/**
Use class Mem to implement Stash. Note that because the implementation
is private and thus hidden from the client programmer, the test code
does not need to be modified.
**/

#include<iostream>
#include "Stash3.h"

int main()
{
	Stash intStash(sizeof(int));
	
	for (int i = 0; i < 10; i++)
		intStash.add(&i);
	
	for (int i = 0; i < 10; i++)
		std::cout << *(int*)intStash.fetch(i) << std::endl;

	return 0;
}