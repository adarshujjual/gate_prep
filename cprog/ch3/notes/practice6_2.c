/*Write a C program that prompts the user to enter a positive integer n. Using a for loop, calculate and print 
the sum of the squares of all integers from 1 to n (i.e., 1² + 2² + 3² + ... + n²).*/

#include <stdio.h>
int main(){

    int n;
    int sum=0;

    printf("Enter a positive integer:\n");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        sum+=i*i;
    }
    printf("Sum of squares from 1 to %d is %d.\n",n,sum);

    return 0;
}