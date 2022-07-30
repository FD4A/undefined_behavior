#include <iostream>

int table[4]={0,0,0,0};
bool foo(int v)
{
    for (int i = 0; i <= 4; i++)
    {
        if (table[i] == v)
        	{return true;}
    }
    return false;
}

int main()
{
	//find 1 in [0,0,0,0] = true
	//find 0 in [0,0,0,0] = true
	std::boolalpha(std::cout);
	std::cout << "find 1 in [0,0,0,0] = " << foo(1) << "\n";
	std::cout << "find 0 in [0,0,0,0] = " << foo(0) << "\n";
	return 0;
}


