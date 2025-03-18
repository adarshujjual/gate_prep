/*
Prime Number Checker
Write a function int isPrime(int n) that checks if a given number is prime. Use this function in your main 
program to test a user-entered number, printing whether it is prime or not.
*/

#include <stdio.h>
//function definition
int isPrime(int n){
    int j=0;                        //counter j
   
    for(int i = 1;i <= n; i++){     //initializing for-loop,with i less that equal to n
        if(n % i == 0){             //if n is divisible by any number increase the counter by 1
            j++;                    //increment counter
        }
    }

    return j;                       //function returns an integer value stored in counter j
}
    

int main(void){
    int number;
    int result;
    printf("Enter your number:\n"); //statement
    scanf("%d",&number);            //store input number
    
    result = isPrime(number);       //function call
    if(result < 3 && result > 1 ){  //prime number condition:number should be only divisible by itself and 1 [divisible by 2 numbers in total] and for corner case 1 [result>1]
        printf("It is a prime number!");
    }else{
            printf("It is not a prime number!");
        }
    }
