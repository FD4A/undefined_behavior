#include <iostream>

int foo(float *a, int *b)
{
	*b = 1;
	*a = 0.0;//UB
	return *b;//optimization to return 1 because
	//in previous line unexcepted (ingnored) UB
}

int main()
{
	int x = 2;
	float *p = reinterpret_cast<float*>(&x);
	std::cout << foo(p,&x) << "  " << x;//1 0
	return 0;
}
