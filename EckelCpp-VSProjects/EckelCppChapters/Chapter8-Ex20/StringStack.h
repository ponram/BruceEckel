#include <string>
#include "MyString.h"

class StringStack {
	static const int size = 100;
	const MyString* stack[size];
	int index;
public:
	StringStack();
	void push(const MyString* s);
	const MyString* pop();
};

