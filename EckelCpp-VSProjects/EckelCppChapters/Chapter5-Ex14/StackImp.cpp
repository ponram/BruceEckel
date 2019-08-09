/*Create a StackOfInt class (a stack that holds ints) using
the “Cheshire cat” technique that hides the low-level data
structure you use to store the elements in a class called
StackImp. Implement two versions of StackImp: one
that uses a fixed-length array of int, and one that uses a
vector<int>. Have a preset maximum size for the stack so
you don’t have to worry about expanding the array in
the first version. Note that the StackOfInt.h class doesn’t
have to change with StackImp.*/

#include "StackOfInt.h"

const int fixedLength = 100;

class StackOfInt::StackImp
{
private:
	int stackArray[fixedLength];
	int index;
	void Push(int i);
	int Pop();
public:
	StackImp() :index(0) {}
	friend StackOfInt;
};

void StackOfInt::StackImp::Push(int value)
{
	if (index < fixedLength)
	{
		stackArray[index] = value;
		index++;
	}	
}

int StackOfInt::StackImp::Pop()
{
	if (index > 0 && index < fixedLength)
	{
		index--;
		return stackArray[index];
	}
	else
		return 0;	
}

void StackOfInt::Initialize()
{
	stackPtr = new StackOfInt::StackImp();
}

void StackOfInt::Push(int i)
{
	stackPtr->Push(i);
}

int StackOfInt::Pop()
{
	return stackPtr->Pop();
}

void StackOfInt::CleanUp()
{
	delete stackPtr;
}