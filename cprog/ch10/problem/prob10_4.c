/*
Union with typedef
Define a union using typedef that can hold either an integer or a float. Write a program that assigns values to
 each member and prints them, discussing how memory is shared in unions.
*/

#include <stdio.h>

typedef union { //using typedef to define union int_float as int_float
    int a;
    float b;
} int_float;

int main(void){

    int_float element; //declaring a int_float union variable

    element.a = 007; //integer value declaration
    printf("The integer value for the union is:%d\n",element.a);

    element.b = 0.007; //float value declaration
    printf("The float value for the union is:%.3f\n",element.b);

    return 0;
}

/*
Notes:
In union the memory is shared by all the members so changing the value of one member overwrites the value of
the other member.
So only one member uses the memory at a time.Thus initializing the member that isn't the last defined member
will give us garbage value.
PS:"Similar to struct"
*/

