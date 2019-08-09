#include <iostream>
#include <string>

class MyString
{
	std::string myStr;

public:
	MyString() :myStr("initialize") {}
	MyString(std::string inputStr) :myStr(inputStr) {}
	void Print() const
	{
		std::cout << myStr << std::endl;
	}
};
