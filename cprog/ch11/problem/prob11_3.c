/*
Index-Free Array Access
Write a program that accesses and prints every element of an array using pointer arithmetic exclusively,
without the [] operator.
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