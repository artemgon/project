#include "libs.h" 

template<typename T>
T* createFunc(int size)
{
	T* array = new T[size];
	return array;
}

template<typename T>
void initFunc(T * ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> *ptr;
		++ptr;
	}
	return;
}

template<typename T>
void printFunc(T* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *ptr << " ";
		++ptr;
	}
	return;
}

template<typename T>
void deleteArray(T* ptr)
{
	delete[] * ptr;
	return;
}

template<typename T>
T* extendArray(T* ptr, int& size)
{
	size++;
	T* array = createFunc<T>(size);
	for (int i = 0; i < size; i++)
	{
		*(array + i) = *(ptr + i);
	}
	deleteArray(&ptr);
	return array;
}

template<typename T>
void addElem(T* ptr, int &size, T elem) 
{
	*(ptr + size - 1) = elem;
	return;
}

template<typename T>
void addFunc(T* ptr, int& size, T elem, int index)
{
	for (int i = size - 1; i < index; i--)
	{
		*(ptr + i) = *(ptr + i - 1);
	}
	*(ptr + index) = elem;
	return;
}

template<class T>
void deleteElem(T* ptr, int& size, int index)
{
	for (int i = index; i < size - 1; i++)
	{
		*(ptr + i) = *(ptr + i + 1);
	}
	size--;
	return;
}