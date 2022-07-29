#include <iostream>

int foo(bool val)
{
	int a,b;
	if(val)
		{b=a;}
	else
		{b=42;}
	return b;
}

int main()
{
	//-O0 uninitialized a; -O2, -O1 - always 42
	//optimization because UB, UB is ignored by compiler.
	std::cout << foo(true);
	return 0;
}
