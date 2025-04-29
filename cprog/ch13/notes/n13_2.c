/*
Where To Define Variables:
We can define variables anywhere in the block, within reason—they have the scope
of that block, but cannot be used before they are defined.
*/

#include <stdio.h>

int main(void){
    int i = 0;

    printf("%d\n", i);// OK: "0"

    //printf("%d\n", j); // ILLEGAL--can't use j before it's defined
    int j = 5;

    printf("%d %d\n", i, j);  // OK: "0 5"
}





