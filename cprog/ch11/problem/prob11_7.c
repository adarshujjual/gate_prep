/*
Subtracting Pointers
Develop a program that initializes two pointers at different positions in an array and subtracts them to
determine the number of intervening elements. Include comments explaining the pointer subtraction operation.
*/

#include <stdio.h>

int main(){
    //array initialization
    int a[5] = {1,2,3,4,5};
    //pointer p1 points to the zeroth index of the array(To the first element)
    int *p1 = &a[0];
    //pointer p2 points to the 4th index of the array (last element)
    int *p2 = &a[4];
    //calculating the number of elements in between
    int res_Dif = (p2 - p1) - 1;
    //printing the output
    printf("The number of intervening elements:%d\n",res_Dif);

    return 0;
}











