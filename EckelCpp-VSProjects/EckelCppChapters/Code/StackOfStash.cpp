#include <fstream>
#include<iostream>
#include <string>
#include "StackOfStash.h"

void StackOfStash::Initialize()
{
	stashStack.initialize();
	reverseStack.initialize();
}

void StackOfStash::ReadFile(std::string filePath)
{
	const int bufsize = 200;
	std::ifstream in(filePath);
	std::string line;
	int counter = 0;

	Stash *stashPtr = new Stash;
	stashPtr->initialize(sizeof(char) * bufsize);

	while (getline(in, line)) {
		stashPtr->add(line.c_str());
		counter++;

		if (counter % 5 == 0) {
			stashStack.push(stashPtr);
			stashPtr = new Stash;
			stashPtr->initialize(sizeof(char) * bufsize);
		}
	}

	// Adds remainig lines
	stashStack.push(stashPtr);
	Stash *sPointer = 0;

	while ((sPointer = (Stash*)stashStack.pop()) != 0)
		reverseStack.push(sPointer);
}

void StackOfStash::PrintFile()
{
	Stash *sPointer = 0;
	while ((sPointer = (Stash*)reverseStack.pop()) != 0) {
		PrintStash(sPointer);
		delete sPointer;
	}	
}

void StackOfStash::PrintStash(Stash* s)
{
	int k = 0;
	char* cp;
	while ((cp = (char*)s->fetch(k++)) != 0)
		std::cout << cp << std::endl;
}