#include <iostream>
#include <limits.h>
#include <unistd.h>

int main()
{
	//INT_MAX+1 is undefined =>
	// => X+1>X replaced by true =>
	// => infinite loop
	for(int i=INT_MAX-3; i<=INT_MAX; ++i)
	{
		std::cout << i << "\n";
		sleep(1);
	}
	return 0;
}
