/*
Modifying Variables via Function Pointers
Write a function that takes a pointer to an integer and modifies its value (e.g., multiplies it by 2).
Call this function from main() and print the value before and after the function call.
*/

#include <stdio.h>

int funAdd(int *num){
    return *num = (*num) * 2;
}

int main(void){
    int n;         //initializing a variable n of type int
    int *i;     //declaring pointer i
    i = &n;     //assigning address of n to pointer i, thus pointer points to n;

    //Taking input:
    printf("Enter the input Number:\n");    //statement
    scanf("%d",&n);                         //store input in 'n'
    //Printing value stored in variable before function call
    printf("value before function call:%d",n);
    //function call
    funAdd(i);//funAdd(&n);
    //Printing value stored in variable 'n' after function call
    printf("Value after the function call:%d\n",n);

}