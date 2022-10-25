#include "Vector.h"

template <class T>
int Vector<T>::Size() const
{
	return size;
}

template <class T>
int Vector<T>::Capacity() const
{
	return this->capacity;
}



template<class T>
T Vector<T>::GetItem(int index)
{
	if (index >= 0 && index < this->size)
		return array[index];
}

template <class T>
T& Vector<T>::At(int index)
{
	if (index >= 0 && index < this->size)
		return array[index];
}

template <class T>
T& Vector<T>::operator[](int index)
{
	if (index >= 0 && index < this->size)
		return array[index];
}

template <class T>
Vector& Vector::operator=(const Vector& vobj)
{
	if (this == &vobj)
		return *this;

	if (this->array)
		delete[]this->array;

	this->size = vobj.size;
	this->capacity = vobj.capacity;

	if (this->size)
	{
		array = new int[this->capacity];
		for (int i = 0; i < this->size; i++)
			array[i] = vobj.array[i];
	}

	return *this;
}

void Vector::PushBack(int value)
{
	if (size < capacity)
	{
		array[size] = value;
	}
	else
	{
		capacity += (!(capacity / 2) ? 2 : capacity / 2);
		int* arrayNew = new int[capacity];
		for (int i = 0; i < size; i++)
			arrayNew[i] = array[i];
		arrayNew[size] = value;

		delete[]array;
		array = arrayNew;
	}
	size++;
}

void Vector::Insert(int value, int index)
{
	if (size < capacity)
	{
		for (int i = size - 1; i >= index; i--)
			array[i + 1] = array[i];
		array[index] = value;
	}
	else
	{
		capacity += (!(capacity / 2) ? 2 : capacity / 2);
		int* arrayNew = new int[capacity];

		for (int i = 0; i < index; i++)
			arrayNew[i] = array[i];

		arrayNew[index] = value;

		for(int i = index; i < size; i++)
			arrayNew[i + 1] = array[i];

		delete[]array;
		array = arrayNew;
	}
	size++;
}

int Vector::PopBack()
{
	int value = array[size - 1];

	if (capacity > 2 * size)
	{
		capacity = size + size / 2;
		int* arrayNew = new int[capacity];

		for (int i = 0; i < size - 1; i++)
			arrayNew[i] = array[i];

		delete[]array;
		array = arrayNew;
	}
	size--;
	return value;
}

int Vector::Remove(int index)
{
	int value = array[index];

	if (capacity < 2 * size)
	{
		for (int i = index; i < size - 1; i++)
			array[i] = array[i + 1];
	}
	else
	{
		capacity = size + size / 2;
		int* arrayNew = new int[capacity];

		for (int i = 0; i < index; i++)
			arrayNew[i] = array[i];
		for (int i = index + 1; i < size; i++)
			arrayNew[i - 1] = array[i];

		delete[]array;
		array = arrayNew;
	}
	size--;
	return value;
}
