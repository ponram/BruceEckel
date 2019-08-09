#include "Stack3.h"
#include <iostream>

Stack::Stack()
{
	head = 0;
}

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