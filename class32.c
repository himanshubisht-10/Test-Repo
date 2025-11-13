#include<stdio.h>

int square(int); // function declaration

int main(){
    int num;
    printf("welcome to the world of squares\n");
    printf("please enter the number: ");
    scanf("%d",&num);

    printf("The square of %d is %d", num, square(num));
    return 0;
}

// function definition
int square(int num){
    return num * num;
}

