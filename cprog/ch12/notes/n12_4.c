/*
Changing Allocated Size with "realloc()" :
> It takes a pointer to some previously-allocted memory ( by malloc() or calloc() ) and a new size for the
memory region to be.
>It then grows or shrinks that memory, and returns a pointer to it. Sometimes it might return the same pointer
 (if the data didn’t have to be copied elsewhere), or it might return a different one (if the data did have to be
 copied).
>While calling realloc() specify the number of bytes to allocate, and not just the number of
 array elements!
Note:  We’re going to assign the return value of realloc() into another pointer just to make sure it’s not NULL.
*/

//allocate an array of 20 floats, and then change our mind and make it an array of 40

 #include <stdio.h>
 #include <stdlib.h>
 int main(void)
 {
 // Allocate space for 20 floats
 float *p = malloc(sizeof *p * 20); // sizeof *p same as sizeof(float)
 // Assign them fractional values 0.0-1.0:
 for (int i = 0; i < 20; i++)
 p[i] = i / 20.0;

 //Let's actually make this an array of 40 elements
 float *new_p = realloc(p, sizeof *p * 40);
 // Check to see if we successfully reallocated
 if (new_p == NULL) {
 printf("Error reallocing\n");
 return 1;
 }
 
 //we can just reassign p
 p = new_p;

  // And assign the new elements values in the range 1.0-2.0
  for (int i = 20; i < 40; i++)
  p[i] = 1.0 + (i- 20) / 20.0;
  // Print all values 0.0-2.0 in the 40 elements:
  for (int i = 0; i < 40; i++)
  printf("%f\n", p[i]);
  // Free the space
  free(p);

  return 0;
}
