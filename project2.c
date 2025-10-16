#include<stdio.h>
int main(){
    // area of reactangle
    float l,b,area;
    printf("Enter length and breadth of rectangle:");
    scanf("%f%f",&l,&b);
    area=l*b;
    printf("Area of rectangle is %.2f",area);
    return 0;
    
}