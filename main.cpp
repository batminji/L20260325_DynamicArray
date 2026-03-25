// Standard Template Library
#include <iostream>
#include <vector>
#include <algorithm>
#include "DynamicArray.h"

int main()
{
	std::vector<int> MyVector;

	srand((unsigned)time(nullptr));

	DynamicArray<int> MyArray;

	for (int i = 100; i > 0; --i)
	{
		MyArray.PushBack(i);
	}

	// std::sort(MyArray.begin(), MyArray.end());

	MyArray.Erase(5);

	std::cout << "Size : " << MyArray.GetSize() << std::endl;
	std::cout << "Capacity : " << MyArray.GetCapacity() << std::endl;

	for (auto A : MyArray)
	{
		std::cout << A << " ";
	}
	std::cout << std::endl;

	return 0;
}