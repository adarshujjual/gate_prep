/*
Pointer to Pointer Demonstration (Double pointer concept)
Declare an integer variable, a pointer to that integer, and then a pointer to the pointer. Print all addresses 
and the final dereferenced value to show the multi-level indirection.
*/

#include <stdio.h>
int main(void){
    int n = 10;
    int *p;//declaring pointer p pointing to an int
    p = &n;//pointer p points to n
    int **ptr;//double pointer:A pointer to a pointer holds the address of another pointer.
    ptr = &p;//pointer to pointer 'ptr' points to the pointer 'p'

    printf("Value of n:%d\n",n);
    printf("Location of variable n:%p\n",&n);

    printf("Value of pointer p:%d\n",*p);                   //dereferencing at 1st level
    printf("Location of pointer p:%p\n",p);                 //printing location of pointer p

    printf("Value of pointer to a pointer:%d\n",**ptr);//dereferencing at 2nd level
    printf("Location of pointer to a pointer:%p\n",ptr);//printing location of pointer to a pointer 'ptrtoptr'


}

//multi-level indirection:not direct access rather accessing indirectly
//single level indirection using a pointer
//second level indirection(double indirection) using a pointer to a pointer [**p]  

/*
Test output:
Value of n:10
Location of variable n:0061FF18
Value of pointer p:10
Location of pointer p:0061FF18
Value of pointer to a pointer:10
Location of pointer to a pointer:0061FF14
*/