/*
Appending Data to a File
Create a program that opens an existing file and appends a new line of text to it. Explain the difference
between writing and appending modes in your comments.
*/

//append "a" : Adds content to the end of the file. If the file doesn’t exist, it creates a new one. 
//It keeps existing data intact.

#include <stdio.h>

int main(void){

    FILE *fp; //variable to represent the open file
    char input[100]; //variable for storing the input 

    printf("Enter the line to be appended to the file:\n");//statement
    //take input using fgets();
    fgets(input,sizeof(input),stdin);

    fp = fopen("output1.txt","a");//open the file in append mode(keeps the already present contents intact)

    //error check exit if empty file
    if(fp == NULL){
        printf("Error: Could not open the file 'newfile1.txt'.\n");
        return 1;
    }

    //write the input on the file using fputs()
    fputs(input,fp);

    //close the file
    fclose(fp);

    return 0;
}

/*
Output:
B
x = 32
Hello, world!
This is the append line!
*/

/*
Difference btw write and append mode:
> "w" : Overwrites the file if it exists. If not, creates a new file. All previous data is erased.
> "a" : Adds content to the end of the file. If the file doesn’t exist, it creates a new one.Keeps existing 
        data intact.
*/