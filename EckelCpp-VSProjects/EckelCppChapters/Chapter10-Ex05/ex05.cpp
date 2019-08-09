/*
Modify the Monitor class from Exercise 4 so that you can
decrement( ) the incident count. 
Make a class Monitor2 that takes as a constructor argument a pointer to a
Monitor1, and which stores that pointer and calls
incident( ) and print( ). 
In the destructor for Monitor2, call decrement( ) and print( ).
Now make a static object of Monitor2 inside a function. 
Inside main( ), experiment with calling the function and not calling the function to
see what happens with the destructor of Monitor2.
*/

#include <iostream>

class Monitor1
{
	static int incidentCount; //static object needs to be initialized. You get a linker error otherwise. 

public:
	Monitor1()
	{
		std::cout << "Inside Monitor1" << std::endl;
	}
	void incident();
	void decrement();
	void print();
	~Monitor1()
	{
		std::cout << "Inside ~Monitor1" << std::endl;
	}
};

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

class Monitor2
{
	Monitor1* ptr;
public:

	Monitor2():ptr(new Monitor1())
	{
		std::cout << "Inside Monitor2" << std::endl;
	}

	Monitor2(Monitor1* arg)
	{
		ptr = arg;
	}
	
	void callMonitor1()
	{
		ptr->incident();
		ptr->print();
	}

	~Monitor2()
	{
		std::cout << "Inside ~Monitor2" << std::endl;
		ptr->decrement();
		ptr->print();
		delete ptr;
	}
};

void global()
{
	Monitor2 obj;
	obj.callMonitor1();
}

int main()
{
	global();
}