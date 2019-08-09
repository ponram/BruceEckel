/*
Chapter7-ex02
Create a Message class with a constructor that takes a
single string with a default value. Create a private
member string, and in the constructor simply assign the
argument string to your internal string. Create two
overloaded member functions called print( ): one that
takes no arguments and simply prints the message stored
in the object, and one that takes a string argument, which
it prints in addition to the internal message. Does it make
sense to use this approach instead of the one used for the
constructor?
*/

#include <iostream>
#include <string>
class Message
{
	std::string value;

public:
	Message(std::string input = "Default"):value(input){}
	void print()
	{
		std::cout << value << std::endl;
	}
	void print(std::string arg)
	{
		std::cout << arg << std::endl;
		std::cout << value << std::endl;
	}
};

int main()
{
	Message msg;
	msg.print();
	msg.print("print");
}