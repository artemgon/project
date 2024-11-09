#include "funcs.h"

int main()
{
	const int size_1 = 6, size_2 = 3;
	int A[size_1] = { 5, -7, 2, -4, 0 , 0 }, * ptr_1 = A,
		B[size_2] = { -7, 2, -4 }, * ptr_2 = B, index;
	myFunc(A, size_1, B, size_2, &index);
	cout << "Index: " << index << endl;
	return 0;
}