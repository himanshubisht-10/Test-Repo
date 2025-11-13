#include <stdio.h>

void copy_arr(char *arr, int size, char *new_arr);
void print_arr(char *arr, int size);

int main() {
    char arr[9] = {'k', 'G', 'i', 'c', 'o', 'd', 'n'};
    char new_arr[9];

    printf("Welcome to copying array using pointer arithmetic\n\n");

    printf("Original char array:\n");
    print_arr(arr, 7); // size = 7 (you only initialized 7 elements)

    copy_arr(arr, 7, new_arr);

    printf("\nCopied char array:\n");
    print_arr(new_arr, 7);

    return 0;
}

void copy_arr(char *arr, int size, char *new_arr) {
    for (int i = 0; i < size; i++) {
        *(new_arr + i) = *(arr + i);
    }
}

void print_arr(char *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", *(arr + i));
    }
    printf("\n");
}
