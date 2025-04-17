/*
Writing User Input to a File
Develop a program that prompts the user for a string and writes it to a new text file. Then, open the file 
to verify that the data was written correctly.
*/

#include <stdio.h>

int main(void){

    FILE *fp;//variable to represent open file
    char in[100]; //variable to store input string to then write on file
    char out[100]; //variable to read and print the file content

    printf("Enter the input string:\n");//statement
    //take the input string using fgets()
    fgets(in,sizeof(in),stdin);

    fp = fopen("newfile1.txt","w");//open the file in write mode

    //exit with error code if file is empty
    if (fp == NULL) {
        printf("Error: Could not open the file 'newfile1.txt'.\n");
        return 1; 
    }
    
    //write the string in the newfile using fputs
    fputs(in,fp);
    //close the file
    fclose(fp);

    //reopen the created file in reading mode
    fp = fopen("newfile1.txt","r");
    
    printf("Checking output by reading the file:\n");//statement

    //reading the file using fgets
    while(fgets(out,sizeof(out),fp) != NULL){
        printf("%s",out);
    } 

    //close the file
    fclose(fp);

    return 0;

}