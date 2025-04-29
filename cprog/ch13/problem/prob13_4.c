/*
Function Scope Illustration
Write a program that declares variables both inside and outside a function. Demonstrate that variables declared
inside the function are not accessible outside, reinforcing function scope rules.
*/

#include <stdio.h>

//global variable
int global_value = 101;

void localFunction(){
    
    int local_value = 51; //local variable with the same name

    printf("Inside the function(the local value): %d\n",local_value);
}

int main(){
    //printing the global variable of same name as local variable
    printf("Global value before function call:%d\n",global_value);

    //function call,prints the local variable declared inside the function
    localFunction();

    //printing the same named globally declared variable after the function call
    printf("Global value after function call:%d\n",global_value);

    //trying to access local variable in main outside of it's scope
    //printf("local_value = %d\n", local_value); //ERROR: 'local_value' is not declared in this scope

    return 0;
}