/*
Struct and typedef Combined
Develop a program that uses typedef with a struct to represent a simple data structure (e.g., a book with title,
author, and year). Create several instances, store them in an array, and print their details in a formatted manner.
*/

#include <stdio.h>

// Define a struct with typedef for a book
typedef struct{
    char title[110];
    char author[110];
    int year;
}book;

int main() {
    //initializing a struct book variable along with its elements
    book copies[4] = {
        {"Maths","Ram",1979},
        {"F1","Shyam",2032},
        {"Toxic","Gyan",2067},
        {"Cool","AU",2026}
    };

   
    printf("%s\t%s\t%s\t\n","Title","Author","Year");//heading 
    printf("\n");

    //printing the output
    for (int i = 0; i < 4; i++) {
        printf("%s\t%s\t%d\t\n", copies[i].title,copies[i].author,copies[i].year);
    }

    return 0;
}
