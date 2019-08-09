#ifndef STACK_H
#define STACK_H

class Stack {
	
private:
	struct Link {
		void* data;
		Link* next;		
	public:
		Link(void* dat, Link* nxt);
		~Link();
	}*head;
	
public:
	Stack();
	~Stack();
	void push(void* dat);
	void* peek();
	void* pop();	
};
#endif // STACK_H ///:~
