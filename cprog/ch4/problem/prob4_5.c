/*
Number Reversal Function
Develop a function int reverseNumber(int n) that returns the reverse of an integer. For example, input 12345 
should return 54321. Display both the original and reversed numbers.
*/

#include <stdio.h>
//function definition
int reverseNumber(int n){
    int revNum=0;                           //variable revNum 
    int lstDig = 0;                         //variable lstDig
    
    while(n % 10 != 0){                     //while condition: run loop until atleast one digit is left 
        lstDig= n % 10 ;                    //last_digit of number = number % 10
        revNum = (revNum * 10 ) + lstDig;   //revnumber formula
        n=n/10;                             //remove the last digit after every iteration 
    }
    return revNum;
}

int main(void){
    int num,result;

    printf("Input your number:\n");         //statement
    scanf("%d",&num);                       //store input in num variable
    result=reverseNumber(num);              //function call
    printf("The reverse of %d is %d.\n",num,result); //print output
}