/*
Using free() Properly
Write a program that allocates memory for a structure using malloc(), uses the structure, and then frees the
allocated memory. Emphasize the importance of freeing each allocation to prevent memory leaks.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//defining the struct book
typedef struct {
    char name[110];
    int pub_year;
}book;

int main() {
    //memory for one book
    book *p = (book *)malloc(sizeof(book));

    //error check
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    //initializing the structure 
    book b1 = { "Alice In Bonder Land", 1930 };
    *p = b1;


    //printing the struct fields
    printf("Book Info:\n");
    printf("Name: %s\n", p->name); 
    printf("Age: %d\n", p->pub_year);
    

    //free the memory allocated
    free(p); 

    return 0;
}

/*
The importance of freeing each allocation to prevent memory leaks:
->Forgetting to free dynamically allocated memory leads to memory leaks.
->In long-running programs or ones that allocate often, this can cause high memory usage or crashes.
->Tools like valgrind help detect such leaks.
*/