#include <stdio.h>

void delete_element(int arr[], int size, int element, int new_arr[], int *new_size);
void printf_arr(int arr[], int size);

int main() {
    printf("Welcome to deleting elements\n");

    int arr[] = {2, 4, 5, 6, 4, 6, 3};
    int size = 7;
    int new_arr[7];
    int new_size;

    delete_element(arr, size, 5, new_arr, &new_size);
    printf("\nThe array after deleting 5 is: ");
    printf_arr(new_arr, new_size);

    delete_element(arr, size, 7, new_arr, &new_size);
    printf("\nThe array after deleting 7 is: ");
    printf_arr(new_arr, new_size);

    return 0;
}

void delete_element(int arr[], int size, int element, int new_arr[], int *new_size) {
    int j = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] != element) {
            new_arr[j] = arr[i];
            j++;
        }
    }
    *new_size = j;
}

void printf_arr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
