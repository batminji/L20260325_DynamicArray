// Standard Template Library
#include <iostream>
#include <algorithm>
#include "DynamicArray.h"

int main()
{
	srand((unsigned)time(nullptr));

	DynamicArray<int> MyArray;

	for (int i = 100; i > 0; --i)
	{
		MyArray.PushBack(i);
	}

	std::sort(MyArray.Begin(), MyArray.End());

	std::cout << "Size : " << MyArray.GetSize() << std::endl;
	std::cout << "Capacity : " << MyArray.GetCapacity() << std::endl;

	for (int i = 0; i < MyArray.GetSize(); ++i)
	{
		std::cout << MyArray[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}