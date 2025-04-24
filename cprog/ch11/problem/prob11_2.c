/*
Pointer Difference Calculation
Create a program that declares an array and two pointers pointing to different elements. Calculate and print
the difference between the pointers (i.e., the number of elements between them).
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
    printf("The number of elements btw the first and last element:%d\n",res_Dif);

    return 0;
}

/*Note:
The pointer subtraction in C gives the difference in indices, not the count of elements strictly between the two
positions.
So in the problem above we are getting a[4] - a[0] = 4 - 0 = 4 as output
*/