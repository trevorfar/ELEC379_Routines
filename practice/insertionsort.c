#include <stdio.h>
#define size 5

// gcc insertionSort.c -o ../o/insertionSort; ..\o\insertionSort

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i - 1;
        int temp = arr[i];

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int unsortedArray[size] = {25, 3, 1, 3, 4};
    insertionSort(unsortedArray, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", unsortedArray[i]);
    }
}