
    //the built-in memcpy() function:
    void *memcpy(void *s1, void *s2, size_t n);

    //This function copies n bytes of memory starting from s2 into the memory starting at address s1


//using memcpy() to copy a string

#include <stdio.h>
#include <string.h>

int main(void){

    char s[] = "Goats!"; //array s 
    char t[100];         //array t

    //copying a string
    memcpy(t, s, 7); // Copy 7 bytes--including the NUL terminator! (destination array; source array;length)
    printf("%s\n", t); // "Goats!"

    //copying the integer
    int a[] = {11, 22, 33};
    int b[3];
    
    memcpy(b, a, 3 * sizeof(int)); // Copy 3 ints of data (3 * size of int i.e 4 so total 12)
    printf("%d\n", b[1]); // 22

    //copying a struct onto another struct
    //memcpy(&my_clone_antelope, &my_antelope, sizeof my_antelope);

    //Note:
    //If we have a pointer to a source and a pointer to a destination, and have the number of bytes we
    //want to copy, we can copy any type of data.

    //And conversion is easy: you can just assign into a variable of the desired type
    char a = 'X'; // A single char
    void *p = &a; // p points to the 'X'
    char *q = p; // q also points to the 'X'
    printf("%c\n", *p); // ERROR--cannot dereference void*!
    printf("%c\n", *q); // Prints "X"

    //memcpy() :::::::::::::::::::::::::::::::::::::::::::::::
    void *my_memcpy(void *dest, void *src, int byte_count){
    
    // Convert void*s to char*s
    char *s = src, *d = dest;

    // Now that we have char*s, we can dereference and copy them
    while (byte_count--){
    *d++ = *s++;
    }
    // Most of these functions return the destination, just in case
    // that's useful to the caller.

    return dest;

    }

}