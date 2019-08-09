/*Modify Cheshire in Handle.cpp, and verify that your
project manager recompiles and relinks only this file, but
doesn’t recompile UseHandle.cpp*/

#include <iostream>
#include "Handle.h"

int main()
{
	Handle h;

	h.initialize();
	int i = h.read();
	h.change(81);

	i = h.read();

}