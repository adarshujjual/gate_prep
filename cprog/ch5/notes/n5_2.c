//Passing Pointers as Arguments:
#include <stdio.h>
void increment(int *p) // function accepts a pointer to an int
{
*p = *p + 1; //go to the address and add 1
}
// add one to the thing p points to:
int main(void)
{
 int i = 10;
 int *j = &i; // note: the address-of; turns it into a pointer to i
 printf("i is %d\n", i);//prints '10'
 printf("i is also %d\n", *j); // prints "10" as it shows the content stored at the address it points to
 increment(j);// // j is an int*--to i and can also use: increment(&i);
 printf("i is %d\n", i);//the original value is incremented thus prints "11"!

 //sizeof operator:uses the %zu as format specifier
 int *p;
 // Prints size of an 'int'
 printf("%zu\n", sizeof(int));
 // p is type 'int *', so prints size of 'int*'
 printf("%zu\n", sizeof p);
 // *p is type 'int', so prints size of 'int'
 printf("%zu\n", sizeof *p);
 
}

/* note:
    Any pointer variable of any pointer type can be set to a special value called NULL.which indicates that the
    pointer does not point to anything.
    int *p;
    p = NULL;

    Declaring Pointers:
    int a;
    int *p;
    can be written as :
    int a, *p;

*/

