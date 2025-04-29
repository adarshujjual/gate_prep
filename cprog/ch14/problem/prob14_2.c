/*
Signed vs Unsigned Arithmetic
Develop a program that declares both signed and unsigned integers, performs arithmetic operations on them,
and prints the results. Explain the behavior when negative values are involved.
*/

#include <stdio.h>

int main(){

    unsigned int a = 9;
    signed int b = -4;

    int sum = a + b;
    int dif = a - b;
    int prod = a * b;

    //printing the result 

    printf("The sum = %d\n",sum);

    printf("The difference = %d\n",dif);

    printf("The product = %d\n",prod);
    
}

//signed + unsigned = signed
