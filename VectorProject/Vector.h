#pragma once
class Vector
{
	int size;
	int* array = nullptr;
public:
	Vector(int size = 0) : size{ size }
	{
		if (size)
			array = new int[size] {};
	}
	Vector(const Vector& vobj) : size{ vobj.size }
	{
		if (this->size)
		{
			array = new int[this->size];
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
	void SetItem(int index, int value);
	int GetItem(int index);

	int& At(int index);
	int& operator[](int index);
};

