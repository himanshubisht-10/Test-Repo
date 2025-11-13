#include <stdio.h>

int main() {
    int n;

    // Input from user
    printf("Enter a positive integer (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }

    // Print table header
    printf("\n%-10s%-10s%-10s\n", "Number", "Square", "Cube");
    printf("-----------------------------\n");

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%-10d%-10d%-10d\n", i, i*i, i*i*i);
    }

    return 0;
}
