#include <iostream>

int foo(float *a, int *b)
{
	*b = 1;
	*a = 0.0;
	return *b;
}

int main()
{
	int x = 2;
	float *p = reinterpret_cast<float*>(&x);
	std::cout << foo(p,&x);
	return 0;
}
