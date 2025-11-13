#include<stdio.h>
int main(){
    int num;
    int *ptr = num;
    printf("welcome to showcasing integer pointers");
    printf("please enter the value");
    scanf("%d",ptr);
    printf("The value of num is: %d",*ptr);
    printf("The value of num is:%d",num);
    return 0;
}