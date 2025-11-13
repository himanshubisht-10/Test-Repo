#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Welcome to Adding Positive Numbers\n");

    do{
        printf("Please enter the number: ");
        scanf("%d",&num);

        if(num < 0)
            continue;  // Skip negative numbers

        sum += num;    // Add only positive numbers

    }while(num != 0);  // Stop when user enters 0

    printf("The sum of all positive numbers is %d", sum);

    return 0;
}
