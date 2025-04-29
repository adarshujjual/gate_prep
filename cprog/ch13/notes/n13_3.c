/*
Variable Hiding:
If a variable in an inner block has the same name as a variable in an outer block, the inner one takes
precedence inside its block.

This is called variable hiding.

The outer variable becomes inaccessible while inside the inner block.

Once the inner block ends, the outer variable becomes visible again.
*/

#include <stdio.h>

 int main(void){

    int i = 10;

    {
    int i = 20;
    printf("%d\n", i); // Inner scope i, 20 (outer i is hidden)
    }

    printf("%d\n", i); // Outer scope i, 10
}