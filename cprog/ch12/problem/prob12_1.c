/*
Dynamic Array Allocation
Write a program that uses malloc() to allocate memory for an array of integers. Initialize the array,
print its values, and then free the memory.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
// Allocate space for 10 ints using malloc(), initialized to 0:

// Allocate space for 10 ints with malloc(), initialized to 0:
int *q = malloc(10 * sizeof(int));
memset(q, 0, 10 * sizeof(int)); // set to 0 

// Assigning elements to array
for (int i = 0; i < 10; i++)
q[i] = i + 1;

// Print all elements
for (int i = 0; i < 10; i++)
printf("%d\n", q[i]);
// Free the memory
free(q);

return 0;

}



