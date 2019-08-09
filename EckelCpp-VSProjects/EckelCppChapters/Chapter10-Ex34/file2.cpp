#include "ex34.h"

extern Mirror& file1();

Mirror& file2()
{
	Mirror file1Obj = file1(); //I can use the same identifier 'file1Obj' because it was declared static in file1.cpp
	Mirror file2Obj = Mirror(&file1Obj);
	return file2Obj;
}