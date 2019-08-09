/*
Take the code fragments at the beginning of the section
titled “Pointer references” and turn them into a program.
*/

void f(int** ptr)
{
	ptr++;
}

int main()
{
	int i = 9;
	int* ptr = &i;
	f(&ptr);
}