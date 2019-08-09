#include "ex33.h"

void Mirror::Initialize()
{
	ptr = 0;
	flag = true;
}

Mirror::Mirror(Mirror* mPtr) : ptr(mPtr), flag(false)
{

}

bool Mirror::Test()
{
	if (ptr != 0)
		return ptr->Test();
	else
		return flag;
}

int Initializer::initCount; //This is the definition for the static member variable. If you forget the int, the compiler complains that no storage class is specified. 