/*
Multidimensional Array Display
Declare a 3×3 two-dimensional array, initialize it with numbers, and write a function to print the array in
 a matrix format. Focus on nested loops and proper formatting.
*/

#include <stdio.h>
//function definition
int print2Darray(int a[3][3]){
    printf("3 X 3 two-dimensional array:\n"); //statement
    //initializing a 2D array:
    for(int i = 0; i < 3;i++){
        for(int j = 0;j < 3;j++){
            printf("%2d",a[i][j]); //%2d indicates spacing for printing 
        }
        printf("\n"); //new line after every row
    }
}
//main function
int main(void){
    int x[3][3] = {//initializing a 2D 3 X 3 matrix with value
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };

    print2Darray(x);//calling function to print a matrix

    return 0;
}

/*
Output:
3 X 3 two-dimensional array:
 9 8 7
 6 5 4
 3 2 1
*/
