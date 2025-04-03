/*
Character Search in String
Create a program that prompts the user for a string and a character.
Search the string for the given character and print its first occurrence index (or a message if not found).
*/

#include <stdio.h>

int srch(char str[],char x){ //function takes two arguments str[] and x
    int count = 0;             //initialize a counter 
    while(str[count] != '\0'){ //run loop till the end of the string 
        if(str[count] == x){ //if an index has value as required then return the index
            return count;
        }
        count++;                //increment count until 
    }
    return -1;                  //if after going through the whole string and yet not finding the desired element then we return -1
}


int main() {
    char a[100], ch;
    int result;

    printf("Enter a string: ");  // statement
    fgets(a, sizeof(a), stdin);  //using fgets

    printf("Enter a character to search: ");
    scanf("%c",&ch);  //enter the element(character) to be searched 

    result = srch(a, ch); //function call

    //printing the output"
    if (result != -1) { 
        printf("Character '%c' found at index %d\n", ch, result); //index of the element to be searched 
    } else {
        printf("Character '%c' not found in the string.\n", ch);  //not found msg (return = -1)
    }

    return 0;
}
