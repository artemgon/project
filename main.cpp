#include "funcs.h"

int main()
{
	int size = 6;
	int* array = new int[size];
	cout << "Enter an array: " << endl;
	initFunc(array, size);
	cout << endl;
	printFunc(array, size);
	cout << endl;
	myFunc(array, size);
	cout << endl;
	printFunc(array, size);
	delete[] array;
	return 0;
}