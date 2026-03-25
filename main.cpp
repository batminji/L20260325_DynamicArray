// Standard Template Library
#include <iostream>
#include <algorithm>
#include "DynamicArray.h"

int main()
{
	srand((unsigned)time(nullptr));

	DynamicArray MyArray;

	for (int i = 0; i < 100; ++i)
	{
		int Input = rand() % 100;
		MyArray.PushBack(Input);
	}

	std::sort(MyArray.Begin(), MyArray.End());

	for (int i = 0; i < MyArray.GetSize(); ++i)
	{
		std::cout << MyArray[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}