/*
Explicit Casting Between Float and Int
Create a program that demonstrates explicit type casting by converting a floating-point number to an integer.
Show the value before and after casting, and discuss how the fractional part is handled.
*/

#include <stdio.h>

int main(){

    float f;
    int i;

    printf("Enter a floating-point number:\n");
    scanf("%f",&f);

    i = (int)f;//casting float to int

    printf("Original float value:%.2f\n",f);
    printf("After casting to int:%d\n",i);

    return 0;
}