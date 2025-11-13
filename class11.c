#include<stdio.h>

int main() {
    float principal, rate, time, si;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f", si);

    return 0;
}
