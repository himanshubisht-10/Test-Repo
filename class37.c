#include<stdio.h>

int reverse(int num, int rev);

int main(){
    int num;
    printf("welcome to palindrome number\n");
    printf("please enter the number: ");
    scanf("%d",&num);   // Corrected: added &

    int rev = reverse(num, 0);

    if(num == rev){
        printf("%d is a palindrome\n", num);
    }
    else{
        printf("%d is not a palindrome\n", num);
    }
    return 0;
}

int reverse(int num, int rev){
    if(num == 0){
        return rev;
    }
    int remainder = num % 10;
    int new_num = num / 10;
    int new_rev = rev * 10 + remainder;
    return reverse(new_num, new_rev);
}
