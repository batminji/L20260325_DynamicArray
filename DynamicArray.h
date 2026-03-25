#pragma once
#ifndef __DynamicArray_H__
#define __DynamicArray_H__

#include <stdexcept>

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

	DynamicArray(int Capacity)
	{
		this->Capacity = Capacity;
		Size = 0;
		Data = new T[this->Capacity];
	}

	~DynamicArray()
	{
		if (Data)
		{
			delete[] Data;
			Data = nullptr;
		}
	}

	class Iterator
	{
	public:
		T* Pointer;

		Iterator(T* Pointer) : Pointer(Pointer) {}

		T& operator*()
		{
			return *Pointer;
		}

		Iterator& operator++()
		{
			Pointer++;
			return *this;
		}

		bool operator!=(Iterator& other)
		{
			return Pointer != other.Pointer;
		}
	};

	class Reverse_Iterator
	{
	public:
		T* Pointer;

		Reverse_Iterator(T* Pointer) : Pointer(Pointer) {}

		T& operator*()
		{
			return *Pointer;
		}

		Reverse_Iterator& operator++()
		{
			Pointer--;
			return *this;
		}

		bool operator!=(Reverse_Iterator& other)
		{
			return Pointer != other.Pointer;
		}
	};

	void PushBack(const T& InValue)
	{
		if (Capacity <= Size)
		{
			Capacity *= 2;
			T* NewData = new T[Capacity];

			// memcpy 함수 사용
			memcpy(NewData, Data, Size * sizeof(T));
			// std::move() 사용
			/*for (int i = 0; i < Size; ++i)
			{
				NewData[i] = std::move(Data[i]);
			}*/

			/*for (int i = 0; i < Size; ++i)
			{
				NewData[i] = Data[i];
			}*/
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

	inline size_t GetCapacity() const
	{
		return Capacity;
	}

	T& operator[](size_t Index) const
	{
		if (Index >= Size || Index < 0)
		{
			throw std::out_of_range("인덱스가 범위를 벗어남");
		}
		return Data[Index];
	}

	Iterator begin()
	{
		return Iterator(&Data[0]);
	}

	Iterator end()
	{
		return Iterator(&Data[Size]);
	}

	Reverse_Iterator rbegin()
	{
		return Reverse_Iterator(&Data[Size - 1]);
	}

	Reverse_Iterator rend()
	{
		return Reverse_Iterator(&Data[-1]);
	}

	void Erase(size_t Index)
	{
		if (Index >= Size || Index < 0)
		{
			throw std::out_of_range("인덱스가 범위를 벗어남");
		}
		for (size_t i = Index; i < Size - 1; ++i)
		{
			Data[i] = Data[i + 1];
		}
		Size--;
	}

	void Clear()
	{
		if (Data)
		{
			delete[] Data;
			Data = nullptr;
		}

		Capacity = 1;
		Size = 0;
		Data = new T[Capacity];
	}

protected:
	T* Data;
	size_t Size;
	size_t Capacity;
};

#endif //__DynamicArray_H__