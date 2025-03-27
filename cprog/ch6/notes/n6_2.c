//passing arrays to functions:
#include <stdio.h>
int main(void)
{
int n[5] = {11, 22, 33, 44, 55};
int *p;

p = &n[0]; // p points to the array
// Well, to the first element, actually
printf("%d\n", *p); // Prints "11"

/*
 int *p = &n[0]; // p points to the array
 // is the same as: p = n;
 // p points to the array, 
 // Just referring to the array name in isolation is the same as getting a pointer to the first element of the array.
 */
 // Passing Single Dimensional Arrays to Functions:
 // Passing as a pointer to the first element:
 void times2(int *a, int len){
    for (int i = 0; i < len; i++)
    printf("%d\n", a[i] * 2);
 }
 // Same thing, but using array notation
 void times3(int a[], int len){
    for (int i = 0; i < len; i++)
    printf("%d\n", a[i] * 3);
 }
 // Same thing, but using array notation with size
 void times4(int a[5], int len){
    for (int i = 0; i < len; i++)
    printf("%d\n", a[i] * 4);
 }

 int x[5] = {11, 22, 33, 44, 55};
 times2(x, 5);
 times3(x, 5);
 times4(x, 5);

 //All those methods of listing the array as a parameter in the function are identical
 //void times2(int *a, int len);
 //void times3(int a[], int len);
 //void times4(int a[5], int len);

 }