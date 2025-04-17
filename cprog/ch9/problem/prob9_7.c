/*
Command-line File Reader
Develop a program that takes a filename as a command-line argument, opens the file, and prints its content.
Include error handling for missing arguments or file errors.
*/

/*
note:
>To pass command-line arguments, we typically define main() with two arguments: the first argument is the number
 of command-line arguments and the second is a list of command-line arguments.

>argc (ARGument Count) is an integer variable that stores the number of command-line arguments passed by the
 user including the name of the program. So if we pass a value to a program, the value of argc would be 
 2 (one for argument and one for program name).

> argv (ARGument Vector) is an array of character pointers listing all the arguments.
> If argc is greater than zero, the array elements from argv[0] to argv[argc-1] will contain pointers to strings.
> argv[0] is the name of the program , After that till argv[argc-1] every element is command -line arguments.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp;//variable to represent the open file
    char c[1000];//variable c af size that should be more than contents of the file

    //check for file is entered or not
    //as the value of argc would be 2 (one for argument and one for program name)
    if(argc < 2){
        printf("Error:No filename provided.\n"); 
        return 1;//something is missing
    }

    //open file in read mode here argc[1] is the file name entered
    fp = fopen(argv[1],"r");

    //if file does not exist then throw error
    if(fp == NULL){
        printf("Error: Could not open the file '%s'.\n", argv[1]);
        return 1;
    }

    //reading the file
    printf("Contents of the file '%s':\n", argv[1]);
    while(fgets(c,sizeof(c),fp)){
        printf("%s",c);
    }

    fclose(fp);//close the file

    return 0;
}
/*
gcc prob9_7.c -o prob9_7

prob9_7 newfile1.txt
*/