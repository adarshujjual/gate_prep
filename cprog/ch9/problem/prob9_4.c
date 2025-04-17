/*
Counting Lines in a File
Write a program that reads a file and counts the number of lines it contains. 
Display the total count at the end of the program
*/
//Using fgets as it reads line by line
#include <stdio.h>


int main(void){

    FILE *fp; //variable to represent the open file
    char s[101];
    int counter = 0;//initializing counter

    fp = fopen("newfile1.txt","r"); //open file in read mode
    
    //error check
    if(fp == NULL){
        printf("Error: Could not open the file 'newfile1.txt'.\n");
        return 1;
    }

    //the counter increments for every new line read 
    while(fgets(s,sizeof(s),fp) != NULL){
        counter++;
    }
    //the counter gives the number of lines
    printf("The number of lines in the file is:%d",counter);
    
    //close the file
    fclose(fp); 

    return 0;
}


