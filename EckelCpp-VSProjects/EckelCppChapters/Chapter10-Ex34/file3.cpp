#include <iostream>
#include "ex34.h"

extern Mirror& file2();

Mirror& file3()
{
	Mirror file2Obj = file2();
	Mirror file3Obj = Mirror(&file2Obj);

	return file3Obj;
}

int main()
{
	Mirror file3Obj = file3();
	std::cout << file3Obj.Test() << std::endl;
}