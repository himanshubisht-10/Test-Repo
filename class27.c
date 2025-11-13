#include<stdio.h>
int main(){
    int num;
    printf("welcome to printing  tables\n");
    printf("please enter your number");
    scanf("%d",num);
    for(int i=1; i<=10; i++){
        printf("\n%d x%d = %d",num,i,num*i);
        return 0;
        
    }
}