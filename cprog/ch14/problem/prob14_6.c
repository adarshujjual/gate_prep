/*
Overflow Demonstration
Develop a program that assigns values near the limits of different integer types and performs arithmetic
operations to demonstrate overflow. Use limits.h to retrieve and print the maximum values, and discuss what
happens when you exceed these limits.
*/

#include <stdio.h>
#include <limits.h>

int main(){
    //max value of int
    printf("The max value of int:%d\n",INT_MAX);

    //max value of short
    printf("The max value of short:%d\n",SHRT_MAX);

    //max value of long
    printf("The max value of long:%d\n",LONG_MAX);

    //variables near their maximum limits
    int a = INT_MAX;
    short b = SHRT_MAX;
    long c = LONG_MAX;

    //overflow

    printf("int overflow:%d\n",a+1);
    printf("short overflow:%d\n",b+1);
    printf("long overflow:%d\n",c+1);

    return 0;

}