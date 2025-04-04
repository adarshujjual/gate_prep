/*
Array of Strings
Develop a program that stores multiple strings (for example, names of programming languages) in a 
two-dimensional character array. Use a loop to print each string on a new line, explaining the concept
of string arrays.
*/

#include <stdio.h>

int main(void){
    //initializing a 2D array
    char str[4][15] = {"Java","C++","C","Python"};//4 Rows 15 elements in each row including '\0'
    //statement
    printf("Names of programming languages are:\n");
    //printing 2D Array
    for(int i = 0; i < 4; i++){
        printf("%s\n",str[i]);
    }

return 0;
}




/*concept of string arrays:
A string array is simply a collection of strings — i.e an array of arrays of characters.
Syntax: char arr[rows][cols];
Each row is a string, and each column is a character in that string.
*/
