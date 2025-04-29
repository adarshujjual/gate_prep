/*
Static Variable Persistence
Write a function that increments a static variable every time it is called. In your main program, call the
function several times and print the static variable’s value each time to demonstrate its persistence.
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