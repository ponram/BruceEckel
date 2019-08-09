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

class Monitor2
{
	Monitor1* ptr;
public:

	Monitor2() :ptr(new Monitor1())
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