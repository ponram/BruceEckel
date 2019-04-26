/*Create a Hen class. Inside this, nest a Nest class. Inside
Nest, place an Egg class. Each class should have a
300 Thinking in C++ www.BruceEckel.com
display( ) member function. In main( ), create an instance
of each class and call the display( ) function for each one.*/

#include <iostream>

class Nest
{
public:
	void Display();
	class Hen
	{
		public:
		void Display();
		class Egg
		{
			public:
				void Display();
		};
	};
};

void Nest::Display()
{
	std::cout << "Inside Nest" << std::endl;		
}

void Nest::Hen::Display()
{
	std::cout << "Inside Hen" << std::endl;
}

void Nest::Hen::Egg::Display()
{
	std::cout << "Inside Egg" << std::endl;
}

int main()
{
	Nest nest;
	Nest::Hen hen;
	Nest::Hen::Egg egg;

	nest.Display();
	hen.Display();
	egg.Display();
	
	return 0;
}