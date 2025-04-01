// Copying a String

#include <stdio.h>
 #include <string.h>
 int main(void)
 {

    char s[] = "Hello, world!";
    char *t;
    // This makes a copy of the pointer, not a copy of the string!
    t = s;
    // We modify t
    t[0] = 'z';
 
    // But printing s shows the modification to only first element !
    // Because t and s point to the same string! (pointing to the first element of the string/array)
    printf("%s\n", s); //OUTPUT: "zello, world!" //only the first element that is pointed by both the pointers is changed


    char ch[] = "Hello, world!";
    //destination array where we went to copy the original string
    //initializing an array n of char type having length=100
    char n[100]; // Each char is one byte, so plenty of spare for the destination 
    
    // This makes a copy of the string!
    strcpy(n, ch);    //destination pointer is the first argument, and the source pointer is the second

    // We modify n's first element 
    n[0] = 'M';
 
    // And ch remains unaffected because it's a different string
    printf("%s\n",ch); // "Hello, world!"
    // But n has been changed
    printf("%s\n", n); // "Mello, world!"
}


//Note:
//Before copying the string,it should be ensured that the destination should have room to copy into.
//To hold the characters the destination needs to be at least as long as the string we’re copying.
