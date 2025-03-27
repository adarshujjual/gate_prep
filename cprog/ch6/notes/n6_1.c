//Array Initialization
#include <stdio.h>
#define COUNT 5 //defining a constant count = 5
 int main(void)
 {
 int i;
 int a[5] = {22, 37, 3490, 18, 95}; // Initialize with these values
 for (i = 0; i < 5; i++) {
 printf("%d\n", a[i]);
 }

 //can have fewer items in the initializer than there is room for in the array.
 //The remaining elements in the array will be automatically initialized with zero.
 //int b[5] = {22, 37, 3490}; 
 // is the same as:
 //int b[5] = {22, 37, 3490, 0, 0};

 //can set specific array elements in the initializer, as well, by specifying an index for the value
 // Because we listed index 5 as the start for 55, 
 int c[10] = {0, 11, 22, [5]=55, 66, 77}; //the resulting data in the array is:0 11 22 0 0 55 66 77 0 0

 //  can put simple constant expressions also(#define COUNT 5),
 int d[COUNT] = {[COUNT-3]=3, 2, 1};//here which gives us:0 0 3 2 1

 //can also compute the size of the array from the initializer, just by leaving the size off:
 //int e[3] = {22, 37, 3490};
 // is the same as: 
 //int e[] = {22, 37, 3490}; // Left the size off!

 //Multidimensional Arrays:
 //For a 2D array, the first index listed indicates the row, and the second the column.
 int row, col;
 int f[2][5] = {  
 {0, 1, 2, 3, 4},
 {5, 6, 7, 8, 9}
 };
 
 // Initialize a 2D array
 for (row = 0; row < 2; row++) {
 for (col = 0; col < 5; col++) {
 printf("(%d,%d) = %d\n", row, col, f[row][col]);
 }
 }

 // can initialize with explicit indexes:
 // Make a 3x3 identity matrix
 int g[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};

 for(int k=0;k<3;k++){
    for(int l=0;l<3;l++){
        printf("%d",g[k][l]);
    }
    printf("\n");
 }

 }