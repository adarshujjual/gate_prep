/*
Create a program that swaps the values of two integer variables using a temporary variable. 
Explain step-by-step how the swapping is achieved.
*/

#include <stdio.h>
int main(){

    int a,b; //initialize variable to store the input of integer type
    int swap=0; //initialize a swap variable of integer type
    printf("Enter the value of First number:\n"); //enter first number
    scanf("%d",&a);
    printf("Enter the value of Second number:\n");//enter second number
    scanf("%d",&b);
        //statement before swapping
    printf("BEFORE SWAP: A=%d and B=%d.\n",a,b);
        //swapping steps:
    swap=a; //transfer value of a into swap and store it
    a=b;    //  now b's value is transferred on to "a"
    b=swap; // finally transfer and store a's value stored in swap into b 
         
        //statement after swapping
    printf("AFTER SWAP: A=%d and B=%d.\n",a,b);

    return 0;

}