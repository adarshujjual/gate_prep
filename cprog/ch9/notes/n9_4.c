//Writing text files
//Using fputc(), fputs() and fprintf()
#include <stdio.h>

 int main(void)
 {
 FILE *fp;
 int x = 32;
 fp = fopen("output.txt","w"); //can also use: fp = stdout;

 fputc('B',fp);//fputs() can be used to write one character at a time
 fputc('\n',fp);
 fprintf(fp,"x = %d\n",x);//fprintf() can be used for formatted writing
 fputs("Hello, world!\n",fp);//fputs() can be used for writing a string 

 fclose(fp); //close the file

 }
/*
Notes:(Output)
Creates a new file output.txt that includes
B
x = 32
Hello, world!

*/

