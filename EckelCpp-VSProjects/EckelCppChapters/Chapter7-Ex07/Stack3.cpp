/*
Chapter7-ex07
Create a new version of the Stack class (from Chapter 6)
that contains the default constructor as before, and a
second constructor that takes as its arguments an array of
pointers to objects and the size of that array. This
constructor should move through the array and push
each pointer onto the Stack. Test your class with an array
of string.
*/


#include "Stack3.h"
#include <iostream>

Stack::Stack()
{
	head = 0;
}

Stack::Stack(std::string* a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		push(a[i]);
	}
}

//Stack::Stack(void* elem, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		push((std::string*)elem + i);
//	}
//}

Stack::Link::Link(void* dat, Link* nxt)
{
	data = dat;
	next = nxt;
}

Stack::Link::~Link() {}

void Stack::push(void* value)
{
	head = new Link(value, head);
}

void* Stack::peek()
{
	return head->data;
}

void* Stack::pop()
{
	if (head == 0) return 0;

	Link* oldHead = head;
	void* result = oldHead->data;
	head = head->next;
	delete oldHead; //Important Note: This 'delete' operation releases memory for the Link object which only contains pointer variables as members. The result value goes out of scope along with input[] 
	return result;
}

Stack::~Stack()
{
	if (head != 0)
		std::cout << "Stack not empty" << std::endl;
}