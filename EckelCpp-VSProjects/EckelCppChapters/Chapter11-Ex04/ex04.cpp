/*
Write a function that takes a pointer argument, modifies
what the pointer points to, and then returns the
destination of the pointer as a reference.
*/

int& ReturnReference(int* ptr)
{
	(*ptr)++;
	int& j = *ptr;
	j++;  //Notice the difference from (*ptr)++. Thats why they say that Reference is an automatically dereferenced pointer
	return j;
}

int main()
{
	int i = 9;
	int j = ReturnReference(&i);

}