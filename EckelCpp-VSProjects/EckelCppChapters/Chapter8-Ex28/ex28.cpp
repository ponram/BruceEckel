/*
Create a class called bird that can fly( ) and a class rock
that can’t. Create a rock object, take its address, and
assign that to a void*. Now take the void*, assign it to a
bird* (you’ll have to use a cast), and call fly( ) through
that pointer. Is it clear why C’s permission to openly
assign via a void* (without a cast) is a “hole” in the
language, which couldn’t be propagated into C++?
*/

#include <iostream>

class bird
{
public:
	void fly()
	{
		std::cout << "Inside fly" << std::endl;
	}
};

class rock
{
public:
	void Nofly()
	{
		std::cout << "Inside No fly" << std::endl;
	}
};

int main()
{
	rock rockObj;
	void* rockPtr = &rockObj;

	bird* rockAsbird = (bird*)rockPtr;

	rockAsbird->fly();
}