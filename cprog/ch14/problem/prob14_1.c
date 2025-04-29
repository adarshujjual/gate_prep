/*
Exploring Integer Types
Write a program that declares variables of types short, int, long, and long long. Use the sizeof operator 
to print the size of each type, and discuss potential platform differences.
*/

#include <stdio.h>

int main(){

    short s;
    int i;
    long l;
    long long ll;

    printf("Size of short :%zu bytes\n",sizeof(s));
    printf("Size of int :%zu bytes\n",sizeof(i));
    printf("Size of long :%zu bytes\n",sizeof(l));
    printf("Size of long long :%zu bytes\n",sizeof(ll));

    return 0;
}

//use sizeof to find the size of different data types