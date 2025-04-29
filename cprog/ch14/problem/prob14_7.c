/*
Calculating Type Ranges
Write a program that calculates and prints the range of a given integer type by using constants from limits.h.
Explain how these limits can affect program logic.
*/

#include <stdio.h>
#include <limits.h>

int main() {
    printf("Integer Type Ranges from <limits.h>:\n");

    printf("char: from %d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("unsigned char : from 0 to %u\n",UCHAR_MAX);

    printf("short: from %d to %d\n",SHRT_MIN,SHRT_MAX);
    printf("unsigned short : from 0 to %u\n",USHRT_MAX);

    printf("int: from %d to %d\n",INT_MIN,INT_MAX);
    printf("unsigned int   : from 0 to %u\n",UINT_MAX);

    printf("long: from %ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("unsigned long  : from 0 to %lu\n",ULONG_MAX);

    printf("long long: from %lld to %lld\n",LLONG_MIN,LLONG_MAX);
    printf("unsigned long long : from 0 to %llu\n",ULLONG_MAX);

    return 0;
}
