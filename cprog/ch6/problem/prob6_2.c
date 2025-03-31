/*
Average of Array Elements
Write a program that calculates and prints the average of the numbers stored in an array.
Ensure you sum the elements using a loop and cast the result for a floating-point average.
*/

#include <stdio.h>

float calAvg(int a[],int len){
    int sum = 0 ;
    float avg;
    for(int i = 0; i < len;i++){    //a[i] is the current element of the array in the loop
        sum += a[i];                //Add each element to sum
    }
    avg = sum / len;
return avg;
}

int main(void){
    int x[7]={1,2,3,4,5,6,7};       //initialize an array x of length 7 along with its elements
    float res;
    res = calAvg(x,7);              //function call
    printf("The avg of the numbers stored in the array = %f",res);//print output
}