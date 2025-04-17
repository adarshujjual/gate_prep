
//Reading Text File (Reading one character at a time) using fgetc();


#include <stdio.h>

int main(void){
    FILE *fp;   //variable to represent open file
    int c1;     
    fp = fopen("hello.txt","r"); //opening the file for reading(filename followed by "r" which states file is in read mode)

    int c = fgetc(fp); //reading the line one character at a time
    print("%c\n",c);    //printing the read character


    //reading the whole file using a loop
    while((c1 = fgetc(fp)) != EOF){ //read a single character
        printf("%c",c1);//print character to stdout
    }


    fclose(fp); //closing the file
}
//note: by compring to EOF we ensure that the loop runs until the end of the file.