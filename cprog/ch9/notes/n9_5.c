//Binary file input/output
//writing using fwrite()
//functions commonly used are : fread() and fwrite().
//write a sequence of byte values to disk all at once.
//second program will read a byte at a time and print them out

#include <stdio.h>

int main(void){

    FILE *fp;

    unsigned char bytes[6] = {5,37,0,88,255,12};//define the char type array bytes with its elements

    fp = fopen("output.bin","wb");//open file in write mode
    //function(pointer to data to write,sizeof(each piece of data,here char),count of each piece of data,file);
    fwrite(bytes,sizeof(char),6,fp);

    fclose(fp);//close the file
}
