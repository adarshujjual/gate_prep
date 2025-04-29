/*
Floating-Point Precision
Create a program that declares variables of types float, double, and long double. Print their values with a 
high degree of precision and discuss the differences in precision and range.
*/

#include <stdio.h>

int main(){
    float f = 3.1415926535f;

    double d = 3.141592653589793;

    long double ld = 3.1415926535897932384626L;

    printf("Float precision value: %.20f\n",d);

    printf("Double value :%20lf\n",d);

    printf("Long double value :%.20Lf\n",ld);

    return 0;
}


/*
Notes:
Type
 Decimal        Digits      You Can Store Minimum
 float          FLT_DIG             6
 double         DBL_DIG             10
 long double    LDBL_DIG           10
*/