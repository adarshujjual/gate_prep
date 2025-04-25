/*
Resizing an Array with realloc()
Create a program that initially allocates memory for an array, fills it with values, then uses realloc() to 
increase the size of the array. Print the array contents before and after resizing.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int newsize = 10;

    //allocating memory using malloc
    int *a = (int *)malloc(size * sizeof(int));
    if(a == NULL){
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    //initializing array with initial values
    for(int i = 0; i < size; i++){
        a[i] = (i + 1);
    }

    //printing array before resizing
    printf("Array before realloc:\n");
    for(int i = 0; i < size; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }

    //resize the array using realloc
    int *new_a = (int *)realloc(a, newsize * sizeof(int));
    if(new_a == NULL){
        printf("Memory reallocation failed!\n");
        free(a); // free original block before exiting
        return 1;
    }

    //directly reassigning the initial pointer
    a = new_a;

    //filling the new elements with values
    for(int i = size; i < newsize; i++){
        a[i] = (i + 1); 
    }

    //printing the  array after resizing
    printf("\nArray after realloc:\n");
    for(int i = 0; i < newsize; i++){
        printf("a[%d] = %d\n",i,a[i]);
    }

    //free the memory
    free(a);

    return 0;
}
