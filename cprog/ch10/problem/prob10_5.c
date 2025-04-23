/*
Enumeration Type via typedef
Create an enumeration for the days of the week using typedef enum and write a program that prints the numeric
 value for a given day. Explain the use of enums in code clarity.
*/

#include <stdio.h>

//defining enum week_day using typedef
typedef enum {
    Sunday,     //0 
    Monday,     //1
    Tuesday,    //2
    Wednesday,  //3
    Thursday,   //4
    Friday,     //5
    Saturday,   //6
} week_days;

int main(void){

    //defining variable of week_day enum
    week_days givenDay;

    //assigning the value to the variable
    givenDay = Friday;

    //printing the output
    printf("The number of the given day in the week:%d\n",givenDay);

    return 0;
}

/*
Output:
The number of the given day in the week:5
*/