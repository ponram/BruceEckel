#include <iostream>
#include "Nest.h"

void Nest::Display()
{
	std::cout << "Inside Nest" << std::endl;
	h.Display();
}

void Nest::Hen::Display()
{
	std::cout << "Inside Hen" << std::endl;
	e.Display();
}

void Nest::Hen::Egg::Display()
{
	std::cout << "Inside Egg" << std::endl;
}