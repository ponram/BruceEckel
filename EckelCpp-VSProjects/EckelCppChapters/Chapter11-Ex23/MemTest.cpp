//: C07:MemTest.cpp
// Testing the Mem class
//{L} Mem
#pragma warning(disable : 4996)
#include "Mem.h"
#include <cstring>
#include <iostream>
using namespace std;

class MyString {
	Mem* buf;
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& src);
	~MyString();
	void concat(const char* str);
	void print(ostream& os);
};

MyString::MyString() 
{
	buf = 0; 
}

MyString::MyString(const char* str) 
{
	buf = new Mem(strlen(str) + 1);
	strcpy((char*)buf->pointer(), str);
}

MyString::MyString(const MyString& src)
{
	if (src.buf)
	{
		int byteSize = src.buf->msize();
		buf = new Mem(byteSize);
		memcpy(buf->pointer(), src.buf->pointer(), byteSize);
	}
	else
		buf = 0;
}

void MyString::concat(const char* str) {
	if (!buf) buf = new Mem;
	strcat((char*)buf->pointer(buf->msize() + strlen(str) + 1), str);
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
	MyString s("My test string");
	s.print(cout);
	s.concat(" some additional stuff");
	s.print(cout);

	MyString copy = s;

	MyString s2;
	s2.concat("Using default constructor");
	s2.print(cout);

} ///:~