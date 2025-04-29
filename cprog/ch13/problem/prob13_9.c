/*
Automatic vs. Static Lifetime
Create a program that contrasts an automatic variable with a static variable inside a function. Explain
through printed output how the automatic variable is reinitialized with each call while the static variable
is not.
*/

#include <stdio.h>

void compFunction() {
    int auto_Var = 0;          //automatic variable: (normal local variable)
    static int static_Var = 0; //static variable: (retains value between calls)

    auto_Var++;
    static_Var++;

}

int main() {
    //calling the function multiple times

    printf("First call:\n");
    compFunction();

    printf("Second call:\n");
    compFunction();

    printf("Third call:\n");
    compFunction();

    return 0;
}

/*
Output:-
First call:
autoVar = 1, staticVar = 1
Second call:
autoVar = 1, staticVar = 2
Third call:
autoVar = 1, staticVar = 3

As autovar starts fresh at 0 in each call, so it prints 1 every time.
But staticVar remembers its old value and keeps increasing across calls.
*/

/*
Notes:
>autoVar : It is a normal local variable. It is reinitialized to 0 every time compareVariables() is called.
>staticVar : It is a static local variable. It is initialized only once, and it retains its value between
 function calls.
>Automatic variables are recreated every time the function is called. Static variables are created once and
 persist between function calls.
*/