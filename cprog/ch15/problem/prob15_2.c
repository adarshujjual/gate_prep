/*
String to Integer Conversion
Develop a program that reads a string from the user and converts it to an integer using atoi(). Include error 
checking to ensure that the input is numeric and print an appropriate message if it isn’t.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char c[100];
    int num;

    printf("Enter a number:");
    fgets(c,sizeof(c),stdin);

    num = atoi(c);

    if((c[0] >= '0' && c[0] <= '9') || [0] == '-'){
        printf("The number entered is %d\n",num);
    }else{
        printf("ERROR:Number not entered.\n");
    }

    return 0;
}

