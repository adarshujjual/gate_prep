/*
2D Array Allocation Dynamically
Create a program that dynamically allocates a two-dimensional array (an array of arrays) using malloc().
Fill the 2D array with values, print the matrix, and then free the allocated memory in the proper order.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int row = 3;
    int col = 4;

    //allocating memory for an array of int pointers (for each row)
    int **the_matrix = malloc(row * sizeof(int *));
    if (the_matrix == NULL) {
        printf("Memory allocation for rows failed!\n");
        return 1;
    }

    //allocating the memory for a row (1 row contains four column) at a time
    for(int i = 0; i < row; i++){

        the_matrix[i] =malloc(col * sizeof(int)); //memory allocation for column of 1 row
        
        if(the_matrix[i] == NULL){
            printf("Memory allocation for row %d failed!\n", i);
            //freeing the previously allocated rows before exiting
            for (int j = 0; j < i; j++){
                free(the_matrix[j]);    //preventing the memory leak by freeing the rows that were already filled
            }
            free(the_matrix);//freeing the previously allocated row
            return 1;
        }
    }

    //initializing the array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            the_matrix[i][j] = (i + 1) * 1 + j;  
        }
    }

    //printing the 2D-matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%3d",the_matrix[i][j]);
        }
        printf("\n");
    }

    //free the memory
    for(int i = 0; i < row; i++){
        free(the_matrix[i]);  //freeing each row
    }
    free(the_matrix);         //freeing the row pointer array

    return 0;
}

//Note : Not freeing earlier rows would result in a memory leak if any row fails to allocate.