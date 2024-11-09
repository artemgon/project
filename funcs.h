#include "libs.h" 

template<class T>
void myFunc(T* ptr_1, int size_1, T* ptr_2, int size_2, int *index)
{
	int counter = 0;
	for (int i = 0; i < size_2; i++)
	{
		for (int j = 0; j < size_1; j++)
		{
			if (*(ptr_2 + i) == *(ptr_1 + j))
			{
				if (i == 0)
				{
					*index = j;
				}
				counter++;
			}
		}
	}
	if (counter != size_2)
	{
		*index = 0;
	}
}