/*
Function Prototype and Scope
Write a program that declares a function prototype at the top, defines the function below main(), and calls it
from main(). Explain how the prototype affects the scope and usage of the function.
*/

#include <stdio.h>

void helloFun();//function prototype

int main(){

    //function call
    helloFun();

    return 0;
}

//function definition
void helloFun(){

    printf("Hell-o W-or-ld !!\n");
}


/*
Notes:
The function definition is placed after main(), but because of the prototype at the top, the compiler knows
the function exists and how to call it before it actually sees the function body.

Function prototypes provide essential type and signature information to the compiler, even before the function
is fully defined.

Scope of the function is global, meaning it can be called anywhere in the file after it is declared
(even before its definition, thanks to the prototype).

Thus a function prototype is a declaration that provides the compiler with necessary information about the
function's signature, ensuring the function can be called before its definition
*/