//: C04:StackTest.cpp
//{L} Stack
//{T} StackTest.cpp
// Test of nested linked list
#include "Stack.h"
//#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	//requireArgs(argc, 1); // File name is argument
	ifstream in("../Code/StackTestFile.txt");
	
	//assure(in, argv[1]);
	Stack textlines;
	textlines.initialize();
	string line;
	
	// Read file and store lines in the Stack:
	while (getline(in, line))
		textlines.push(new string(line)); //this creates a new address for the copied data.
		//textlines.push(&line); //this would push the same address everytme.

	// Pop the lines from the Stack and print them:
	string* s;
	
	while ((s = (string*)textlines.pop()) != 0) {
		cout << *s << endl;
		//delete s; //this delete corresponds to 'textlines.push(new string(line))'
	}

	textlines.cleanup();
} ///:~