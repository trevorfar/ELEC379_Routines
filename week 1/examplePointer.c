#include <stdio.h>
#include <stdlib.h>

void LimitRange(int inputArray[], int outputArray[], int size, int k)
{
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (inputArray[i] >= -k && inputArray[i] <= k)
        {
            outputArray[index] = inputArray[i];
            index++;
        }
    }
    return;
}

int main()
{
    // forget how to populate the arrays
    int size = 4;
    int indent = 0;
    int *inputArray = (int *)malloc(size *sizeof(int));
    int *outputArray = (int *)malloc(size * sizeof(int));
    int k = 1;

    for (int i = 0; i < 4; i++)
    {
        inputArray[i] = indent++;
    }

       LimitRange(inputArray, outputArray, size, k);

    // Print the filtered output array
    for (int i = 0; i < size; i++) {
        printf("%d ", outputArray[i]);
    }
    printf("\n");

    // Free allocated memory
    free(inputArray);
    free(outputArray);

}