/*
Adding to a Pointer
Write a program that demonstrates adding an integer offset to a pointer. Access an element in an array by
computing its address using pointer arithmetic and print the value.
*/

#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5}; // Declare an array
    int *ptr = a; // Pointer to the first element

    int offset = 3; // Offset to move 3 elements ahead

    // Access the element at index 3 using pointer arithmetic
    int val = *(ptr + offset);

    //
    printf("Element at index %d is: %d\n", offset, val);

    return 0;
}
