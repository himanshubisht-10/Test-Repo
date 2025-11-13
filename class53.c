#include <stdio.h>

int factorial(int n);
void print_pascal(int rows);

int main() {
    int rows;
    printf("Welcome to Pascal Triangle Program\n");
    printf("Please enter the number of rows: ");
    scanf("%d", &rows);

    print_pascal(rows);  // ✅ function call
    return 0;
}

// ✅ Function to print Pascal's triangle
void print_pascal(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }

        // Print values
        for (int j = 0; j <= i; j++) {
            int value = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%4d", value);
        }
        printf("\n");
    }
}

// ✅ Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
