/*
Variables declared inside curly braces {} have block scope.

This is similar to function scope in other languages: variables exist only within their block.

If a block is nested inside another block, variables from the inner block are invisible to the outer block.

Once the block ends, the variable ceases to exist and its memory is reclaimed.
*/

// An example with nested scope:

#include <stdio.h>
int main(void){

    int a = 12;      // Local to outer block, but visible in inner block

    if(a == 12){
    int b = 99;     // Local to inner block, not visible in outer block

    printf("%d %d\n", a, b); // OK: "12 99"
    }

    printf("%d\n", a); // OK, we're still in a's scope
    
    printf("%d\n", b); // ILLEGAL, out of b's scope

}