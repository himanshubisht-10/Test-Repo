#include<stdio.h>

void increment(int a);   // function declaration (prototype)

int main(){
    int num;
    printf("welcome to showing call by value");
    printf("\nplease enter the number: ");
    scanf("%d",&num);

    printf("\nBefore value of num is %d",num);
    increment(num);
    printf("\nAfter: value of num is %d",num);

    return 0;
}

void increment(int a){
    printf("\nIn function Before: value of a is %d",a);
    a++; // change done only inside function
    printf("\nIn function After: value of a is %d",a);
}
