#include "ex33.h"
#include <iostream>
extern Mirror file2Obj;

Mirror file3Obj(&file2Obj);

int main()
{
	std::cout.setf(std::ios::boolalpha);
	std::cout << file3Obj.Test() << std::endl;
}