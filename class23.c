#include<stdio.h>
int main(){
    int num;
    printf("Welcome to printing Fibonacci series\n");
    printf("Please enter the number up to which series should be printed: ");
    scanf("%d", &num);

    int prev = 0;
    int next = 1;

    printf("%d ", prev);

    if (num > 0) {
        printf("%d ", next);
    }

    while (prev + next <= num) {
        int temp = prev + next;
        printf("%d ", temp);
        prev = next;
        next = temp;
    }

    return 0;
}
