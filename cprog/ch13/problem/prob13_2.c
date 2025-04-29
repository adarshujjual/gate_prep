/*
Local vs. Global Variables
Create a program with a global variable and a local variable (with the same name) inside a function. 
Print both values to demonstrate how local variables hide global ones in their scope.
*/

#include <stdio.h>

//global variable
int value = 101;

void localFunction(){
    
    int value = 51; //local variable with the same name

    printf("Inside the function(the local value): %d\n",value);
}

int main(){
    //printing the global variable of same name as local variable
    printf("Global value before function call:%d\n",value);

    //function call,prints the local variable declared inside the function
    localFunction();

    //printing the same named globally declared variable after the function call
    printf("Global value after function call:%d\n",value);

    return 0;
}
