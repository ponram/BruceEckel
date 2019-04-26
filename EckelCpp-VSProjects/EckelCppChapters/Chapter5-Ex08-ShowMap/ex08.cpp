/*Create a class with data members distributed among
numerous public, private, and protected sections. Add a
member function showMap( ) that prints the names of
each of these data members and their addresses. If
possible, compile and run this program on more than one
compiler and/or computer and/or operating system to
see if there are layout differences in the object*/

#include <iostream>
#include <string>
class A
{
private:
	int member1;
	int member2;
	std::string member3;
public:
	int member4;
	char member5;
	void showMap();
};

void A::showMap()
{
	std::cout << "Member 1 :" << (long)&member1 << std::endl;
	std::cout << "Member 2 :" << (long)&member2 << std::endl;
	std::cout << "Member 3 :" << (long)&member3 << std::endl;
	std::cout << "Member 4 :" << (long)&member4 << std::endl;
	std::cout << "Member 5 :" << (long)&member5 << std::endl;	
}

int main()
{
	A obj;
	obj.showMap();

	return 0;
}