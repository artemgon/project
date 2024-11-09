#include "libs.h" 

template<class T>
void myFunc(T* ptr, int size, T* s, T* p)
{
	for (int i = 0; i < size; i++)
	{
		*s += *(ptr + i);
		*p *= *(ptr + i);
	}
	return;
}