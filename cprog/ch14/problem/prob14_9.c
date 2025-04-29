/*
Mixed-Type Arithmetic
Write a program that performs arithmetic operations involving mixed types (such as an int and a float).
Print the result and explain how implicit conversion affects the calculation.
*/

#include <stdio.h>

int main(){
    int a = 5;
    float b = 2.5;
    float result;

    //implicit conversion happens here
    result = a + b;

    printf("int a = %d\n",a);
    printf("float b = %.2f\n",b);
    printf("Result of a + b = %.2f\n",result);

    return 0;
}

/*
Notes:
In the expression a + b, the int (a) is automatically converted to a float before the addition, because b is a
float.This is known as type promotion — C promotes the smaller type to the larger/more precise one during
mixed-type operations.The result is a float, so we store it in a float variable.
*/