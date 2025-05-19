/*
Mixing Signed and Unsigned Types
Write a program that performs arithmetic operations with both signed and unsigned integers. Print the
results and explain the conversion rules that apply when mixing these types.
*/

#include <stdio.h>

int main(){

    signed int a = -15;
    unsigned int b = 9;

    unsigned result = a + b;

    printf("Sum of signed and unsigned int:%d",result);

    return 0;
}