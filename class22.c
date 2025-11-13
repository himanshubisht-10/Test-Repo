#include <stdio.h>

int main() {
    int num;
    printf("welcome to reversing the number\n");
    printf("please enter the number: ");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;

    while(copy > 0) {
        reverse = reverse * 10 + (copy % 10);
        copy /= 10;
    }

    printf("The reverse of %d is %d", num, reverse);
    return 0;
}
