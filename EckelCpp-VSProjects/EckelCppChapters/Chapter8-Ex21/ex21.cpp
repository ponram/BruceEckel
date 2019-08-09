/*
Create a class containing a const member that you
initialize in the constructor initializer list and an
untagged enumeration that you use to determine an
array size.
*/

class Test
{
	enum {size=100};
	int x[size];
	const int y;
public:
	Test() :y(0) {}
	
};

int main(){}