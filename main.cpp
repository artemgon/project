#include "funcs.h"

int main()
{
	const int size = 6;
	int array[size] = { 5, -7, 2, -4, 0 , 0}, *ptr = array,
	p = 0, n = 0, z = 0;
	myFunc(array, size, &p, &n, &z);
	cout << "Positive: " << p << endl;
	cout << "Negative: " << n << endl;
	cout << "Zeros: " << z << endl;
	return 0;
}