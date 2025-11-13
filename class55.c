#include <stdio.h>

int main() {
    char day[4];    // Example: Mon, Tue, Wed
    char month[10]; // Example: January, March
    int year;

    printf("Welcome to formatting day!\n\n");

    printf("Please enter the day (e.g. Mon): ");
    scanf("%s", day);

    printf("Enter the month (e.g. March): ");
    scanf("%s", month);

    printf("Enter the year (e.g. 2025): ");
    scanf("%d", &year);

    printf("\nCurrent date: %s %s, %d\n", day, month, year);

    return 0;
}
