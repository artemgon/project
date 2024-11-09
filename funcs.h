#include "libs.h" 

template<class T>
void myFunc(T* ptr, int size, int*p, int* n, int* z)
{
	for (int i = 0; i < size; i++)
	{
		if (*(ptr + i) > 0)
			*p += 1;
		else if (*(ptr + i) < 0)
			*n += 1;
		else
			*z += 1;
	}
	return;
}