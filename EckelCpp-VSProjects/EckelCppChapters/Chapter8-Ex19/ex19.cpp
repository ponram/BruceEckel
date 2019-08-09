/*
Create a class containing both a const and a non-const
float. Initialize these using the constructor initializer list.
*/

class TestConst
{
	const float x;
	float y;

public:
	TestConst() :x{ 3.5 }, y{ 4.5 }{}
	TestConst(float xx, float yy) :x(xx), y(yy){}
};

int main()
{
	TestConst testObj;
}