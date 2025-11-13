#include<stdio.h>

void swap(int *first, int *second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

void reverse(int arr[], int size){
    int start = 0, end = size - 1;
    while(start < end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

void print_arr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    printf("Welcome to reversing array\n");

    int arr1[] = {1,2,3,4,5,6,7};
    int size = 7;

    printf("\nOriginal Array:\n");
    print_arr(arr1, size);

    reverse(arr1, size);

    printf("\nAfter Reversing:\n");
    print_arr(arr1, size);

    return 0;
}
