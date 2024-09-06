#include <stdio.h>

// Insertion Sort Function
void insertion_sort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i - 1;
        
        // Move elements of A[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

// Utility function to print an array
void print_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Testing the insertion_sort function
int main() {
    // Test case 1: Random list with repeating terms
    int list1[] = {11, 1, 51, 1, 5, 3};
    int n1 = sizeof(list1) / sizeof(list1[0]);
    insertion_sort(list1, n1);
    printf("Sorted list1: ");
    print_array(list1, n1);
    
    // Test case 2: Empty list
    int list2[] = {};
    int n2 = sizeof(list2) / sizeof(list2[0]);
    insertion_sort(list2, n2);
    printf("Sorted list2: ");
    print_array(list2, n2);
    
    // Test case 3: List with negative numbers
    int list3[] = {1, 1, -5, 6};
    int n3 = sizeof(list3) / sizeof(list3[0]);
    insertion_sort(list3, n3);
    printf("Sorted list3: ");
    print_array(list3, n3);
    
    // Test case 4: List that is already sorted
    int list4[] = {1, 2, 3, 4, 5};
    int n4 = sizeof(list4) / sizeof(list4[0]);
    insertion_sort(list4, n4);
    printf("Sorted list4: ");
    print_array(list4, n4);
    
    // Test case 5: Reversed list
    int list5[] = {5, 4, 3, 2, 1};
    int n5 = sizeof(list5) / sizeof(list5[0]);
    insertion_sort(list5, n5);
    printf("Sorted list5: ");
    print_array(list5, n5);

    return 0;
}
