#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int positive = UINT_MAX;  // Max value of unsigned int
    int normal = INT_MAX;              // Max value of normal int

    printf("Max value of unsigned int is: %u", positive);
    printf("\nMax value of normal int is: %d", normal);

    positive++; // Overflow for unsigned int (wrap-around to 0)
    normal++;   // Overflow for signed int (undefined, but usually goes to negative)

    printf("\nAfter increment:");
    printf("\nUnsigned int value becomes: %u", positive);
    printf("\nNormal int value becomes: %d", normal);

    return 0;
}
