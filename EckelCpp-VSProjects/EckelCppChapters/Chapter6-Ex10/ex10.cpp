/*
Create a class without any constructors, and show that
you can create objects with the default constructor. Now
create a nondefault constructor (one with an argument)
for the class, and try compiling again. Explain what
happened.
*/

class X
{
	int i;
public:
	X(int ii) { i = ii; }	
};

int main()
{
	//X obj; // Error
	X obj(81);
}