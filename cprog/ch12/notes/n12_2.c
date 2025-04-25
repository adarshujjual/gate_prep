//ERROR Finding
/*
In case of memory being not allocated then the error will be given.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *x;

    if ((x = malloc(sizeof(int) * 10)) == NULL) {
    printf("Error allocating 10 ints\n");
    // do something here to handle it
    }
}

/*
Note:SAME
 int *x;
 x = malloc(sizeof(int) * 10);
 if (x == NULL) {
 printf("Error allocating 10 ints\n");
 // do something here to handle it
 }
*/