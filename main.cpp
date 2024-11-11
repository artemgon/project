#include "funcs.h"

int main()
{
	int size = 6, elem_1 = 7, elem_2 = 8, index = 7;
	int* array = createFunc<int>(size);
	initFunc(array, size);
	array = extendArray<int>(array, size);
	addElem(array, size, elem_1);
	array = extendArray<int>(array, size);
	addFunc(array, size, elem_2, index);
	printFunc(array, size);
	deleteElem(array, size, index);
	cout << endl;
	printFunc(array, size);
	deleteArray(&array);
	return 0;
}