#include <stdio.h>
    int main(){
        float hours_per_night = 6.5;
        float weekely_hours = hours_per_night * 7;

        printf("You sleep %.1f hours a week.\n",weekely_hours);

        return 0;
    }

//let’s put it together. Write a program that:
//Declares an int for how many hours you sleep.
//Multiplies it by 7 (for a week).
//Prints: "You sleep [total] hours a week."