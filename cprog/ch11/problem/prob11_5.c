/*
Multidimensional Array Navigation
Declare a two-dimensional array and use pointer arithmetic to access and print its elements.
Explain how pointer arithmetic differs (or is similar) for multidimensional arrays.
*/

#include <stdio.h>

int main(){
    //initializing a 2D-array along with its elements
    int a[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    //pointer to the array
    int *p = &a[0][0];  //points to the first element of the array

    //printing the array using pointer arithmetic
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 3;j++){
            printf("a[%d][%d] = %d\n",i,j,*p);
            p++;
        }
    }

    return 0;
}

/*
Output:
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 4
a[1][1] = 5
a[1][2] = 6
*/

/*
Notes:
Similarities

Pointer arithmetic for one-dimensional and multidimensional arrays in C is fundamentally similar because both 
rely on contiguous memory storage and type-based address calculations. In both cases, the array name decays to
a pointer to the first element (int * for a one-dimensional array, int (*)[n] for a 2D array), and incrementing
a pointer moves it by the size of the pointed-to type (e.g., sizeof(int) for int *, or n * sizeof(int) for
int (*)[n]). Subtracting two pointers of the same type yields the number of elements between them, and both
allow sequential access to elements via pointer arithmetic, making them efficient for traversing contiguous
memory.

Differences

The primary difference in pointer arithmetic between one-dimensional and multidimensional arrays lies in the
pointer types and step sizes. For a one-dimensional array, the pointer type is simply int *, and arithmetic 
moves in steps of sizeof(int). In contrast, for a multidimensional array like int arr[m][n], the array name is
a pointer to an array (int (*)[n]), with a step size of n * sizeof(int) for row-level arithmetic, while 
element-level access uses int * with a step size of sizeof(int). Additionally, multidimensional arrays require
understanding row-major order and managing row boundaries, making pointer arithmetic more complex compared to
the straightforward linear access in one-dimensional arrays.
*/