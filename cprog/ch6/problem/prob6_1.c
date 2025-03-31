/*
Array Declaration and Printing:
Declare an array of 10 integers and initialize it with values. Use a loop to print each element on a separate
line.
*/

#include <stdio.h>

int main(void){
    int a[10] = {1,2,3,4,5,6,7,8,9,10}; //initialize an array 'a' of length [10]
        for(int i = 0; i < 10 ;i++){    //loop prints each elements of the array in a new line
            printf("%d\n",a[i]);
    }
return 0;
}