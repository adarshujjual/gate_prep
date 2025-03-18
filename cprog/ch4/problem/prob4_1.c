/*
Factorial Calculation Function
Write a function int factorial(int n) that calculates the factorial of a number recursively. Call this function
from main() and display the result for a user-supplied input.
*/

#include <stdio.h>
//function definition
int factorial(int n){
    int sum = 1; //remember as we are multiplying by sum's initial value dont initialize sum by 0 in the beginning
    for(int i = 0;i < n; i++){
        sum *= n-i; //sum = sum * (n-i)
    }

    return sum; //function returns an integer 
}

int main(void){
    int number,j;
    printf("Enter the number for which factorial is to be calculated:\n");// statement
    scanf("%d",&number); //store the input into number variable
    //call function
    j = factorial(number);//locally modified the value in order to return it

    printf("The factorial of %d is %d.\n",number,j);//print out output via variable j that stores the copy of modified input parameter
}