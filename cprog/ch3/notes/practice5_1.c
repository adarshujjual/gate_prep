/*Problem: Write a C program using a while loop to print all even numbers from 2 up to a user-specified
 positive integer n. If the user enters a number less than 2, print an error message and exit.*/

#include <stdio.h>
int main(){

    int counter = 2; // initialize a counter
    int num;
 
    printf("Enter your number:");
    scanf("%d",&num);

    if(num<2){
        printf("Error: Please enter a number greater than or equal to 2.\n");
    }else{
        while(counter<=num) {  //condition to run the loop
            printf("%d ",counter); //Print the current even number
            counter +=2; //increment the counter by 2 to get the next even number
        }
    }
return 0;
}



