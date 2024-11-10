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

template<class T>
void myFunc(T* ptr_1, int &size_1, T* ptr_2, int size_2)
{
	int size_1_1 = size_1;
	size_1 = size_1 + size_2;
	for (int i = size_1_1, j = 0; i < size_1 && j < size_2; i++, j++)
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