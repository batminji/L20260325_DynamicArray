// Standard Template Library
#include <iostream>
#include <vector>
#include "DynamicArray.h"

int main()
{
	DynamicArray<int> D;
	try
	{
		D[10];
	}
	catch (std::out_of_range e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}