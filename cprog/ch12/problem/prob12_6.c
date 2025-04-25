/*
Memory Leak Demonstration and Correction
Write a program that intentionally leaks memory by allocating memory without freeing it. Then, modify the 
program to properly free the allocated memory. Comment on the importance of freeing memory.
*/

#include <stdio.h>
#include <stdlib.h>

int* allocate_correct(){
    int size;
      //allocating memory using malloc
    int *a = (int *)malloc(size * sizeof(int)); 
    if(a == NULL){
        printf("Initial memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }  
    return a;
}

void allocate_incorrect(){
    int size;
     //allocating memory using malloc
     int *p = (int *)malloc(size * sizeof(int)); 
     if(p == NULL){
         printf("Initial memory allocation failed!\n");
         exit(EXIT_FAILURE);
     }  
}


int main() {

    int size = 5;

    //demonstrating the correct program 
    int *a = allocate_correct(size);

    if(a != NULL){
        for(int i = 0; i < size; i++){
            a[i] = i + 1;
            printf("a[%d] = %d\n", i, a[i]);
        }
        free(a);
    }

    //demonstrating the leak function
    allocate_incorrect(size);

    return 0;
}

/*
Note:
The memory leak is caused as we cannot de refer the pointer outside the function.
*/