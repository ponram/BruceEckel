#include <iostream>
#include "Stash3.h"
#include <cassert>

using namespace std;

const int increment = 100;

Stash::Stash(int sz) : storage(new Mem(sz))
{
	block_size = sz;
	blocks_quantity = 0;
	next = 0;
}

Stash::Stash(int sz, int initQuantity) : storage(new Mem(sz*initQuantity))
{
	block_size = sz;
	blocks_quantity = initQuantity;
	next = 0;
}

Stash::~Stash()
{
	if (storage != 0) {
		cout << "freeing storage" << endl;
		delete storage;
	}
}

int Stash::count() {
	
	return next;
}

void Stash::inflate(int increment)
{
	int newQuantity = blocks_quantity + increment;
	blocks_quantity = newQuantity;
	int newMemory = blocks_quantity * block_size;
	storage->ensureMinSize(newMemory);
}

int Stash::add(void* element) 
{
	if (next >= blocks_quantity)
		inflate(increment);
	int startBytes = next * block_size;
	char* elem = static_cast<char*>(element);
	byte* startAddress = storage->pointer();

	for (int i = 0; i < block_size; i++)
		*(startAddress + startBytes + i) = elem[i];

	next++;
	return next - 1;
}

void* Stash::fetch(int index) 
{
	if (index >= next)
		return 0;

	int offset = index * block_size; 
	byte* startAddress = storage->pointer(); 
	return startAddress + offset; 
}