/*
Write a program that converts a temperature given in Celsius to Fahrenheit using the formula F = (C * 9/5) + 32.
Ensure that you read input from the user and display a clear output.
*/

#include <stdio.h>
int main() {

    float cls; //float type variable cls 
    float fht; //float type variable fht

    printf("Conversion of temperature in celsius to fahrenheit :\n"); //statement

    printf("Enter the temperature in celsius:\n"); 
    scanf("%f",&cls); //take input temp in celsius

    //note: In C, integer division truncates the result to an integer, so 9/5 evaluates to 1 (not 1.8). This makes the formula incorrect for converting Celsius to Fahrenheit.
    //To fix this, at least one of the numbers in the division should be a floating-point value (e.g., 9.0/5 or 9/5.0) to ensure floating-point division.
    
    fht = (cls * 9.0/5.0) + 32 ; //formula for conversion from celsius to fahrenheit 
    
    printf("Temperature in fahrenheit:%.2f\n",fht); //output temp in fahrenheit

    return 0;

}