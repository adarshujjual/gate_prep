/*
Out-of-Bounds Pointer Arithmetic
Design a program that deliberately attempts to access an element beyond the bounds of an array using pointer
arithmetic. Include checks to prevent undefined behavior (or comment on what would happen), explaining the risks
involved.
*/

#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};//array initialization

    int *p = a; //pointer to the array

    printf("Accessing array within bounds:\n");//statement
    //safely printing/accessing the index within the size limit of the array
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n",i,*(p + i)); //accessing safely
    }

    //accessing out-of-bounds index
    int index = 5; // 1 beyond the last valid index (arr[4])
    printf("\nAttempting to access out of bonds.\n");//statement

    //commenting out the error part below
    //printf("*(p + %d) = %d\n",index,*(p + index));


    //checks to prevent undefined behaviour
    if(index >= 0 && index < 5){
        printf("Safely accessing: *(ptr + %d) = %d\n",index,*(p + index)); //within bounds
    }else{
        printf("Error: Attempted to access out-of-bounds memory at index: %d\n",index);//out-of-bound
    }

    return 0;
}
