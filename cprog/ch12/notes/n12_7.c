/*
There might be times that you know that some data can be aligned at a smaller boundary,or must be aligned
 at a larger one for some reason. I imagine this is more common with embedded systems programming.

In those cases, you can specify an alignment with aligned_alloc().

The alignment is an integer power of two greater than zero, so 2, 4, 8, aligned_alloc() before the number of
bytes you’re interested in.

The other restriction is that the number of bytes you allocate needs to be a multiple of the alignment.


*/

// allocating on a 64-byte boundary:

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 int main(void)
 {
 // Allocate 256 bytes aligned on a 64-byte boundary
 char *p = aligned_alloc(64, 256); // 256 == 64 * 4
 // Copy a string in there and print it
 strcpy(p, "Hello, world!");
 printf("%s\n", p);

  // Free the space
  free(p);
 

 /*
 Note:
> realloc() doesn’t have any align ment guarantees, so if you need to get some aligned reallocated space, you’ll
  have to do it the hard way with memcpy() .
 */

 //A non-standard aligned_realloc() function :
 void *aligned_realloc(void *ptr, size_t old_size, size_t alignment, size_t size)
 {
 char *new_ptr = aligned_alloc(alignment, size);
 if (new_ptr == NULL)
 return NULL;
 size_t copy_size = old_size < size? old_size: size; // get min
 if (ptr != NULL)
 memcpy(new_ptr, ptr, copy_size);
 free(ptr);
 return new_ptr;
 }
}
 //Note:  Avoid needing to reallocate custom-aligned data.