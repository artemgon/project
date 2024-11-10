#include "funcs.h"

int main()
{
	int size = 5;
	int* array = new int [size];
	arrayFill(array, size);
	myFunc(array, size);
	printArr(array, size);
	delete[] array;
	return 0;
}