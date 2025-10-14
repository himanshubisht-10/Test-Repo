#include<stdio.h>
int main(){
    // sorted non decreasing order
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && a<=c){
        if(b<=c){
            printf("Sorted order is %d %d %d",a,b,c);
        }
        else{
            printf("Sorted order is %d %d %d",a,c,b);
        }
    }
    else if(b<=a && b<=c){
        if(a<=c){
            printf("Sorted order is %d %d %d",b,a,c);
        }
        else{
            printf("Sorted order is %d %d %d",b,c,a);
        }
    }
    else{
        if(a<=b){
            printf("Sorted order is %d %d %d",c,a,b);
        }
        else{
            printf("Sorted order is %d %d %d",c,b,a);
        }
    }
}