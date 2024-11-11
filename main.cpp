#include "funcs.h"

int main()
{
	int size_1, size_2, index;
	cout << "Enter array size: ";
	cin >> size_1;
	int* array = new int[size_1];
	cout << endl << "Enter array: ";
	fillArr(array, size_1);
	cout << endl << "Enter block size: ";
	cin >> size_2;
	cout << endl << "Enter index: ";
	cin >> index;
	myFunc(array, size_1, size_2, index);
	printFunc(array, size_1);
	return 0;
}