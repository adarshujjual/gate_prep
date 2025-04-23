/*
Local typedef Scope
Write a program that defines a typedef inside a function. Demonstrate that this typedef is not visible outside 
that function by attempting (and commenting out) an external use.
*/

#include <stdio.h>

void local_fun() {
    typedef int newint;  // Typedef defined inside the function (local scope)
    newint x = 786; //declaring variable 
    printf("Inside the function: x = %d\n",x);
}


void local_fun2() {
    //newint x = 687;  // newint is not declared in this scope
   // printf("Outside function: x = %d\n",x);
}


int main() {
    //function call
    local_fun(); 
    local_fun2();
    return 0;
}

//Note: Commenting out as it throws error of undefined.
