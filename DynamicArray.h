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
		if (Capacity <= Size)
		{
			Capacity = Size * 2;
			int* NewData = new int[Capacity];

			for (int i = 0; i < Size; ++i)
			{
				NewData[i] = Data[i];
			}
			delete[] Data;
			Data = NewData;
		}

		Data[Size] = InValue;
		Size++;
	}

	inline size_t GetSize() const
	{
		return Size;
	}

	int& operator[](size_t Index) const
	{
		return Data[Index];
	}

protected:
	int* Data;
	size_t Size;
	int Capacity;
};

#endif //__DynamicArray_H__