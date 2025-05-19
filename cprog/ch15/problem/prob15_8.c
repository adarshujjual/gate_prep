/*
Numeric to Hexadecimal String Conversion
Create a program that takes an integer input, converts it to its hexadecimal string representation
(using functions like sprintf()), and prints the resulting string.
*/

#include <stdio.h>

int main(){

    int num;

    char hexString[20];//buffer for hex string

    printf("Enter an integer:");
    scanf("%d",&num);


    sprintf(hexString,"%X",num);//Note: "X" --- Capital X for uppercase hex and "x" -- small x for lower case hex

    //hexadecimal string
    printf("Hexadecimal representation: %s\n",hexString);

    return 0;
}