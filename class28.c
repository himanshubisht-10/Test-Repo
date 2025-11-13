#include<stdio.h>
int main(){
    int num;
    printf("welcome to prime checker\n");
    printf("please enter the number");
    scanf("%d",num);
    int i =2;
    while(i<=num){
        if(num % i ==0){
            printf("%d is not price", num);
            return 0;

        }
        i++;
        printf("%d is prime,number");
    }
        return 0;
    }