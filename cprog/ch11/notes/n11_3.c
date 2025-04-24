// Array/Pointer Equivalence
//printing the array elements in various ways
#include <stdio.h>

    int main(void){

    int a[] = {11, 22, 33, 44, 55}; //note: the array can be a*

    int *p = a; // p points to the first element of a, 11

    // Print all elements of the array a variety of ways:
    for (int i = 0; i < 5; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 5; i++){
        printf("%d\t", p[i]);
    }
    printf("\n");

    // Array notation with a
    // Array notation with p
    for (int i = 0; i < 5; i++){
        printf("%d\t", *(a + i)); // Pointer notation with a
    }
    printf("\n");

    for (int i = 0; i < 5; i++){
        printf("%d\t", *(p + i)); // Pointer notation with p
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    printf("%d\t", *(p++)); //moving the pointer //Note:cannot move the array variable
   
    }

/*
Notes:
 We can see that in general, if we have an array variable, we can use pointer or array notion to access
 elements. Same with a pointer variable.
 The one big difference is that we can modify a pointer to point to a different address, but can’t do that
 with an array variable.
*/
