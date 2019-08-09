/*
In class Mem, add a boolmoved( ) member function that
takes the result of a call to pointer( ) and tells you
whether the pointer has moved (due to reallocation).
Write a main( ) that tests your moved( ) member
function. Does it make more sense to use something like
moved( ) or to simply call pointer( ) every time you need
to access the memory in Mem?
*/

#include <iostream>
#include "Mem.h"

using namespace std;
int main()
{
	Mem m(10);

	cout << "Mem initialized.\n" << endl;

	cout << "Current mem data:"
		<< "\n      address: " << (long)m.pointer()
		<< "\n init address: " << (long)m.init_ptr()
		<< "\n         size: " << m.msize() << endl;

	if (m.moved(m.pointer()))
		cout << "Memory was moved." << endl;
	else
		cout << "Memory wasn't moved." << endl;

	cout << "\nRelocating memory...\n" << endl;

	m.ensureMinSize(50);

	cout << "Current mem data:"
		<< "\n      address: " << (long)m.pointer()
		<< "\n init address: " << (long)m.init_ptr()
		<< "\n         size: " << m.msize() << endl;

	if (m.moved(m.pointer()))
		cout << "Memory was moved." << endl;
	else
		cout << "Memory wasn't moved." << endl;
}