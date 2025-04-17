/*
File Existence Check
Write a program that attempts to open a file and checks if the file exists. If the file does not exist,
print an appropriate error message; otherwise, proceed to read its contents.
*/

#include <stdio.h>

int main(void){

    FILE *fp;//variable to represent open file
    char c[100];//variable c 

    fp = fopen("output1.txt","r");//open the file in read mode
    
    //check if file exists
    if (fp == NULL) { //if file is empty or does not exist
        printf("Error: The file does not exist thus the file 'input.txt' can't be opened.\n");
        return 1; 
    }

    //using fgets() for reading the file
    while(fgets(c,sizeof(c),fp) != NULL){
        printf("%s",c);
    } 

    fclose(fp);//close the file

    return 0;
}