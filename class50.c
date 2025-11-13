#include<stdio.h>
int is_palindrome(int arr[], int size);

int main(){
    int arr1[9] = {3,5,3,6,3,2,6,44,7};
    int arr2[5] = {1, 1, 2,4,5};
    int arr3[5] = {1,3,4,5,6,7};
    printf("\n Result for first array:%d", is_palindrome
    (arr1,9));
    printf("\nResult for second array:%d",is_palindrome(arr2,4));
    printf("\nResult for third array:%d",is_palindrome);
    (arr3,5);
    return 0;

}
int is_palindrome(int arr[],int size){
    for(int i=0; i<size/2; i++){
        if(arr[i]==arr[size-1-i]){
        }
    }
    return 0;

}