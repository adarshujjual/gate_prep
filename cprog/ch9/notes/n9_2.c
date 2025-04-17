//Reading a line at a time using "fgets()"
//Code that reads a file a line at a time and prints out a line number before each line.
//Using fgets()
#include <stdio.h>

int main(void){

    FILE *fp;
    char s[1024];//size should be big enough w.r.t the file contents
    int linecount = 0;//initializing counter

    fp = fopen("quote.txt","r"); //open file in read mode

    while(fgets(s,sizeof(s),fp) != NULL)//read the file until the end
    printf("%d: %s", ++linecount,s); //print the line while incrementing the counter

    fclose(fp); //close the file
}
/*
Output:
1: A wise man can learn more from
2:  a foolish question than a fool
3:  can learn from a wise answer.
4:  --Bruce Lee
*/