/*
Pointer Dereferencing in Arithmetic
Write a program that uses pointers to perform arithmetic operations. For example, assign two variables,
use pointers to add heir values, and print the result of the arithmetic performed through dereferencing..
*/

#include <stdio.h>
//function definition 
int funAdd(int *num1 , int *num2){ //takes two pointers as input
    int sum = (*num1) + (*num2); //dereferencing to get the values stored in the variable
    return sum; //returns int
}

int main(void){
    int n1,n2,res;
    int *p1,*p2;//declaring two pointers p1 and p2
    p1 = &n1;   //adding address of n1 to pointer p1
    p2 = &n2;   //adding address of n2 to pointer p2

    //taking the input 
    printf("Enter the two numbers:\n");
    scanf("%d %d",&n1,&n2);
    //function call
    res = funAdd(p1,p2);    //input is two pointers pointing to the two variables
    //printing the output
    printf("The sum of the two numbers is:%d\n",res);
}