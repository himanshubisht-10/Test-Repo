#include<stdio.h>

float get_average(int a, int b, int c, int d, int e);

int main(){
    int a,b,c,d,e;
    printf("welcome to calculating averages\n");

    printf("please, enter the first number: ");
    scanf("%d",&a);

    printf("Now, enter the next number: ");
    scanf("%d",&b);

    printf("Now, enter the next number: ");
    scanf("%d",&c);

    printf("Now, enter the next number: ");
    scanf("%d",&d);

    printf("Now, enter the next number: ");
    scanf("%d",&e);

    float average = get_average(a,b,c,d,e);
    printf("The average is %.2f", average);

    return 0;
}

float get_average(int a, int b, int c, int d, int e){
    float sum = a + b + c + d + e;
    return sum / 5;
}
