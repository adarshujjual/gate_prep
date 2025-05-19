//Write a recursive C function to reverse an integer.

#include <stdio.h>

//helper function definition
int reverseHelper(int num,int rev){         //rev = 0
    if(num == 0){
        return rev;
    }
    int lastDigit = num % 10;           //extract last digit by modulo i.e the remainder will give the last digit
    rev = rev * 10 + lastDigit;         //reduce the number by removing the last digit by taking the quotient upon division by 10
    return reverseHelper(num / 10,rev);
}

//checks for edge case and is the main function
int reverse(int num){
    if (num < 0){       //if input is negative number
        return -reverseHelper(-num,0);
    }
    return reverseHelper(num,0);   //any unsigned number
}

int main(){

    int num;
    //take input
    printf("Enter an integer: ");
    scanf("%d",&num);

    int result = reverse(num);  //function call
    printf("The reversed integer is: %d\n",result);

    return 0;
}

/*
Notes:
Recursive Approach
To reverse an integer recursively:

Base case: If the number is less than 10 (i.e., a single digit), return the number itself.

Recursive case:
Extract the last digit (using modulo % 10).
Extract the remaining digits (using integer division / 10).
Recursively reverse the remaining digits.
Combine the last digit with the reversed remaining digits by shifting it to the correct position.
*/

