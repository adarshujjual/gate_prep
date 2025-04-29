/*
Integer Conversion to Hex and Octal
Write a program that reads an integer from the user and prints its hexadecimal and octal representations using
formatted output (e.g., %x and %o).
*/

#include <stdio.h>

int main(){

    int numbers;

    printf("Enter an integer:\n");
    scanf("%d,&number");

    //printing the number using the different formats
    printf("\nDecimal Conversion:%d\n",number);

    printf("Hexadecimal Conversion:%x\n",number);
    
    printf("Octal:%o",number);

    return 0;
}
