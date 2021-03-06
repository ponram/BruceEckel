/**
Add a binary operator- to Exercise 2 as a member function.
Demonstrate that you can use your objects in complex expressions like
a + b � c.

Ex 2:
Create a simple class containing an int and overload the operator+ as a
member function. Also provide a print( ) member function that takes an
ostream& as an argument and prints to that ostream&. Test your class to
show that it works correctly.
**/

#include <iostream>

using namespace std;

class SimpleInt {
public:
    SimpleInt() : i(0) {}
    SimpleInt(int iii) : i(iii) {}

    const SimpleInt operator+(const SimpleInt& right) const { return SimpleInt(i + right.i); }
    const SimpleInt operator-(const SimpleInt& right) const { return SimpleInt(i - right.i); }

    void print(ostream& out) { out << i << endl; }
private:
    int i;
};

int main() {

    SimpleInt a(3), b(2), c(4);

    SimpleInt d = a + b - c;

    d.print(cout);

return 0;
}
