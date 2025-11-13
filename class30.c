#include<stdio.h>
int main(){
    int num;
    printf("welcome to the world of squares");
    while(1){
        printf("please enter the number:");
        scanf("%d",&num);
        if(num==-1)break;
        printf("The square of %d is %d", num, num *num);

    }
    return 0;
}