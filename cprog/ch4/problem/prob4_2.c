/*
Maximum of Two Numbers
Implement a function int max(int a, int b) that returns the larger of two numbers. In main(), prompt the user 
for two numbers, call the function, and print the maximum.
*/

#include <stdio.h>
//function definition:
//function returns int and takes two parameters of int type
int max(int a,int b){           
    if(a>b){
        return a;
    }else
        return b;
}

int main(void){
    int lrg_num,num1,num2;

    printf("Enter the first and the second number:\n"); //statement
    scanf("%d %d",&num1,&num2); //input stored in variables num1 and num2
    //function call
    lrg_num = max(num1,num2); //modify locally to return 

    printf("The larger of the two numbers %d and %d is %d.\n",num1,num2,lrg_num);//print output
}