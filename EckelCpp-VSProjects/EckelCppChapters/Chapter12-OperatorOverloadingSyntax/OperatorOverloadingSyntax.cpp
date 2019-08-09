#include<iostream>

class Integer
{
	int i;
public:
	Integer(int ii) :i(ii) {}
	const Integer operator+ (const Integer& arg) const
	{
		std::cout << "Operator +" << std::endl;
		std::cout << "Address of Obj " << this << std::endl;
		std::cout << "Address of arg " << &arg << std::endl;
		return Integer(arg.i + i);
	}
	
	Integer& operator+= (const Integer& arg)
	{
		std::cout << "Operator +=" << std::endl;
		std::cout << "Address of Obj " << this << std::endl;
		std::cout << "Address of arg " << &arg << std::endl;
		i += arg.i;
		return *this;
	}
};

int main()
{
	Integer a(9);
	std::cout << "Address of a " << &a << std::endl;
	Integer b(1);
	std::cout << "Address of b " << &b << std::endl;
	Integer c(3);
	std::cout << "Address of c " << &c << std::endl;

	c += a + b;

}

////: C12:OperatorOverloadingSyntax.cpp
//#include <iostream>
//using namespace std;
//class Integer {
//	int i;
//public:
//	Integer(int ii) : i(ii) {}
//	const Integer operator+(const Integer& rv) const 
//	{
//		cout << "operator+" << endl;
//		return Integer(i + rv.i);
//	}
//
//	Integer& operator+=(const Integer& rv)
//	{
//		cout << "operator+=" << endl;
//		i += rv.i;
//		return *this;
//	}
//};
//int main() {
//	cout << "built-in types:" << endl;
//	int i = 1, j = 2, k = 3;
//	k += i + j;
//	cout << "user-defined types:" << endl;
//	Integer ii(1), jj(2), kk(3);
//	kk += ii + jj;
//} ///:~