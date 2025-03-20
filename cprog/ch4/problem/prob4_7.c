/*
Function Prototypes in Action
Create a program where you declare the prototype of a function (e.g., void printMessage(void);) before main(),
call it in main(), and then define it later in the file. Comment on why prototypes are useful.
*/

#include <stdio.h>
//function prototype
int addNum(int a,int b);
int main(void){
    int num1,num2;
    int result;
    printf("Enter the two numbers:\n");
    scanf("%d %d",&num1,&num2);
    result = addNum(num1,num2); //function call
    printf("The sum of %d and %d is %d.",num1,num2,result); //print output
}

//function definition
int addNum(int a ,int b){
    return a + b;
}

//Function Prototypes: in c as compiler reads from top to bottom,so if we call the function before defining it we
//will get an error.The function prototype thus solves this problem by telling the compiler about the function
//before its used.Prototypes are useful as they prevent errors,allow flexible code order,improves code readability. 