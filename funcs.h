#include "libs.h" 

template<class T>
void fillArr(T* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> *(ptr + i);
		cout << " ";
	}
	return;
}

template<typename T>
void addPlace(T* ptr, int &size, int index)
{
	size++;
	for (int i = size - 1; i > index; i--)
	{
		if (i - 1 == index)
		{
			*(ptr + i) = *(ptr + i - 1);
			break;
		}
		*(ptr + i) = *(ptr + i - 1);
	}
	return;
}

template<class T>
void myFunc(T* ptr_1, int &size_1, T* ptr_2, int size_2, int index)
{
	for (int i = 0; i < size_2; i++)
	{
		addPlace(ptr_1, size_1, index);
	}
	for (int i = index, j = 0; i < size_2 + index && j < size_2; i++, j++)
	{	
		*(ptr_1 + i) = *(ptr_2 + j);
	}
	return;
}

template<typename T >
void printFunc(T* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(ptr + i) << " ";
	}
	return;
}