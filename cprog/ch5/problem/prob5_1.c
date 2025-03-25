/*
Basic Pointer Usage
Write a program that declares an integer variable and a pointer to that variable. Print the variable’s value, 
its address, and the value obtained by dereferencing the pointer.
*/
#include <stdio.h>

int main(void){
    int num; //initializing a variable of int type
    int *p;  //declaring pointer 'p' that points to an int 
    p = &num;//assigning the address of num to the pointer p ; now pointer p points to num
    
    printf("Enter the number to be stored in variable num:\n");//statement
    scanf("%d",&num);//store input in num variable

    printf("The value stored in the variable num:%d\n",num);//print value stored by num variable
    printf("The address where the variable num is at inside the memory:%p\n",p);//address where num is located in memory that the pointer holds

    *p = 7;//dereferencing the pointer to assign a new value ;
    printf("The value after dereferencing is:%d\n",*p);//printing the value after modifying it using pointer dereferencing
    printf("The value the variable num stores after dereferencing is:%d\n",num);//just verifying by directly printing num

}

/*
Output:
Enter the number to be stored in variable num:
5
The value stored in the variable num:5
The address where the variable num is at inside the memory:0061FF18
The value after dereferencing is:7
The value the variable num stores after dereferencing is:7
*/