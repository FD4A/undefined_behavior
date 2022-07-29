#include <iostream>
#include <typeinfo>
#include <type_traits>

struct S
{
	int a=0;
	virtual void foo() {};
	virtual ~S() = default;
};

int main()
{
	try
	{
		//UB
//		int *a = nullptr;
//		std::cout << *a;

		//not UB, defined in standard [bad.typeid]
		S *p = nullptr;
		std::boolalpha(std::cout);
		std::cout <<  "is polymorphic(S) = " << std::is_polymorphic_v<S> << "\n";
		std::cout << typeid(*p).name();
	}
	catch(const std::exception& ex)
	{
		std::cout << ex.what();
	}
	return 0;
}
