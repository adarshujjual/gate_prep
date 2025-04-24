//And if we have a pointer to the beginning of the string, and we computed the pointer to the end of the string,
//we can just subtract the two pointers to come up with the length.

//computing string length

#include <stdio.h>

int my_strlen(char *s){
    // Start scanning from the beginning of the string
    char *p = s;
    // Scan until we find the NUL character
    while (*p != '\0')
    p++;
    // Return the difference in pointers
    return p - s;
}


int main(void){

    printf("%d\n", my_strlen("Hello, world!")); // Prints "13"

}

//Note: Remember that we can only use pointer subtraction between two pointers that point to the same array!