#include <stdio.h>


int LimitRange(int a[], int output[], int n, int k){
    int index = 0;

    for(int i =0; i<n; i++){
        if(a[i] >= -k && a[i] <= k){
            output[index] = a[i];
            index ++;

            // push onto a new array here
        }
    }
    return index;
}

int main(void){
    int k  = 5;
    int arraySample[4] = {1, 2, 3 ,4};
    int outputArray[4];
    int size = sizeof(arraySample) / sizeof(arraySample[0]);
    int outputSize = LimitRange(arraySample, outputArray, size, k);

 // Print the output array
    for(int i = 0; i < outputSize; i++){
        printf("%d ", outputArray[i]);
    }
        
}