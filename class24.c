#include<stdio.h>
int main(){
    int num;
    printf("welcome to Arrmstrong number checker\n");
    printf("please enter the number");
    scanf("%d",&num);
    int sum = 0;
    int copy = num;
    while(copy > 0){
        int digit = copy % 10;
        sum += digit * digit * digit;
        copy /= 10;

    }
    if(sum ==num){
        printf("The number %d is a Arsmstrong number");

    }
    else{
        printf("The number %d is not a Armstrong number.");
        
    }
    return 0;
    
}