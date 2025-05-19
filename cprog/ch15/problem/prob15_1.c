/*
Implicit Type Conversion in Arithmetic
Write a program that performs arithmetic operations on variables of different types (e.g., int and float) 
without explicit casting. Print the result and explain how C performs implicit conversion.
*/

#include <stdio.h>

int main() {
    int a = 7;
    float b = 2.5;
    float result;

    //implicit type conversion
    result = a * b;

    printf("int a = %d\n",a);
    printf("float b = %.2f\n",b);
    printf("Result of a * b = %.2f\n",result);

    return 0;
}

/*
>If types differ, the "smaller" type is promoted to the "larger" type automatically.

>Hierarchy of types (lowest to highest precision):
char → short → int → unsigned int → long → unsigned long → float → double → long double

>Result of arithmetic will be in the type of the higher precision operand.
*/

