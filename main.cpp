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

	for (auto I : IntArray)
	{
		std::cout << I << " ";
	}
	std::cout << std::endl;

	DynamicArray<bool> BoolArray;
	BoolArray.PushBack(true);
	BoolArray.PushBack(false);
	BoolArray.PushBack(true);

	for (auto B : BoolArray)
	{
		std::cout << B << " ";
	}

	return 0;
}