// Testing the Mem class
//{L} Mem
#pragma warning(disable : 4996)

#include "Mem.h"
#include <iostream>
using namespace std;

class MyString {
	Mem* buf;
public:
	MyString();
	MyString(char* str);
	~MyString();
	void concat(char* str);
	void print(ostream& os);
};

MyString::MyString() 
{ 
	buf = 0; 
}

MyString::MyString(char* str) 
{
	buf = new Mem(strlen(str) + 1);
	strcpy((char*)buf->pointer(), str);
}

void MyString::concat(char* str) 
{
	if (!buf) 
		buf = new Mem;
	strcat
	(
		(char*)buf->pointer(buf->msize() + strlen(str) + 1), str
	);
}

void MyString::print(ostream& os) 
{
	if (!buf) return;
	os << buf->pointer() << endl;
}

MyString::~MyString() 
{ 
	delete buf; 
}

int main() {
	
	char testString[] = "TEST";
	char extra[] = "-EXTRA";
	
	MyString s(testString);
	s.print(cout);
	s.concat(extra);
	s.print(cout);
	
	MyString s2;
	char usingDefault[] = "USING DEFAULT CONSTRUCTOR";
	s2.concat(usingDefault);
	s2.print(cout);
} ///:~