#include "funcs.h"

int main()
{
	const int size_1 = 10;
	int big_array[size_1];
	int size_p = 0, size_n = 0, size_z = 0;
	int* p = nullptr, *n = nullptr, * z = nullptr;
	cout << "Enter an array: " << endl;
	initFunc(big_array, size_1);
	myFunc(big_array, size_1, size_p, size_n, size_z, p, n, z);
	cout << "Array with pos. elem.: " << endl;
	printFunc(p, size_p);
	cout << "Array with neg. elem.: " << endl;
	printFunc(n, size_n);
	cout << "Array with zeros: " << endl;
	printFunc(z, size_z);
	delete[] p;
	delete[] n;
	delete[] z;
	return 0;
}