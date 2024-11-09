#include "funcs.h"

int main()
{
	const int size = 5;
	int array[size] = { 5, 7, 2, 4, 6 }, *ptr = array,
	sum = 0, product = 1;
	myFunc(array, size, &sum, &product);
	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	return 0;
}