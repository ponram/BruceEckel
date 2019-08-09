//: C10:InitializerDefs.cpp {O}
// Definitions for Initializer.h
#include "Initializer.h"
// Static initialization will force
// all these values to zero:
int x;
int y;
int Initializer::initCount; //initCount is declared as a private static variable and so it must be initialized

int Sum()
{
	return x + y;
}
							///:~