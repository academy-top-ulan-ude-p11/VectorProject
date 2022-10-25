#pragma once

template <class T>
class Vector
{
	int size;
	int capacity;
	T* array = nullptr;
public:
	template <class T>
	Vector(int size = 0) : size{ size }
	{
		capacity = size;
		if (size)
			array = new T[capacity] {};
	}

	template <class T>
	Vector(const Vector<T>& vobj) : size{ vobj.size }, capacity{ vobj.capacity }
	{
		if (this->size)
		{
			array = new T[this->capacity] {};
			for (int i = 0; i < this->size; i++)
				array[i] = vobj.array[i];
		}
	}

	~Vector()
	{
		if (array)
			delete[]array;
	}

	int Size() const;
	int Capacity() const;

	template <class T>
	void SetItem(int index, T value);
	template <class T>
	T GetItem(int index);

	template <class T>
	T& At(int index);

	template <class T>
	T& operator[](int index);


	Vector<T>& operator=(const Vector& vobj);

	void PushBack(int value);
	void Insert(int value, int index);

	int PopBack();
	int Remove(int index);
};
