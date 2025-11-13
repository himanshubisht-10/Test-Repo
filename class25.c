#include <stdio.h>

int main() {
    int rows;
    printf("Welcome to printing patterns\n");
    printf("Please enter the number of rows: ");
    scanf("%d", &rows);

    // Right Half Pyramid
    printf("\nRight Half Pyramid:\n");
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    // Reverse Right Half Pyramid
    printf("\nReverse Right Half Pyramid:\n");
    for(int i = rows; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


