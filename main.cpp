// Standard Template Library
#include <iostream>
#include <array>
#include <vector>

#include <list>

#include <algorithm>

int main()
{
	std::array<int, 4> IntArray{4, 3, 2, 1};
	std::vector<int> IntDArray;
	std::list<int> IntList;

	IntDArray.push_back(4);
	IntDArray.push_back(3);
	IntDArray.push_back(1);
	IntDArray.push_back(2);

	IntList.push_back(4);
	IntList.push_back(3);
	IntList.push_back(1);
	IntList.push_back(2);

	/*for (std::array<int, 4>::iterator i = intArray.begin(); i != intArray.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	for (std::vector<int>::iterator i = IntDArray.begin(); i != IntDArray.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	for (std::list<int>::iterator i = IntList.begin(); i != IntList.end(); ++i)
	{
		std::cout << *i << std::endl;
	}*/

	/*for (auto i = intArray.begin(); i != intArray.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	for (auto i = IntDArray.begin(); i != IntDArray.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	for (auto i = IntList.begin(); i != IntList.end(); ++i)
	{
		std::cout << *i << std::endl;
	}*/

	std::sort(IntArray.begin(), IntArray.end());
	std::sort(IntDArray.begin(), IntDArray.end());
	IntList.sort();

	for (auto i : IntArray)
	{
		std::cout << i << std::endl;
	}

	for (auto i : IntDArray)
	{
		std::cout << i << std::endl;
	}

	for (auto i : IntList)
	{
		std::cout << i << std::endl;
	}

	return 0;
}