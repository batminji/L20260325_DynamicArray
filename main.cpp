// Standard Template Library
#include <iostream>
#include "DynamicArray.h"

int main()
{
	DynamicArray MyArray;

	MyArray.PushBack(1);
	MyArray.PushBack(2);
	MyArray.PushBack(3);
	MyArray.PushBack(4);

	for (int i = 0; i < MyArray.GetSize(); ++i)
	{
		std::cout << MyArray[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}