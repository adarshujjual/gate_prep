/*
File Scope:
A variable defined outside of all blocks and functions has file scope.

It's accessible by all functions in the same file after its declaration.

This is similar to global scope in other languages.

If a function or block declares a local variable with the same name, it hides the file-scope variable within
that scope.
*/

#include <stdio.h>

int shared = 10; // File scope! Visible to the whole file after this!

void func1(void){
    shared += 100; // Now shared holds 110
}

void func2(void){
    printf("%d\n", shared); // Prints "110"
}

int main(void){
    func1();
    func2();
}


/*
A file-scope (global) variable must be declared before any function that tries to use it.

If you declare the variable after a function that uses it, the compiler will give an error.

Always define global variables at the top of the file to avoid such issues.
*/