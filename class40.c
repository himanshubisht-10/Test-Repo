#include<stdio.h>
int main(){
    char character;
    char *ptr = &character;
    printf("welcome to showcasing character pointes.\n");
    printf("please enter the value:");
    scanf("%c",ptr);
    printf("\n The value of num is:%c",*ptr);
    printf("\n The value of num is: %c",character);
    return 0;


    
}