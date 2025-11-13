#include<stdio.h>
int factorial(int);
int main(){
    int num;
    printf("welcome to factorial world\n");
    printf("please enter the number");
    scanf("%d",&num);
    long result = factorial(num);
    printf("The factorial of %d is %ld",num,result);
    
return 0;
}
int factorial(int num){
    if(num<=1){
        return 1;

    }
    return num * factorial(num-1);

}