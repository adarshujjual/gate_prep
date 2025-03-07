/*
Write a program that declares an uninitialized variable and prints its value, then initializes it and prints
the new value. Discuss in comments why initializing variables is important.
*/

#include <stdio.h>
int main() {

    int i; // int type variable 'i' with uninitialized value
    float pi_val; // float type variable that stores decimal numbers and whose value is uninitialized  
    char asterisk; // char type variable asterisk stores character here uninitialized 

    printf("Printing value of uninitialized variables:\n");
    printf("%d\n%f\n%c\n",i,pi_val,asterisk);

    i = 1; // int type variable 'i' with initialized value equal to 1
    pi_val = 3.14; // float type variable that stores decimal numbers and  value is initialized as "3.14"
    asterisk = '*'; // character type variable stores character here initialized as "*"

    printf("Printing value of initialized variables:\n");
    printf("%d\n%f\n%c\n",i,pi_val,asterisk);

    return 0;
}

/*
Output:

Printing value of uninitialized variables:
4199120         // garbage values (random memory data)
0.000000        // garbage values (random memory data)
                // Uninitialized value of c: ' ' (if the value is 32, the ASCII code for a space)..The exact output will vary each time you run the program because it depends on the memory state, which changes with different executions or environments.

Printing value of initialized variables:
1              
3.140000       
*


Why Initializing Variables Is Important:

>Uninitialized variables hold garbage values (random memory data), leading to unpredictable program behavior and hard-to-debug errors.
>Using uninitialized variables in calculations or conditions can cause incorrect results or crashes.
>Initializing variables ensures they have a known, predictable value, improving program reliability and consistency.
>Best practice: Always initialize variables at declaration or before use to avoid undefined behavior and simplify debugging.
*/
