/*
Pass-by-Value Demonstration
Create a program that passes a variable to a function and attempts to modify it. Show that the original 
variable in main() remains unchanged (demonstrating pass-by-value). Explain the concept in your comments.
*/

#include <stdio.h>
//function definition
int increment(int a){
    a = a + 1;  // increase the a value by 1
    printf("Inside function:%d\n",a);  //inside the function the copy gets incremented by 1
}

int main(void){
    int i = 10;
  
    increment(i);  // calling function
    
    printf("Outside function:%d\n",i);  // outside the function original value remain unchanged 
    return 0;
}

//Passing by Value : when we give a function an input, c makes a copy of the value and gives it to function so 
//that even when the fun changes the input value,it changes the copy and not the original value. 