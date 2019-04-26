/*Modify Exercise 6 so that Nest and Egg each contain
private data. Grant friendship to allow the enclosing
classes access to this private data.*/

#include <iostream>

class Egg;

class Nest
{
public:
	Nest() :nest(9) {}
	void Display();
	
	class Hen
	{
	public:
		Hen() :hen(12) {}
		void Display();
		//void DisplayPrivateEgg(Egg* ptr);
		class Egg
		{
		public:
			Egg() :egg(81) {}
			void Display();
			//friend void Hen::DisplayPrivateEgg(Hen::Egg* ptr);
		private:
			int egg;
		};		
	private:
		int hen;
	};
private:
	int nest;
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