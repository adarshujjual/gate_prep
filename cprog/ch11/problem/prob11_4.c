/*
Pointer Incrementation in Loops
Develop a program that uses a loop to increment a pointer through an array, printing the pointer’s address
and the corresponding value at each iteration.
*/


#include <stdio.h>

int main(){

    int a[5] = {1,2,3,4,5};

    int *p = a;

    
    printf("Address\t\tElement\n");

    for(int i = 0;i < 5;i++){
        //int **px = &p;            //we are using pointer to a pointer where the pointer px is pointing to the address of the pointer p.
        //printf("%p\t%d\n",*px,*p);//now while printing upon dereferencing the pointer px we can print the address stores in px that is the address of the pointer p.
        printf("%p\t%d\n",p,*p); // here the p gives the address (basic pointer function)
        p++; //incrementing the pointer
    }

    return 0;
}