/*
Dynamic Input Storage
Write a program that prompts the user to enter a series of integers. Allocate memory dynamically based on the
user’s input (first asking for the number of integers) and store them in an array. Print the collected values
and free the memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    //number of integers
    printf("No. of integers?");
    scanf("%d", &n);

    //allocate memory using malloc
    int *a = (int *)malloc(n * sizeof(int));
    if(a == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    //integers from the user
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    //print the values
    printf("\nElements entered:\n");
    for(int i = 0; i < n; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }

    //free the memory
    free(a);

    return 0;
}















