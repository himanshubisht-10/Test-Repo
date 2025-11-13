#include <stdio.h>

int search(int arr[3][3], int row, int col, int element);

int main() {
    printf("Welcome to searching in 2D array\n");
    
    int arr[3][3] = {
        {1, 4, 3},
        {2, 5, 3},
        {4, 6, 7}
    };
    
    int occ = search(arr, 3, 3, 1);
    if (occ)
        printf("Element found!\n");
    else
        printf("Element not found!\n");

    return 0;
}

int search(int arr[3][3], int row, int col, int element) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == element)
                return 1; // found
        }
    }
    return 0; // not found
}
