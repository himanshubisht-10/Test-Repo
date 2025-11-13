#include<stdio.h>
const float MILE_per_kM = 0.63456;
int main(){
    int kms;
    printf("Welcome to Distance converter.\n");
    printf("please ente the kms:");
    scanf("d",&kms);
    
long miles = kms + MILE_per_kM;
printf("The number of miles are %d",miles);
return 0;

}