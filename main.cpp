#include "funcs.h"

int main()
{
	int size_1 = 6, size_2 = 3;
	int* array = new int[size_1], * block = new int[size_2];
	cout << "Enter array: " << endl;
	fillArr(array, size_1);
	cout << endl << "Enter block: " << endl;
	fillArr(block, size_2);
	cout << endl;
	myFunc(array, size_1, block, size_2);
	printFunc(array, size_1);
	return 0;
}