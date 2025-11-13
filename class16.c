#include<stdio.h>
int main(){
    int first,second,third;
    printf("enter the first number");
    scanf("%d",&first);
    printf("enter the second number");
    scanf("%d",&second);
    printf("enter the third number");
    scanf("%d",&third);
    if(first > second && first > third){
    printf("%d is the greatest",first);
    }
    else if (second > third){
        printf("%d is the greatest",second);

    }
    else{
        printf("%d is the greatest",third);
        
    }


}