/*
Create an enum called Hue containing red, blue, and
yellow. Now create a class called Color containing a data
member of type Hue and a constructor that sets the Hue
from its argument. Add access functions to “get” and
“set” the Hue. Make all of the functions inlines.
*/

#include <iostream>

enum Hue
{
	red,
	blue,
	yellow
};

class Color
{
private:
	Hue h;
	void SetHue(Hue h);

public:
	Color(Hue hh)
	{
		SetHue(hh);
	}
	Hue GetHue();
};

inline void Color::SetHue(Hue hh)
{
	h = hh;
}

inline Hue Color::GetHue()
{
	return h;
}

int main()
{
	Color c(Hue::blue);
	std::cout << c.GetHue() << std::endl;
}