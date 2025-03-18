/*
Fibonacci Series with Recursion
Create a recursive function to calculate Fibonacci numbers. Your program should ask for an integer n and then 
print the first n numbers of the Fibonacci sequence.
*/


#include <stdio.h>
//function definition
int fib(int n){
    if(n==1 || n==0){  //for case n=0 0r n=1 return n
        return n;
    }else{              //else return using formula (f[n-1]+f[n-2])
        return (fib(n-1)+fib(n-2));   //note: using fib function twice then taking sum of the two to find out fibonacci value for the given value of n
    }
}

int main(void){
    int num;
    printf("Enter your number:\n");     //statement
    scanf("%d",&num);                   //store the input number 

    for(int i = 0; i <= num ; i++ ){    //run for loop to find the sequence if numbers in the fibonacci series
        printf("%d",fib(i));
    }
}