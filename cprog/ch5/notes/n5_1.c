#include <stdio.h>
int main(void)
{
int j = 10;

printf("The value of j is %d\n", j); //prints 10

// %p prints a pointer
printf("And its address is %p\n", (void *)&j); //prints 0061FF18

//  sizeof operator to determine how many bytes of memory a certain type uses :

 // %zu is the format specifier for type size_t
 printf("an int uses %zu bytes of memory\n", sizeof(int)); //4 bytes

 //Can identify the pointer type because there’s an asterisk (*) before the variable name and after its type:
 //pointer declaration:
 int i; // i's type is "int"
 int *p; // p's type is "pointer to an int", or "int-pointer" but it is uninitialized and points to garbage
 p = &i; // p is assigned the address of i and p now "points to" i


 //dereferencing : let's us access the value at that address
 i = 10; // i is now 10
 *p = 20; // the thing p points to (that is 'i') is now 20.
 printf("i is %d\n", i); // prints "20"
 printf("i is %d\n", *p); // "again prints the same i.e 20", thus dereference-p is the same as i!

}
//notes: A pointer stores the address of a variable in the memory by pointing at it.[Pointer is not a variable
// itself rather a way to find them.]




 

