//#include <iostream>
//#include <string>
//
//class HowMany2
//{
//	std::string name;
//	static int objectCount;
//
//public:
//	HowMany2(std::string id = "") :name(id)
//	{
//		objectCount++;
//	}
//
//	HowMany2(const HowMany2& orig) :name(orig.name)
//	{
//		name += "copy";
//		objectCount++;
//		print("HowMany2(const HowMany2&)");
//	}
//
//	void print(const std::string& msg = "") const
//	{
//		std::cout << msg << std::endl;
//		std::cout << '\t' << name << ": "<<std::endl;
//		std::cout << "Object Count: " << objectCount << std::endl;		
//	}
//
//	~HowMany2()
//	{
//		print("Inside ~Howmany2()");
//		objectCount--;
//	}
//};
//
//int HowMany2::objectCount = 0;
//
//HowMany2 f(HowMany2& x)
//{
//	x.print("x arg inside f()");
//	return x;
//}
//
//int main()
//{
//	HowMany2 h("h");
//	std::cout << "Entering f() " << std::endl;
//
//	HowMany2 h2 = f(h);
//	h2.print("After making a copy");
//
//	std::cout << "Call f() no return value" << std::endl;
//	f(h);
//	std::cout << "After call to f()" << std::endl;
//}

#include <iostream>
#include <string>

using namespace std;

class HowMany2 {
	string name; // Object identifier
	static int objectCount;
public:
	HowMany2(const string& id = "") : name(id) {
		++objectCount;
		print("HowMany2()");
	}
	~HowMany2() {
		--objectCount;
		print("~HowMany2()");
	}
	// The copy-constructor:
	HowMany2(const HowMany2& h) : name(h.name) {
		name += " copy";
		++objectCount;
		print("HowMany2(const HowMany2&)");
	}
	void print(const string& msg = "") const {
		if (msg.size() != 0)
			cout << msg << endl;
		cout << '\t' << name << ": "
			<< "objectCount = "
			<< objectCount << endl;
	}
};
int HowMany2::objectCount = 0;

// Pass and return BY VALUE:
HowMany2 f(HowMany2 x) {
	x.print("x argument inside f()");
	cout << "Returning from f()" << endl;
	return x;
}
int main() {
	HowMany2 h("h");
	cout << "Entering f()" << endl;
	HowMany2 h2 = f(h);
	h2.print("h2 after call to f()");
	cout << "Call f(), no return value" << endl;
	f(h);
	cout << "After call to f()" << endl;
} ///:~