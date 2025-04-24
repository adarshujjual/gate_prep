/*
Reversing an Array Using Pointers
Implement a function that reverses an array in place by swapping elements using pointers and pointer arithmetic.
Test the function with a sample array and print the before-and-after arrays.
*/

#include <stdio.h>

//function definition to reverse an array using pointers
void revArray(int *a, int size) {
    int *first = a;            //pointer to the first element
    int *last = a + size - 1;  //pointer to the last element

    while (first < last) {
        //swapping the values 
        int temp = *first;
        *first = *last;
        *last = temp;

        first++;    //incrementing towards last
        last--;     //decrementing towards first
    }
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(x)/sizeof(x[0]);//finding the size of the array

    printf("Original array:\n");
    for(int i = 0; i < size; i++){
        printf("%d",x[i]);
    }

    //reversing the array by calling the function
    revArray(x,size);

    //printing the output after reversing the array
    printf("\nReversed array:\n");
    for(int i = 0; i < size; i++){
        printf("%d",x[i]);
    }

    return 0;
}
