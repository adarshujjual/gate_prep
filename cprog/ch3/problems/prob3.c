/*
Develop a program that asks the user for the width and height of a rectangle and then calculates and
 prints the area. Use variables to store the dimensions and the computed area.
*/

#include <stdio.h>
int main(){

    float l,w,area=0; //define the variables for the dimensions and area of the rectangle 
    printf("Enter the dimensions of the rectangle.\n"); 

    printf("Enter the length of the rectangle:\n"); // enter the length of the rectangle
    scanf("%f",&l); // store float type using the %f format specifier
    printf("Enter the width of the rectangle:\n"); //enter width of rectangle
    scanf("%f",&w); // store width in "w" variable

    area=l*w; // area formula of rectangle

    printf("Area of the rectangle is %.2f.",area); //print the result as the computed area 

    return 0; //indicate end of prog 
}