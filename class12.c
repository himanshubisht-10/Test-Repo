#include<stdio.h>
#include<math.h>   // important for pow()

int main() {
    float principal, rate, time, amount, ci;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;

    printf("Compound Interest = %.2f\n", ci);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
