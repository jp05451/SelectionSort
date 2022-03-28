#include <iostream>

template <class T>
void selectionSort(T A[], size_t size)
{
    for (int i = 0; i < size; i++)
    {
        T min = 0;
        for (int i = 0; i < size;i++)
        {
            if(A[i]> -10e9)
            {
                min = A[i];
            }
        }
        int pos;
        for (int j = i; j < size; j++)
        {
            if (A[j] < min)
            {
                min = A[j];
                pos = j;
            }
        }
        swap(A[i], A[pos]);
    }
}