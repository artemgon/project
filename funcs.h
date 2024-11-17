#include "libs.h" 

template<typename T>
void initFunc(T* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> *ptr;
		++ptr;
	}
	return;
}

template<typename T>
void printFunc(T* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *ptr << " ";
		++ptr;
	}
	return;
}

template<typename T>
bool checkFunc(T elem)
{
    if (elem < 2) return false; 
    for (T i = 2; i * i <= elem; ++i) {
        if (elem % i == 0) return false;
    }
    return true;
}

template<typename T>
T* deleteElem(T *ptr, int& size, int index) {
    T* ptr_1 = new T[size - 1];
    for (int i = 0, j = 0; i < size; ++i) {
        if (i != index) { 
            ptr_1[j++] = ptr[i];
        }
    }
    --size;
    delete[] ptr;
    return ptr_1;
}


template<typename T>
void myFunc(T* &ptr, int& size)
{
    for (int i = 0; i < size; ) { 
        if (checkFunc(*(ptr + i))) { 
            ptr = deleteElem(ptr, size, i); 
        }
        else {
            ++i;
        }
    }
}