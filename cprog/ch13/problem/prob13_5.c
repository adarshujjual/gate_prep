/*
Variable Hiding Example
Create a program that declares a global variable and then declares a local variable with the same name inside
main(). Print both (by accessing the global explicitly if necessary) to explain how variable hiding works.

*/


#include <stdio.h>

int global_var = 20;

int main() {

    int global_var = 10;

    printf("Local variable: %d\n", global_var);

    {
        extern int global_var;
        printf("Global variable: %d\n", global_var);
    }

    return 0;
}

/*
Notes: Line 19 : {
Purpose:Opens a new block scope within main.
Details:
This creates a nested scope where new variable declarations can exist.
Variables declared in this block are local to it, but existing variables (like the local global_var in main)
remain accessible unless shadowed.
Purpose: Declares that global_var refers to an external (global) variable named global_var defined elsewhere in
the program.
Details:
The extern keyword tells the compiler to look for a global variable named global_var defined outside the current
scope (in this case, the global global_var = 20 defined at the top).
This declaration overrides the shadowing of the local global_var (from main) within this block scope. Inside
this block, references to global_var now point to the global variable with value 20, not the local one with
value 10.
Note: extern here does not define or allocate new memory; it only declares that the variable exists elsewhere.

*/