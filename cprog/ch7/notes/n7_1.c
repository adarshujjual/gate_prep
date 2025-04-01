//String Variables as Arrays:
#include <stdio.h>
 int main(void)
 {
    // cannot mutate that string when initializing using pointers as the output is undefined
    char *s = "Hello, world!"; // The string variable 's' is actually a pointer to the first character in that string, namely the [H].
    printf("%s\n", s); // "Hello, world!"
    
    char a[] = "Hello, world!"; //or  char a[14] = "Hello, world!";
    for (int i = 0; i < 13; i++)
    printf("%c", a[i]);      //we’re using the format specifier %c to print a single character
    printf("\n");

    // can mutate that string if initialized using an array
    char t[] = "Hello, again!"; // t is an array copy of the string
    t[0] = 'z'; // changing the first element 
    printf("%s\n", t); // "zello, again!"

    char *p = "Hello, world!"; // char* here
    for (int i = 0; i < 13; i++) // we can but still use arrays
    printf("%c", p[i]);
 }

//Note:
//When initialized using pointer use %c.
//When initialized using arrays use %s.