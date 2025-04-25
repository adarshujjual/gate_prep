/*
Allocating Space for an Array


note: Using calloc()
We can use calloc() to allocate space for an array:::Instead of a single argument, we pass the size of one
element, and the number of elements we wish to allocate.It’s like it’s made for allocating arrays.
>It clears the memory to zero.

note: Using malloc()
We can just multiply the size of the thing we want by the number of elements we want, and then access
them using either pointer or array notation.
>Also the alloted memory has garbage values so we can use "memset()" to clear it. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
// Allocate space for 10 ints using malloc(), initialized to 0:
//int *p = malloc(sizeof(int) * 10); //multiplying the size with the number of items

// Allocate space for 10 ints with malloc(), initialized to 0:
int *q = malloc(10 * sizeof(int));
memset(q, 0, 10 * sizeof(int)); // set to 0 //use #include<string.h>
// Assign them values 0-45:
for (int i = 0; i < 10; i++)
q[i] = i * 5;

// Print all values 0, 5, 10, 15, ..., 40, 45
for (int i = 0; i < 10; i++)
printf("%d\n", q[i]);
// Free the space
free(q);




//allocating space using calloc
// Allocate space for 10 ints with calloc(), initialized to 0:
int *p = calloc(10, sizeof(int));

for (int i = 0; i < 10; i++)
p[i] = i * 5;

// Print all values 0, 5, 10, 15, ..., 40, 45
for (int i = 0; i < 10; i++)
printf("%d\n", p[i]);
// Free the space
free(p);

return 0;


}