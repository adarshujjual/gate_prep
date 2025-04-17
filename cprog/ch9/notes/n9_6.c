//reading binary file
//using fread()

#include <stdio.h>

int main(void){

    FILE *fp;
    unsigned char c;

    fp = fopen("output.bin","rb");//open file in read mode

    //using fread for reading the file
    while(fread(&c,sizeof(char),1,fp)>0){ 
        printf("%d\n",c);
    }

    fclose(fp);//close file
}

/*
Output:
5
37
0
88
255
12
*/