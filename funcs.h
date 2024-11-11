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
void removeElem(T* ptr, int &size_1, int index, int size_2)
{
	for (int i = index; i < size_1 - 1; i++)
	{
		*(ptr + i) = *(ptr + i + 1);
	}
	size_1--;
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

template<class T>
void myFunc(T* ptr, int &size_1, int size_2, int index)
{
	int counter = 0;
	while (counter < size_2)
	{
		removeElem(ptr, size_1, index, size_2);
		counter++;
	}
	return;
}

