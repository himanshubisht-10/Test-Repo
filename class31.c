#include<stdio.h>
int add(int, int, int, int);
int main(){
    printf("welcome to adding 4 numbers\n");
    printf("\n%d", add(1,2,3,4));
    printf("\n%d", add(11,22,33,44));
    return 0;

}
int add(int a, int b, int c, int d){
    int sum = a + b + c + d;
    return sum;

}