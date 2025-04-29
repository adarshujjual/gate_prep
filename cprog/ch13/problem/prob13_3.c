/*
Static Variable and File Scope
Develop a program that uses a static variable within a function to keep track of how many times the function 
is called. Print the count on each call to demonstrate that the variable retains its value between calls.
*/

#include <stdio.h>

void counting_Calls(){
    static int counter = 0; //static variable retains its value between function calls
    counter++;
    printf("Number of times the function is called: %d times.\n",counter);
}

int main() {
    // 1st call
    counting_Calls(); 
    // 2nd call
    counting_Calls(); 
    // 3rd call
    counting_Calls(); 

    return 0;
}

/*
A static variable is a special type of variable that:

Retains its value between function calls (it is not destroyed when the function exits).

Is initialized only once (even if the function is called multiple times).

Scope is limited to the block where it is declared (it behaves like a local variable but lives forever during 
the program's run).
*/