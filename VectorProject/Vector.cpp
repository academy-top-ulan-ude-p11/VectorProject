#include "Vector.h"

int Vector::Size() const
{
	return size;
}

void Vector::SetItem(int index, int value)
{
	if(index >= 0 && index < this->size)
		array[index] = value;
}

int Vector::GetItem(int index)
{
	if (index >= 0 && index < this->size)
		return array[index];
}

int& Vector::At(int index)
{
	if (index >= 0 && index < this->size)
		return array[index];
}


int& Vector::operator[](int index)
{
	if (index >= 0 && index < this->size)
		return array[index];
}