/*
Array Type with typedef
Use typedef to define a new type for an array of 5 integers. Declare a variable of this new type, initialize it,
and print its elements.
*/

#include <stdio.h>

typedef int array5[5];//using typedef to define  new type for array

int main(void){
    
    array5 ele = {1,2,3,4,5};//initializing an array of size 5 with the elements

    printf("The elements of the array are:\n");//statement
    //printing the output
    for(int i = 0; i < 5;i++){
        printf("%d\n",ele[i]);
    }

    return 0;
}