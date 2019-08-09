/*
Create a Text class that contains a string object to hold
the text of a file. Give it two constructors: a default
constructor and a constructor that takes a string
argument that is the name of the file to open. When the
second constructor is used, open the file and read the
contents into the string member object. Add a member
function contents( ) to return the string so (for example)
it can be printed. In main( ), open a file using Text and
print the contents.
*/

#include <string>
#include <iostream>
#include <fstream>

class Text
{
	std::string str;
public:
	Text();
	Text(std::string file);
	std::string Contents();
};

Text::Text()
{
	str = "";
}

Text::Text(std::string file)
{
	std::ifstream in(file);

	std::string line = "";

	while (std::getline(in, line))
	{
		str += line;
	}
}

std::string Text::Contents()
{
	return str;
}

int main()
{
	std::string filePath = "../TestFiles/Chapter7-Ex01.txt";
	Text txt(filePath);

	std::cout << txt.Contents() << std::endl;
}