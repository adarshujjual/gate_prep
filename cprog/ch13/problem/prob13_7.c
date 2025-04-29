/*
Loop Variable Scope
Develop a program that declares a variable inside a for-loop and attempts to access it outside the loop.
Document the behavior and explain why the variable’s scope is limited to the loop.
*/

#include <stdio.h>

int main(){

    for(int i = 0; i < 5; i++){
        printf("Inside loop:i = %d\n",i);
    }

    //accessing 'i' outside the loop
    printf("Outside the loop:i = %d\n",i); //ERROR: 'i' is not declared in this scope

    return 0;
}

/*
Note:
In C, variables declared inside a block {} are local to that block.

The for loop creates an implicit block for the loop variable (i).

Once the loop ends, the scope of i ends too, and it cannot be accessed outside.
*/