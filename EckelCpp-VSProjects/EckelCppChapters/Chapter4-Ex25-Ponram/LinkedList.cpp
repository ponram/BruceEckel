#include<iostream>

struct LinkedList
{
	LinkedList* nextPtr;
	int value;

	LinkedList() :nextPtr(0), value(0) {}
	void CreateLinkedList(int howMany);
	void PrintAndDestroy();
};

void LinkedList::CreateLinkedList(int howMany)
{
	LinkedList* tempPtr = this; //this gives the address of the current object

	for (int i = 1; i <= howMany; i++)
	{
		LinkedList* newList = new LinkedList(); //create a new object
		newList->value = i;

		tempPtr->nextPtr = newList;
		tempPtr = newList;
	}
}

void LinkedList::PrintAndDestroy()
{
	LinkedList* tempPtr = this;

	while (tempPtr->nextPtr != 0)
	{
		tempPtr = tempPtr->nextPtr;
		std::cout << "Address of Object " << tempPtr << " Value is " <<tempPtr->value << " NextPtr is " << tempPtr->nextPtr << std::endl;		
	}

	//Destroy
	LinkedList* deletePtr;
	tempPtr = this->nextPtr;

	while (tempPtr != 0)
	{
		deletePtr = tempPtr; 
		tempPtr = tempPtr->nextPtr;
		std::cout << "Deleting..." << deletePtr << std::endl;
		delete deletePtr;
	}
}

int main()
{
	LinkedList list;
	list.CreateLinkedList(3);
	list.PrintAndDestroy();
}
