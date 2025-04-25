/*
We will allocate enough memory for an int, and then store something there, and then print it.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){


// Allocate space for a single int (sizeof(int) bytes-worth):
int *p = malloc(sizeof(int));   // int *p = malloc(sizeof *p); // *p is an int, so same as sizeof(int)

*p = 12; // Store something there

printf("%d\n", *p); // Print it: 12

free(p); // All done with that memory


//*p = 3490; // ERROR: undefined behavior! Use after free()!
}

//Note:It’s undefined behavior to use a memory region after we free() it.