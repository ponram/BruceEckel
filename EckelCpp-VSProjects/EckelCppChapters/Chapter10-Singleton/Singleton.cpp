#include <iostream>
using namespace std;

class Singleton
{
	static Singleton s;
	int i;
	Singleton(int ii) :i(ii) {} //constructor is deliberately made private
	Singleton(const Singleton&); //copy constructor deliberately declared as private to prevent copying. No definition required
public:

	//Static member function to ensure there is only one instance of this class
	static Singleton* GetInstance()
	{
		return &s; //can only access a static member
	}

	int GetVal()
	{
		return i;
	}
};

Singleton Singleton::s(81); //One-time definition

int main()
{
	Singleton* ptr = Singleton::GetInstance();
	cout << ptr->GetVal() << endl;

	Singleton* ptr2 = Singleton::GetInstance();
	cout << ptr2->GetVal() << endl;

	bool pointerMatch = (ptr == ptr2);
	cout << pointerMatch << endl;
}

