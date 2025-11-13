#include <stdio.h>

int is_sorted(int arr[], int size);

int main() {
    printf("Welcome to checking if Array is sorted\n");

    int arr1[5] = {5, 6, 3, 2, 5};
    int arr2[6] = {75, 78, 50, 12, 12, 0};
    int arr3[5] = {87, 0, -34, 68, 45};

    if(is_sorted(arr1, 5))
        printf("First array is sorted\n");
    else
        printf("First array is not sorted\n");

    if(is_sorted(arr2, 6))
        printf("Second array is sorted\n");
    else
        printf("Second array is not sorted\n");

    if(is_sorted(arr3, 5))
        printf("Third array is sorted\n");
    else
        printf("Third array is not sorted\n");

    return 0;
}

int is_sorted(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}
