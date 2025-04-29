/*
Nested Block Visibility
Write a program that uses nested blocks to declare variables. Print the values within the innermost block 
and then outside, discussing which variables remain accessible and why.
*/

#include <stdio.h>

int main() {
    int outer_var = 10; // Variable in the outer block

    printf("Inside the outer block:\n");
    printf("Outer variable = %d\n",outer_var);

    { //start of first inner block
        // Variable in the first inner block
        int inner_var_1 = 20;

        //printing the inner block - 1 variable
        printf("\nInside the first inner block:\n");//statement
        printf("Outer variable = %d\n",outer_var);   // can access outer variable also

        //printing the first inner vlock element
        printf("First inner variable = %d\n",inner_var_1); 

        { //start of second (the innermost) block
            int inner_var_2 = 30; // Variable in second inner block

            printf("\nIn second inner block:\n");//statement
            printf("Outer variable = %d\n",outer_var);   // Can access outer
            printf("First inner variable = %d\n",inner_var_1); // Can access inner1

            //printing the second block variable
            printf("Second inner variable = %d\n",inner_var_2); 
        }
        
        //trying to access inner variable 2  //out of scope for var-2
        //printf("inner2 = %d\n",inner_var_2); //ERROR: inner_var_2 not accessible here
    }

    //trying to access inner variable 1  and inner variable 2 out of their scope
    //printf("First inner variable = %d\n",inner_var_1); // ERROR: inner_var_1 not accessible here
    //printf("Second inner variable = %d\n",inner_var_2); // ERROR: inner_var_2 not accessible here

    return 0;
}


/*
Notes:
Variables declared in outer blocks are accessible in inner blocks.

Variables declared in an inner block are not accessible outside that block.

Once you leave a block, the variables declared inside it are destroyed and cannot be used anymore.

Impt: Inner blocks can see outer variables, but outer blocks cannot see inner variables.
*/