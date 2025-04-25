/*
Zero-Initialization with calloc()
Develop a program that allocates an array using calloc(), ensuring that all elements are initialized to zero.
Print the array to verify the initialization and then deallocate the memory.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{

//allocating space using calloc
//Allocate space for 10 ints with calloc(), initialized to 0:
int *p = calloc(10, sizeof(int));

//assigning values to array
for (int i = 0; i < 10; i++)
p[i] = i + 1;

//Printing all values 
for (int i = 0; i < 10; i++)
printf("%d\n", p[i]);
//free the memory
free(p);

return 0;

}

