/*
Develop a program that prompts the user to enter two numbers and then calculates and prints their sum.
Include error checking to ensure numeric input is provided.

*/
#include <stdio.h>

int main() {
    int num1; //variable num1 is declared to store the first number
    int num2; ////variable num2 is declared to store the second number
    
    printf("Enter two numbers:  ");  //statement
    int result = scanf("%d %d", &num1, &num2); //store the two numbers
    //while the input is not two valid integers we continue asking for valid inputs
    while(result != 2) { 
        // Clear the input buffer by consuming any extra characters until a newline is encountered
        //getchar() reads one character at a time from the input buffer
        //The while(getchar() != '\n'); loop discards characters until it reaches the newline ('\n'), clearing the input buffer.
        while(getchar() != '\n');
        
        printf("Error, please enter two valid numbers:  "); //error message
        result = scanf("%d %d", &num1, &num2); //read the two integers again
    }
    
    printf("\nSum is: %d\n", (num1+num2)); //once valid input is received(condition is met),sum of the two numbers is computed and printed
    
    return 0;
}

