#include<stdio.h>
int main(){
    int number;
    printf("please enter the number");
    scanf("%d",&number);
    if(number > 0){
        printf("\n The number is positive");

    }
    else if (number < 0){
        printf("\n The number is negative");
    }
    else{
        printf("\n the number is zero");
    }
    return 0;
    
}