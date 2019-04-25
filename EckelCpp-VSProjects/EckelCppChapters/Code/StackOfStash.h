#include <string>
#include "Stack.h"
#include "Stash.h"

struct StackOfStash 
{
	private:
	Stack stashStack;
	Stack reverseStack;
	void PrintStash(Stash* stashPtr);
	
	public:
	void Initialize();
	void ReadFile(std::string filePath);
	void PrintFile();	
};