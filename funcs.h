#include "libs.h" 

template<typename T>
void initFunc(T array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}

template<typename T>
void printFunc(T* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *ptr << " ";
		++ptr;
	}
	cout << endl;
}

template<typename T>
void myFunc(T array[], int size_1, int& size_p, int& size_n, int& size_z, T*& p, T*& n, T*& z)
{
	size_p = size_n = size_z = 0;
	for (int i = 0; i < size_1; i++) {
		if (array[i] > 0) size_p++;
		else if (array[i] < 0) size_n++;
		else size_z++;
	}
	p = new T[size_p];
	n = new T[size_n];
	z = new T[size_z];
	int c_p = 0, c_n = 0, c_z = 0;
	for (int i = 0; i < size_1; i++) {
		if (array[i] > 0)
		{
			*(p + c_p) = array[i];
			c_p++;
		}
		else if (array[i] < 0)
		{
			*(n + c_n) = array[i];
			c_n++;
		}
		else
		{
			*(z + c_z) = array[i];
			c_z++;
		}
	}
}