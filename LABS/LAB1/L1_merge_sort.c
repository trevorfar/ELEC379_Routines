#include <stdio.h>
#include <stdlib.h>

// Merge function to merge two subarrays
void merge(int A[], int p, int q, int r) {
    int n1 = q - p + 1;  // Size of left subarray
    int n2 = r - q;      // Size of right subarray

    // Create temporary arrays for left and right
    int *left = (int *)malloc(n1 * sizeof(int));
    int *right = (int *)malloc(n2 * sizeof(int));

    // Copy data to temp arrays left[] and right[]
    for (int i = 0; i < n1; i++) {
        left[i] = A[p + i];
    }
    for (int j = 0; j < n2; j++) {
        right[j] = A[q + 1 + j];
    }

    // Merge the temp arrays back into A[p..r]
    int i = 0;  // Initial index of left subarray
    int j = 0;  // Initial index of right subarray
    int k = p;  // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            A[k] = left[i];
            i++;
        } else {
            A[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < n1) {
        A[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < n2) {
        A[k] = right[j];
        j++;
        k++;
    }

    // Free the temporary arrays
    free(left);
    free(right);
}

// Merge Sort function
void merge_sort(int A[], int p, int r) {
    if (p < r) {
        int q = p + (r - p) / 2;

        // Sort first and second halves
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);

        // Merge the sorted halves
        merge(A, p, q, r);
    }
}

// Utility function to print an array
void print_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Testing the merge_sort function
int main() {
    // Test case 1: Random list with repeating terms
    int list1[] = {11, 1, 51, 1, 5, 3};
    int n1 = sizeof(list1) / sizeof(list1[0]);
    merge_sort(list1, 0, n1 - 1);
    printf("Sorted list1: ");
    print_array(list1, n1);

    // Test case 2: Empty list
    int list2[] = {};
    int n2 = sizeof(list2) / sizeof(list2[0]);
    merge_sort(list2, 0, n2 - 1);
    printf("Sorted list2: ");
    print_array(list2, n2);

    // Test case 3: List with negative numbers
    int list3[] = {1, 1, -5, 6};
    int n3 = sizeof(list3) / sizeof(list3[0]);
    merge_sort(list3, 0, n3 - 1);
    printf("Sorted list3: ");
    print_array(list3, n3);

    // Test case 4: Already sorted list
    int list4[] = {1, 2, 3, 4, 5};
    int n4 = sizeof(list4) / sizeof(list4[0]);
    merge_sort(list4, 0, n4 - 1);
    printf("Sorted list4: ");
    print_array(list4, n4);

    // Test case 5: Reversed list
    int list5[] = {5, 4, 3, 2, 1};
    int n5 = sizeof(list5) / sizeof(list5[0]);
    merge_sort(list5, 0, n5 - 1);
    printf("Sorted list5: ");
    print_array(list5, n5);

    return 0;
}
