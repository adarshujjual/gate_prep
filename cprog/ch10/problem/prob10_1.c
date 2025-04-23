/*
Simple typedef Usage
Write a program that uses typedef to create a new name for an existing data type (e.g., typedef unsigned int
uint;). Use the new type to declare variables and perform basic arithmetic operations.
*/

#include<stdio.h>

int main(void){

    typedef unsigned int unit; //using typedef to create unit as an alias for unsigned int 

    //declaring variables of the new type uint
    unit i = 5;
    unit j = 8;

    //arithmetic operations definition
    unit sum = i + j;
    unit product = i * j;
    unit difference = j - i;

    //printing output
    printf("Arithmetic operations using new type:\n");
    printf("Sum = %d\n",sum);
    printf("Product = %d\n",product);
    printf("Difference = %d\n",difference);

    return 0;
}

/*
Output:
Sum = 13
Product = 40
Difference = 3
*/