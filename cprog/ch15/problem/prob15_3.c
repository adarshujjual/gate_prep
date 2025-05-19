/*
Integer to String Conversion
Write a program that takes an integer input from the user and converts it to a string using sprintf().
Print the resulting string and discuss the formatting process.
*/

#include <stdio.h>

int main(){

    int num;
    char c[100];

    printf("Enter an integer:\n");
    scanf("%d",&num);
    int size = sizeof(num);

    snprintf(c,size,"%d",num);
    //sprintf(c,"%d",num);//prone to overflow

    printf("The number converted into a string is:%s\n",c);

    return 0;
}