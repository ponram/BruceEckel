/*
Explain what’s wrong with both Mem.cpp and
MemTest.cpp from Chapter 7. Fix the problem.
*/

//: C07:Mem.h
#ifndef MEM_H
#define MEM_H
typedef unsigned char byte;
class Mem {
	byte* mem;
	int size; //size here would refer to byte size
	void ensureMinSize(int minSize);
public:
	Mem();
	Mem(int sz);
	Mem(const Mem& src);
	~Mem();
	int msize();
	byte* pointer();
	byte* pointer(int minSize);
};
#endif // MEM_H ///:~