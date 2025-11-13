#include<stdio.h>
int main(){
    // print the prime numbers between 1 to 100
    int i, j, isprime;
    printf("Prime numbers between 1 and 100 are:\n");
    for(i=2; i<=100; i++){
        isprime = 1; // assume i is prime
        for(j=2; j*j<=i; j++){
            if(i % j == 0){
                isprime = 0; // i is not prime
                break;
            }
        }
        if(isprime){
            printf("%d ", i);
        }
    }   
    printf("\n");
    return 0;
}