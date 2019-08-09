#include <cstring> // memset()

const int sz = 20;

class Holder
{
private:
	int a[sz];
public:
	Holder()
	{
		memset(a, 0, sz * sizeof(int));
	}
	class Pointer;
	friend Pointer;
	class Pointer
	{
	private:
		Holder* h;
		int* p;
	public:
		Pointer (){}
		Pointer(Holder* rv)
		{
			h = rv;
			p = rv->a;
		}
		// Move around in the array:
		void next();
		void previous();
		void top();
		void end();
		// Access values:
		int read();
		void set(int i);
	};
};

inline void Holder::Pointer::next()
{
	if (p < &(h->a[sz - 1]))
		p++;
}

inline void Holder::Pointer::previous()
{
	if (p > &(h->a[0]))
		p--;
}

inline void Holder::Pointer::top()
{
	p = &(h->a[0]);
}

inline void Holder::Pointer::end()
{
	p = &(h->a[sz - 1]);
}

inline int Holder::Pointer::read()
{
	return *p;
}

inline void Holder::Pointer::set(int i)
{
	*p = i;
}