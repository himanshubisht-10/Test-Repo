#include<stdio.h>
int main(){
    int marks;
    printf("welcome to Grade calculator\n");
    printf("please enter your marks");
    scanf("%d",&marks);
    if(marks>90){
        printf("you have got A grade");

    }else if(marks>75){
        printf("you have got B grade");

    }
    
    else if(marks>60){
        printf("you have got c grade");

    }else if(marks>30){
        printf("you have got d grade");

    }
    else{
        printf("you have failed the exam with f grade");
    }
return 0;
}