
#include "Handle.h"
#include <iostream>


struct Handle::Cheshire 
{
	Cheshire(int ii) 
	{ 
		std::cout << "Cheshire() called" << std::endl;
		i = ii;
	}
	
	~Cheshire() 
	{ 
		std::cout << "~Cheshire() called" << std::endl; 
	}

	int i;
};

Handle::Handle() 
{
	std::cout << "Handle()  called" << std::endl;
	smile = new Cheshire(0);	
}

Handle::~Handle() 
{
	std::cout << "~Handle()  called" << std::endl;
	delete smile; //Handle owns Cheshire object and hence owns the responsibility to release memory
}

int Handle::read()
{
	return smile->i;
}

void Handle::change(int x) 
{
	smile->i = x;
} 