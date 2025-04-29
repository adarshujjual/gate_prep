/*
Block Scope Demonstration
Write a program that declares a variable inside a block (using {}) and attempts to print its value outside the 
block. Observe and comment on the error or behavior in your code.
*/

#include <stdio.h>

int main() {
    
    // x's scope is only inside {}
    {
        int x = 42;  // x is declared inside this block
        printf("Inside the block:x= %d\n",x);
    } 
    
    //accessing x outside the block
    printf("Outside block: x = %d\n", x); // ERROR: 'x' is undefined here

    return 0;
}

/*
Note:
Variables declared inside a {} block are local to that block and cannot be used outside where they were declared.
*/
