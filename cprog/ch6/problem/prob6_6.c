/*
Initializer List Example
Declare and initialize an array using an initializer list (e.g., int arr[] = {1, 2, 3, 4, 5};).
Write a program to print these values and discuss the benefits of using initializer lists.
*/

#include<stdio.h>

int main(void){
    int x[]={2,4,5,6,8};    //initializing an array x using initializer list
    int len = sizeof(x)/sizeof(x[0]); //finding the size of the array

    for(int i = 0 ; i < len;i++){
        printf("%2d",x[i]); //printing the elements of the array
    }

    return 0;
}




/*
Note:Benefits of using initializer lists
>Using an initializer list in C simplifies array initialization by assigning values in a single line,
 eliminating manual assignments. 
>The compiler automatically determines the array size, reducing errors. 
>It enhances readability, maintainability, and prevents uninitialized values, avoiding garbage data. 
>Since initialization occurs at compile-time, it improves performance by reducing runtime assignments,
 making code more efficient and error-free.
*/