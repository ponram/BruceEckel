#include "Stack3.h"
#include <iostream>

const int size = 100;

int main()
{
	Stack stack;
	
	//for (int i = 1; i <= 3; ++i)
	//	stack.push(&i); //Wrong method. This would just push the same address and your pop() values would always be the same

	int input[size];

	for (int i = 0; i < size; i++)
		input[i] = i;

	for (int i = 0; i < size; i++)
		stack.push(&input[i]);

	int* peekPtr = (int*)stack.peek();
	
	if (peekPtr != 0)
		std::cout << "Peek Value: " << *peekPtr << std::endl;

	for (int i = 0; i <size; i++)
	{
		int* ptr = (int*)stack.pop();
		if (ptr != 0)
			std::cout << "Popping: " << *ptr << std::endl;		
	}	
}