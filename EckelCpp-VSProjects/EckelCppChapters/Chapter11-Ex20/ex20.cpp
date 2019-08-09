/*
Create a very simple class, and a function that returns an
object of that class by value. Create a second function that
takes a reference to an object of your class. Call the first
function as the argument of the second function, and
demonstrate that the second function must use a const
reference as its argument.
*/

class Simple
{
public:
	Simple() {}
};

Simple f1()
{
	Simple obj;
	return obj;
}

//void f2(Simple& s)
//{
//
//}

void f2(const Simple& s)
{

}

int main()
{
	f2(f1());
}