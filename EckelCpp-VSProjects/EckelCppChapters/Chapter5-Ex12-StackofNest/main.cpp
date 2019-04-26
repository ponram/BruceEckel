#include <iostream>
#include "Nest.h"
#include "../../EckelCppChapters/Code/Stack.h"

int main()
{
	Stack neststack;
	neststack.initialize();
	
	for (int i = 0; i < 3; i++)
	{
		Nest* ptr = new Nest();
		neststack.push(ptr);
	}

	for (int i = 0; i < 3; i++)
	{
		Nest* ptr = (Nest*)neststack.pop();
		ptr->Display();
	}

	return 0;
}
