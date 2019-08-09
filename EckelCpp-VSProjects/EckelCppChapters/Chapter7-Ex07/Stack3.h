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

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>

class Stack {

private:
	struct Link {
		void* data;
		Link* next;
	public:
		Link(void* dat, Link* nxt);
		~Link();
	}*head;

public:
	Stack();
	Stack(std::string* a[], int size);
	//Stack(void* elem, int size);
	~Stack();
	void push(void* dat);
	void* peek();
	void* pop();
};
#endif // STACK_H ///:~
