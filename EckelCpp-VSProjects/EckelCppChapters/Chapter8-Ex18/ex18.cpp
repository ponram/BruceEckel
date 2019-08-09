/*
Modify ConstTemporary.cpp removing the comment on
the error-causing line to see what error messages your
compiler generates.
*/

//: C08:ConstTemporary.cpp
// Temporaries are const
class X 
{

};

X f() 
{
	return X(); 
} // Return by value

void g1(X&) 
{

} // Pass by non-const reference

void g2(const X&) 
{

} // Pass by const reference

int main() {
	// Error: const temporary created by f():
	//g1(f()); //Error: Initial value of reference to non-const must be an lvalue
	
	// OK: g2 takes a const reference:
	g2(f());
} ///:~