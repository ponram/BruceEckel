/*
Take the NestFriend.cpp example from Chapter 5 and
replace all the member functions with inlines. Make them
non-in situ inline functions. Also change the initialize( )
functions to constructors.
*/

//: C05:NestFriend.cpp
// Nested friends
#include <iostream>
#include "NestedFriend.h"
using namespace std;

int main()
{
	Holder h;
	Holder::Pointer hp(&h), hp2(&h);
	int i;
	
	for (i = 0; i < sz; i++)
	{
		hp.set(i);
		hp.next();
	}
	
	hp.top();
	hp2.end();
	
	for (i = 0; i < sz; i++) {
		cout << "hp = " << hp.read()
			<< ", hp2 = " << hp2.read() << endl;
		hp.next();
		hp2.previous();
	}
} ///:~