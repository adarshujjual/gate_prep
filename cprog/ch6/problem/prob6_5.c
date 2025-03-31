/*
Array Sum via Function
Create a function that takes an array and its size as arguments, computes the sum of its elements,
and returns the sum. Call this function from main() and display the result.
*/

#include <stdio.h>
//function definition
int sumArray(int a[] , int len){
    int sum = 0;
    for(int i = 0; i< len; i++){
        sum += a[i];    //keep adding all the elements to sum 
    }
    return sum;
}

int main(void){
    int rlt;
    int x[5] = {4,5,3,5,3}; //initialize an array x of length 5 with values
    rlt = sumArray(x,5);    //function call
    printf("The sum of the elements of the array is: %d\n",rlt);//print output
}



//note: int size = sizeof(array) / sizeof(array[0]);  //to calculate size of array