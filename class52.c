#include <stdio.h>

// Function declarations
void merge_sorted_arrays(int arr1[], int size1, int arr2[], int size2, int arr3[]);
void print_arr(int arr[], int size);

int main() {
    int arr1[7] = {1, 2, 3, 5, 6, 7, 9};
    int arr2[7] = {2, 4, 6, 7, 10, 12, 14};
    int arr3[14]; // total size = 7 + 7

    printf("Welcome to merging sorted arrays\n\n");
    printf("Merged array:\n");

    merge_sorted_arrays(arr1, 7, arr2, 7, arr3);
    print_arr(arr3, 14);

    return 0;
}

// Function to merge two sorted arrays into a third array
void merge_sorted_arrays(int arr1[], int size1, int arr2[], int size2, int arr3[]) {
    int i = 0, j = 0, k = 0;

    // Merge until one array ends
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Copy remaining elements of arr1 (if any)
    while (i < size1)
        arr3[k++] = arr1[i++];

    // Copy remaining elements of arr2 (if any)
    while (j < size2)
        arr3[k++] = arr2[j++];
}

// Function to print the array
void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
