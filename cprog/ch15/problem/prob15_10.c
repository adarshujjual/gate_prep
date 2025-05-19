/*
Converting String to Double with strtod()
Write a program that reads a string representing a floating-point number and converts it to a double using
strtod(). Implement error checking to handle invalid input and print the converted value along with any error
messages if conversion fails.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char c[100];
    char *end_ptr;
    double result;

    //enter the input
    printf("Enter a floating-point number:\n");
    fgets(c,sizeof(c),stdin);

    //converting the string to double using "strtod"
    result = strtod(c,&end_ptr);

    //error checkinging to see if no conversion was performed
    if(end_ptr == c){
        printf("Error:No valid number found in the input.\n");
        return 1;
    }

    //printing the converted double
    printf("Converted value =%lf\n",result);

    return 0;
}
