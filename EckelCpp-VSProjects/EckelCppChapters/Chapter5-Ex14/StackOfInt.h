/*Create a StackOfInt class (a stack that holds ints) using
the “Cheshire cat” technique that hides the low-level data
structure you use to store the elements in a class called
StackImp. Implement two versions of StackImp: one
that uses a fixed-length array of int, and one that uses a
vector<int>. Have a preset maximum size for the stack so
you don’t have to worry about expanding the array in
the first version. Note that the StackOfInt.h class doesn’t
have to change with StackImp.*/

class StackOfInt
{
private:
	class StackImp;
	StackImp* stackPtr;
public:
	void Initialize();
	void Push(int i);
	int Pop();
	void CleanUp();
};