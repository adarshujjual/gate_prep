/*
Create a program that uses a loop to demonstrate the difference between pre-increment (++i) and 
post-increment (i++). Print the value of the variable before and after the increment to illustrate the behavior.
*/

#include <stdio.h>
int main(){

    int i = 10;    // initialize variable i equal to 0
    int j = 5;    // initialize variable j equal to 0
    int sum = 0;  // initialize variable sum equal to 0
    int counter;  // initializing variable counter  
    printf("Demonstrating pre-increment (++/i) and post-increment (i++/): \n\n"); //statement

    // loop to demonstrate post-increment (i++) :
    printf("Post-increment (i++):\n");

    for (counter = 1; counter < 2; counter++){          //initializing for-loop using counter variable
        sum = j + i++;  
        printf("Before increment: i = %d\n", i);        //Print value before increment(i=11 but see that computation takes place for i=[10] only)
        printf("SUM: %d\n",sum);                        // the result gives [15] which shows 5+10=15 i.e i's initial value is used and after computation the value of i is incremented by 1. 
        printf("After increment: i++ = %d\n", i++);     //Post-increment and print value of "i"(after using post-incrementing the value is not increasing by 1 first as value returned is still [11])
    }

    i = 10;    // resetting i to 0 for the next demonstration

    // loop to demonstrate pre-increment (++i)
    printf("Pre-increment (++i):\n");
    
    for (counter = 1; counter < 2; counter++){       //initializing for-loop using counter variable
        sum = j + ++i;
        printf("Before increment: i = %d\n", i);          //Print value before increment (i is incremented before computation only which gives value [11] and this value is used for computation)
        printf("SUM: %d\n",sum);                          //the result gives 16 as output which shows incremented value of i is used in computation i.e 5+11=16
        printf("After increment: ++i = %d\n", ++i);       //Pre-increment and print value of "i" (shows that the actual value gets incremented firstly only)
    }

    return 0;//end of prog

}