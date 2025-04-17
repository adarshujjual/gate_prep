/*
Line-by-Line File Reader
Develop a program that uses a loop to read a file one line at a time and prints each line with its corresponding
line number.
*/
#include <stdio.h>

int main(void){

    FILE *fp; //variable to represent the open file
    char c[101];//variable
    int count = 1;//initializing counter with 1 as line should begin with 1st line and onwards

    fp = fopen("newfile1.txt","r"); //open file in read mode

    //error check
    if(fp == NULL){
        printf("Error: Could not open the file 'newfile1.txt'.\n");
        return 1;
    }

    //the counter increments for every new line read 
    while(fgets(c,sizeof(c),fp) != NULL){
        printf("%d : %s\n",count++,c);
    }
    
    //close the file
    fclose(fp); 

    return 0;
}