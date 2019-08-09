/*
Write a const pointer to a double, and point it at an array
of double. Show that you can change what the pointer
points to, but you can’t increment or decrement the
pointer.
*/

#include <iostream>

double a[] = { 1.5,3.6 };
double* const ptr = a;
double* ptrNonConstant = a;

int main()
{
	//Try increment pointer
	//ptr++; // Error: Cannot be modified i.e you cannot modify the address pointed. 
    ptr[0] = 7.2; //Ok. You can change the value written to that address. 
	
	ptrNonConstant++;
}
