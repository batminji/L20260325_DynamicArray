#pragma once
#ifndef __DynamicArray_H__
#define __DynamicArray_H__

template <typename T>
class DynamicArray
{
public:
	DynamicArray()
	{
		Capacity = 1;
		Size = 0;
		Data = new T[Capacity];
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
			T* NewData = new T[Capacity];

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

	int* Begin()
	{
		return &Data[0];
	}

	int* End()
	{
		return &Data[Size];
	}

protected:
	T* Data;
	size_t Size;
	int Capacity;
};

#endif //__DynamicArray_H__