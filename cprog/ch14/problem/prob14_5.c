/*
Explicit Type Casting
Write a program that demonstrates explicit type casting between different numeric types (for example, casting a
double to an int). Show both the value before and after casting, and explain any loss of precision.
*/

#include <stdio.h>

int main(){
    double s = 9.87654321;
    int i;

    printf("Original double value: %.8f\n",s);

    i = (int)s; //casting double into an int

    printf("After casting to int : %d\n",i);

    int num = 42;

    float f = (float)num; //casting int to float

    printf("\nOriginal int value:%d\n",num);
    printf("After casting to float:%2f\n",f);

    return 0;
}