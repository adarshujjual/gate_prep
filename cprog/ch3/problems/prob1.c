/*Write a program that declares variables of different types (int, float, char) and prints their values
using printf(). Comment on the importance of type matching in format specifiers.*/

#include <stdio.h>
int main(){

    int i=1; // inter type variable with initialized value equal to 1
    float pi_val=3.14; // float type variable that stores decimal numbers here value is initialized as "3.14"
    char ast = '*'; // character type variable stores character here initialized as "*"

    printf("%d\n%.2f\n%c\n",i,pi_val,ast); // print value of variables of different type using format specifiers eg~"%d,%f,%c"

}

/*
Importance of Type Matching in Format Specifiers :

Type matching in format specifiers (e.g., %d, %f, %s in C/C++) is crucial for:

    >Ensuring correct data interpretation and output.
    >Preventing memory safety issues like buffer overflows.
    >Maintaining code reliability and easing debugging.
    >Optimizing performance by avoiding data misinterpretation.
    >Enhancing portability across systems.

Mismatched types can cause incorrect results, crashes, or undefined behavior, 
so aligning specifiers with variable types is essential for robust programming.
*/