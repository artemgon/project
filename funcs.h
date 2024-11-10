#include "libs.h" 

template<class T>
bool checkFunc(T* ptr, int size)
{
    bool c_var = false;
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) < 0)
        {
            c_var = true;
            break;
        }
    }
    return c_var;
}

template<class T>
void deleteFunc(T* ptr, int &size, int index)
{
    for (int j = index; j < size - 1; j++)
    {

        *(ptr + j) = *(ptr + j + 1);
    }
    size--;
}

template<class T>
void myFunc(T* ptr, int &size)
{
    bool check_var = checkFunc(ptr, size);
    int i = 0;
    if (check_var)
    {
        while (i < size)
        {
            if (*(ptr + i) < 0 && i < size - 1)
            {
                while (*(ptr + i) < 0)
                {
                    deleteFunc(ptr, size, i);
                }
                i++;
            }
            else if (*(ptr + i) < 0 && i == size - 1)
            {
                --size;
                break;
            }  
            else
                i++;
        }
    }
}

template<class T>
void arrayFill(T* ptr, int &size)
{
    cout << "Enter an array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> *(ptr + i);
        cout << " ";
    }
}

template<class T>
void printArr(T* ptr, int &size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *ptr << " ";
        ++ptr;
    }
    cout << endl;
}