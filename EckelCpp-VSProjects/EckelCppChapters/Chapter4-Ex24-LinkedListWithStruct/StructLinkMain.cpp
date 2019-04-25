/***
Create a struct that holds an int and a pointer to another
instance of the same struct. Write a function that takes
the address of one of these structs and an int indicating
the length of the list you want created. This function will
make a whole chain of these structs (a linked list), starting
from the argument (the head of the list), with each one
pointing to the next. Make the new structs using new,
and put the count (which object number this is) in the int.
In the last structin the list, put a zero value in the pointer
to indicate that it’s the end. Write a second function that
takes the head of your list and moves through to the end,
printing out both the pointer value and the int value for
each one.

***/
#include <iostream>
#include "StructLink.h"

void Initialize(structLink* linkedList)
{
	linkedList->head = 0;
	linkedList->value = 0;
}

void AddToLink(structLink* parent, structLink* child, int newValue)
{
	child->value = newValue;
	child->head = parent;
}

structLink* MakeChain(structLink* linkedList, int chainCount)
{
	Initialize(linkedList);

	for (int i = 1; i <= chainCount; i++)
	{
		structLink* newLink = new structLink;
		newLink->value = i;
		newLink->head = linkedList;
		linkedList = newLink;
	}

	return linkedList;
}

void PrintChain(structLink* headptr)
{
	while (headptr->head != 0)
	{
		std::cout << "Object: " << headptr << " HeadPointer: " << headptr->head << " Value: " << headptr->value << std::endl;
		headptr = headptr->head;
	}
}

int main()
{
	structLink link;
	structLink* linkedList = MakeChain(&link, 3);

	PrintChain(linkedList);
	return 0;
}