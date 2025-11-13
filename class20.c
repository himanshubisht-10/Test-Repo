#include <stdio.h>
int main() {
    int num;
    printf("Welcome to the digits sum program\n");
    printf("Please enter the number: ");
    scanf("%d", &num);

    int sum = 0;

    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }

    printf("The sum of digits is: %d", sum);
    return 0;
}
