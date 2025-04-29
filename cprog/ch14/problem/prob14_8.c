/*
Formatted Output in Various Bases
Create a program that uses formatted output to print a number in decimal, hexadecimal, and octal formats.
Use user input to get the number, and explain the use of different format specifiers.
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


/*
Notes:
Decimal: Human-readable format.

Hexadecimal: Compact form commonly used in memory addresses and debugging.

Octal: Historically used in permissions and lower-level programming
*/