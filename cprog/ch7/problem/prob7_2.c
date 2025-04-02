/*
String Length Calculator
Develop a program that reads a string from the user (using fgets() or scanf()) and calculates its length 
manually (without using strlen()).
*/

#include <stdio.h>
//function definition
int strLength(char str[]){ //function takes a char type array as argument
    int count = 0;          // initialize a counter
    while(str[count] != '\0' && str[count] != '\n'){ //run through the array until we reach '\0' and keep incrementing count till then
        count++;
    }
    return count;
}

int main(void){
    int length;
    char strng[50];

    //enter the string
    printf("Enter a string:\n");//statement
    fgets(strng, sizeof(strng), stdin);  // Safe input handling checks buffer //scanf("%s",strng);

    length = strLength(strng);        //function call
    printf("The length of the string is %d\n",length);//print output
    return 0;
}