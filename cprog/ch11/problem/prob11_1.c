/*
Pointer Arithmetic with Arrays
Write a program that declares an array and uses a pointer to iterate over it using pointer arithmetic. 
Print each element using the pointer, not array indexing.
*/

#include <stdio.h>

    int main(void){

    int a[] = {11, 22, 33, 44, 55}; //initializing an arrray with its element

    int *p = a; // p points to the first element of a

    //printing the elements of the array using the pointer arithmetic
    for(int i = 0;i < 5;i++){
        printf("%d\n",*(p+i));
    }

    return 0;

}    