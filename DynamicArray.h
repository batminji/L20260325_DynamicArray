#pragma once
#ifndef __DynamicArray_H__
#define __DynamicArray_H__

class DynamicArray
{
public:
	DynamicArray()
	{
		Capacity = 1;
		Size = 0;
		Data = new int[Capacity];
	}

	~DynamicArray()
	{
		delete[] Data;
		Data = nullptr;
	}

	void PushBack(int InValue)
	{
		Size++;
		int* NewData = new int[Size];

		for (int i = 0; i < Size - 1; ++i)
		{
			NewData[i] = Data[i];
		}
		NewData[Size - 1] = InValue;

		delete[] Data;

		Data = NewData;
	}

	inline int GetSize()
	{
		return Size;
	}

// protected:
	int* Data;
	int Size;
	int Capacity;
};

#endif //__DynamicArray_H__