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

	for (DynamicArray<int>::Iterator it = IntArray.begin(); it!=(IntArray.end()); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	for (DynamicArray<int>::Reverse_Iterator it = IntArray.rbegin(); it!=(IntArray.rend()); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	/*for (auto I : IntArray)
	{
		std::cout << I << " ";
	}*/
	std::cout << std::endl;

	return 0;
}