/*
Void Pointer Conversion
Implement a program that uses a void pointer to store the address of an integer variable. Convert the void
pointer back to an integer pointer, dereference it, and print the value. Explain the concept of void pointers
and type safety.
*/

#include <stdio.h>

int main(){
    int num = 101; //variable num

    void *p; //void pointer p
    p = &num;//pointer p points to num

    int *int_p = (int *)p;//casting a void pointer into a int pointer

    //printing the value
    printf("Value of pointer:%d\n",*int_p);

    return 0;
}



