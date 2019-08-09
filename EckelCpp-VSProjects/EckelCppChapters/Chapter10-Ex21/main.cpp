/*
Repair the problem in OverridingAmbiguity.cpp, first
with scope resolution, then instead with a using
declaration that forces the compiler to choose one of the
identical function names.
*/

//: C10:OverridingAmbiguity.cpp
#include "NamespaceMath.h"
#include "NamespaceOverriding2.h"
void s() {
	using namespace Math;
	using namespace Calculation;
	
	// Everything's ok until:
	//divide(1, 2); // Ambiguity

	//Math::divide(1, 2); //No Ambiguity
	//using Calculation::divide; //using declaration
	//divide(Integer(1), Integer(2));
}
int main() 
{
	//s();
} ///:~