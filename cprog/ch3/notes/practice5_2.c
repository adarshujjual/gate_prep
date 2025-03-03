/*Problem: Write a C program using a do-while loop to repeatedly ask the user for a positive integer until they 
         enter a valid input (greater than 0). Once a valid number is entered, calculate and print the sum of 
         all integers from 1 to that number.*/


#include <stdio.h>
int main(){

    int num;
    int sum=0;


    do{
        printf("Enter a positive number:\n"); // Prompt user to enter a number
        scanf("%d",&num);                     // Read integer input from user and store it in num 

        if(num<=0){                             // Check if input is less than or equal to 0 (not positive)
            printf("Invalid input. Try again.\n"); // Print error message if input is invalid
        }else{
            sum=(num*(num+1))/2;                //If input is positive (> 0), proceed to calculate sum
        }
        
    }while(num<=0);                             // Continue looping if num <= 0; exit when num > 0

    printf("The sum of numbers from 1 to %d is %d.\n",num,sum); // Print final result with num and sum

    return 0;

}