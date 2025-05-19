/*
String to Floating-Point Conversion
Develop a program that reads a numeric string from the user and converts it to a float using atof().
Print the resulting float and include comments on potential pitfalls of this conversion.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char c[100];
    float num;

    printf("Enter a numeric string:\n");
    scanf("%s",c);

    num = atof(c);//converting numeric string to float

    printf("The number as a float:%f\n",num);

    return 0;
}
