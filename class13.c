#include<stdio.h>
int main(){
    int f;
    printf("enter the temperature converter.\n");
    printf("please enter temp in F:");
    scanf("%f",&f);
    float c = ( f- 32) * 5/ 9;
    printf("\n Temp in c is: %2f",c);
    return 0;
    
}