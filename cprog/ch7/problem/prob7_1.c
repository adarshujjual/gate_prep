/*
Printing a String Literal
Write a simple program that declares a string literal (e.g., "Hello, C!") and prints it using printf().
Explain the concept of null-termination in your comments.
*/

#include <stdio.h>

int main(){
// Declaring a string literal
char str[] = {"Hello, World!"};
//when declaring the string using array use %s while %c when using pointers
printf("%s\n",str);
}


//The null character indicates where the string ends in memory.THus helping the printf() to know where's the end of the string.
//In c the string is an array of characters ending with a null (\0). 