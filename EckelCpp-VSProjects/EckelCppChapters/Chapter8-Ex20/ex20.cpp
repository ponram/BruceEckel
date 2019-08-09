/*
Create a class called MyString which contains a string
and has a constructor that initializes the string, and a
print( ) function. Modify StringStack.cpp so that the
container holds MyString objects, and main( ) so it prints
them.
*/

#include <iostream>
#include <string>
#include "StringStack.h"


MyString myStrColl[] = 
{
	MyString("one")
	,MyString("two")
	, MyString("three")
};

const int count = sizeof myStrColl / sizeof *myStrColl;

int main()
{
	StringStack ss;
	for (int i = 0; i < count; i++)
		ss.push(&myStrColl[i]);
	const MyString* cp;
	while ((cp = ss.pop()) != 0)
		cp->Print();
} ///:~
