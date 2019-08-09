#include "ex32.h"
#include  <iostream>

extern Mirror file4Obj;
Mirror file5Obj(&file4Obj);

int main()
{
	std::cout.setf(std::ios::boolalpha);
	std::cout << file5Obj.Test() << std::endl;
}