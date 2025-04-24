
#include <stdio.h>

int main(){

    // a pointer to the first element in that array

    int a[5] = {11, 22, 33, 44, 55};

    int *p = &a[0]; // Or "int *p = a;" 

    //printing the value there by dereferencing the pointer
    printf("%d\n", *p); //  printf("%d\n", *(p + 0)); //Prints 11 

    //printing the 1st indexed element
    printf("%d\n", *(p + 1));

    //iterate over elements of an array instead of using an array
    int a[5] = {11, 22, 33, 44, 55};

    int *p = &a[0]; // Or "int *p = a;" works just as well

    for (int i = 0; i < 5; i++) {
    printf("%d\n", *(p + i)); // Same as p[i]!
    }

    // can just add (or subtract) integer values directly to (or from) any pointer
    int e[] = {11, 22, 33, 44, 55, 999}; // Add 999 here as a sentinel
    int *p = &e[0]; // p points to the 11

    while (*p != 999) {
        // While the thing p points to isn't 999
        printf("%d\n", *p); // Print it
        p++;                // Move p to point to the next int!
    }

}

