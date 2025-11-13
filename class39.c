#include<stdio.h>
int main(){
    int num =5;
    int *ptr = &num;
    *ptr = 87;
    printf("value of num is: %d",num);
    return 0;
    
}