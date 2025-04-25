/*
Memory Allocation Error Checking
Develop a program that attempts to allocate memory using malloc() and checks if the allocation was successful.
If not, print an error message; otherwise, proceed to use the allocated memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = -1;

    //allocating memory using malloc
    int *a = (int *)malloc(size * sizeof(int)); //as memory allocation cannot be negative
    if(a == NULL){
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    //initializing array with initial values
    for(int i = 0; i < size; i++){
        a[i] = (i + 1);
    }

     //printing array before resizing
     printf("Array elements:\n");
     for(int i = 0; i < size; i++){
         printf("a[%d] = %d\n",i,a[i]);
     }
     
     //free memory
     free(a);

     return 0;

}