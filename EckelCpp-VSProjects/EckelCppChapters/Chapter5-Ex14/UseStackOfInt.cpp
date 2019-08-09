#include "StackOfInt.h"
#include <iostream>

int main()
{
	StackOfInt stack;
	stack.Initialize();

	for (int i = 1; i <= 200; i++)
	{
		stack.Push(i);
	}

	for (int i = 1; i <= 200; i++)
		std::cout << stack.Pop() << std::endl;

	stack.CleanUp();
	
	return 0;
}