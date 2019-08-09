//: C10:Dependency1.h
#ifndef DEPENDENCY1_H
#define DEPENDENCY1_H
#include <iostream>
class Dependency1 {
	bool init;
	int i = 3;
public:
	Dependency1() : init(true)
	{
		std::cout << "Dependency1 construction"
			<< std::endl;
		std::cout << "Address is " << (long)this << std::endl;
	}

	void increment()
	{
		i += 3;
	}

	void print() const 
	{
		std::cout << "Dependency1 init: "
			<< init << std::endl;
		std::cout << "Value of i is " << i << std::endl;		
	}
};
#endif // DEPENDENCY1_H ///:~