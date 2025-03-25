/*
NULL Pointer Check
Write a program that initializes a pointer to NULL and then checks (using an if-statement) whether the
pointer is valid before attempting to dereference it. Print an appropriate message in each case.
*/

#include <stdio.h>
int  main(void){

    int *p;
    p = NULL;
    
    if(p == NULL){
        printf("The pointer is a NULL pointer and does not point to a valid memory location.\n");
    }else{
        printf("The pointer is not a NULL pointer.\n");
        printf("The value after dereferencing is:%d\n",*p);
    }

}








//Note:A NULL pointer is a pointer that doesn’t point to any valid memory location.  
//It is used to indicate that the pointer is not currently assigned to any variable or any memory block.
//As it doesn’t point to a value, dereferencing it is undefined behavior, and probably will result in a crash.