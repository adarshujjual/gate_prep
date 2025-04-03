/*
String Reversal
Develop a function that takes a string and returns its reverse. Print both the original and reversed strings
to show the transformation.
*/
#include <stdio.h>

void rev(char str[],int length) {
    char str1[100]; 
    int count = 0;

    //reverse the string by copying characters in reverse order
    for(int i = 0;i < length;i++){
        str1[i] = str[length - i - 1]; //in order to also include index 0 
    }
    
    str1[length] = '\0';  // adding null terminator to the end of the string

    //copying the reversed string back to the original array
    for (int i = 0; i <= length; i++) {
        str[i] = str1[i];
    }
}


int main(void){
    
    char x[] ="HELLO!"; //original string
    printf("Original string:%s\n",x); //print the input string

    int length = 6; //length of the input string

    rev(x,6);   //function call
    printf("Reversed string:%s\n",x);//print the output
    
    return 0;
}