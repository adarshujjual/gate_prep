/*
Reading a Text File
Write a program that opens a text file, reads its contents line by line, and prints them to the console.
Include error checking to ensure the file exists.
*/

//reading the file line by line using fgets but could also use
#include <stdio.h>

int main(void){

    FILE *fp;//variable to represent open file
    char c[100];//initialize a char array c

    fp = fopen("output1.txt","r");//open file in read mode
    
    //exit with error code if file is empty
    if (fp == NULL) {
        printf("Error: Could not open the file 'input.txt'.\n");
        return 1; 
    }

    //using fgets for reading the file
    while(fgets(c,sizeof(c),fp) != NULL){
        printf("%s",c);
    } 

    fclose(fp);//close the file

    return 0;
}
/*
Output:
B
x = 32
Hello, world!
*/