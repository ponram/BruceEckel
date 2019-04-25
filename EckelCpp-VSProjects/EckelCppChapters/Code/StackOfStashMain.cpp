#include <string>
#include "StackOfStash.h"

int main()
{
	std::string filePath = "../TestFiles/Chapter4-Ex22-Main.txt";
	
	StackOfStash ss;
	ss.Initialize();
	ss.ReadFile(filePath);
	ss.PrintFile();

	return 0;
}