#include <stdio.h>

int sum(int arr[], int size);

int main() {
    int arr[10];
    printf("Welcome to Sum and Average of Array\n");
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    int addition = sum(arr, 10);     // Correct function call
    float avg = addition / 10.0;     // Calculate average
    
    printf("The sum of the numbers is %d and their average is %f", addition, avg);

    return 0;
}

int sum(int arr[], int size) {
    int addition = 0;
    for(int i = 0; i < size; i++) {   // Correct loop syntax
        addition += arr[i];
    }
    return addition;
}
