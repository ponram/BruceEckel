/*
Create a class called Monitor that keeps track of the
number of times that its incident( ) member function has
been called. Add a print( ) member function that displays
the number of incidents. 
Now create a global function
(not a member function) containing a static Monitor
object. Each time you call the function it should call
incident( ), then print( ) to display the incident count.
Exercise the function in main( )
*/

#include <iostream>

class Monitor
{
	static int incidentCount;

public:
	Monitor()
	{
		//incident();
		//print();
	}	
	void incident()
	{
		++incidentCount;
	}
	void print()
	{
		std::cout << "Incident Count: " << incidentCount << std::endl;
	}
};

int Monitor::incidentCount = 0;

void global()
{
	static Monitor obj;
	obj.incident();
	obj.print();
}

int main()
{
	global();
	global();
	global();
}