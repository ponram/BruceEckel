/*
Make a global object of Monitor2 and see what happens.
*/

#include <iostream>
#include "ex06.h"

void Monitor1::incident()
{
	++incidentCount;
}

void Monitor1::decrement()
{
	--incidentCount;
}

void Monitor1::print()
{
	std::cout << "Incident Count: " << incidentCount << std::endl;
}

int Monitor1::incidentCount = 0;

void global1()
{
	Monitor2 obj;
	obj.callMonitor1();
}

Monitor2 obj2; //global object
Monitor2 obj3;
extern void global2(); //add the extern keyword to indicate that global2() is defined else where.

int main()
{
	global1();
	global2();
}