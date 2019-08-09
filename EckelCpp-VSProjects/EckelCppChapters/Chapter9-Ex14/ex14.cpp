/*
Create a class A with an inline default constructor that
announces itself. Now make a new class B and put an
object of A as a member of B, and give B an inline
constructor. Create an array of B objects and see what
happens.
*/

#include <iostream>
using namespace std;

class A
{
public:
	A() { cout << "A constructed" << endl; }

};

class B
{
	A aa;
public:
	B() { cout << "B constructed" << endl; }
};

int main()
{
	B bb[10];
}