/*
Modular Program Design
Write a program that splits tasks into three functions: one for input (reading a number), 
one for processing (computing a mathematical operation such as squaring the number),
 and one for output (printing the result). Explain the benefits of modular design in comments.
*/

#include <stdio.h>
//input function definition
int inpNum(int n){
    scanf("%d",&n);//take input value
    return n;
}
//computational(processing) function definition
int mOp(int m){
    return m * m; //squaring the number
}
//output function definition
int outPrint(int r){
    return (printf("The output after squaring is:%d.\n",r)); //print the result
}

int main(void){
    int num;
    int inputNum;
    int result;

    printf("Enter your number:\n"); //statement
    num = inpNum(inputNum);         //call input function to take input data 

    result = mOp(num);              //call computing function to find square of the number

    outPrint(result);               //call output function to print result
}

//Modular design refers to breaking a system into smaller, independent parts (modules) that work together.
//Modular design makes software development more efficient, scalable, and maintainable. 
//It improves collaboration, testing, and flexibility while reducing costs and complexity. 