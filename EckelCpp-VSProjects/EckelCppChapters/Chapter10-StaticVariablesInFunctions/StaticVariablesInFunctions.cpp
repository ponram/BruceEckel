//: C10:StaticVariablesInfunctions.cpp

#include <iostream>
using namespace std;

char oneChar(const char* charArray = 0) 
{
	static const char* s;
	
	if (charArray) 
	{
		s = charArray;
		return *s;
	}
	
	if (*s == '\0')
		return 0;
	
	return *(s++);
}

const char* a = "abcdefghijklmnopqrstuvwxyz";

int main() 
{
	// oneChar(); // require() fails
	oneChar(a); // Initializes s to a
	char c;
	while ((c = oneChar()) != 0)
		cout << c << endl;
}