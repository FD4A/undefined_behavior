#include <iostream>

struct Base
{
	~Base()
	{
		std::cout << "~Base()\n";
	}
};

struct Derived: Base
{
	virtual ~Derived()
	{
		std::cout << "~Derived()\n";
	}
};

int main()
{
	Base *p = new Derived();
	delete p;
	return 0;
}


