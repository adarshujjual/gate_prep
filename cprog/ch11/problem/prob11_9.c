/*
Equivalence of Notations
Write a program that demonstrates that array[i] is equivalent to *(array + i). Use both notations to print the
same array elements, and explain the concept in your comments.
*/

#include <stdio.h>

int main() {
    //initializing an array
    int a[5] = {1,2,3,4,5};

    printf("Using array indexing (array[i]):\n");//statement
    //printing using array[i]
    for(int i = 0; i < 5;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }

    printf("\nUsing the pointer arithmetic (*(array + i)):\n");//statement
    //printing using *(array + i)
    for(int i = 0; i < 5;i++){
        printf("*(a + %d) = %d\n",i,*(a + i));
    }

    return 0;
}










