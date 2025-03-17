#include <stdio.h>

// This function taken int as an input argument and returns also an integer:

// function definition:
    int plus_one(int n) 
    {
    return n + 1;
    }
// This function takes no arguments and returns no value:[empty parameter list]

// function definition: [here void indicates that the function takes no input]
    void hello(void) //With a prototype definitely use void when you have an empty parameter list
    {
    printf("Hello, world!\n");
    }

    int main(void){

    int i = 10, j;
    j = plus_one(i);                // calling the function inside the main 
    printf("i + 1 is %d\n", j);     // returning locally modified value

    // Prints "Hello, world!":
    hello();                        // calling the function
 
}


/*
//output is:

i + 1 is 11
Hello, world!

*/