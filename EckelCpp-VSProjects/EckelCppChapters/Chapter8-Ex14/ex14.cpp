/**
Create a function that takes a float by value. Inside the
function, bind a const float& to the argument, and only
use the reference from then on to ensure that the
argument is not changed.
**/

#include <iostream>
#include<math.h>


float SquareRoot(float val)
{
	const float& x = val;
	//x++;//Error
	return sqrt(x);
}

int main() {

	float fval = 4.5;
	float output = SquareRoot(fval);
	std::cout << fval << " " << output << std::endl;
	return 0;
}

