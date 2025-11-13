#include<stdio.h>
int main(){
    int b,h;
    printf("welcome to area of triangle calculation.\n");
    printf("please enter the height:");
    scanf("%d",&h);
    printf("Now, enter the breadth:");
    scanf("%d",&b);
    float area = 0.5 * b * h;
    printf("\n Area of your traiangle is: %f",area);
    return 0;

}