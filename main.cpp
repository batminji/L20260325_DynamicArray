// Standard Template Library
#include <iostream>
#include <vector>
#include "DynamicArray.h"

int main()
{
	DynamicArray<int> IntArray;

	IntArray.PushBack(1);
	IntArray.PushBack(2);
	IntArray.PushBack(3);

	for (DynamicArray<int>::Iterator it = IntArray.begin(); it.operator!=(IntArray.end()); it.operator++())
	{
		std::cout << *it << std::endl;
	}

	/*for (auto I : IntArray)
	{
		std::cout << I << " ";
	}*/
	std::cout << std::endl;

	return 0;
}