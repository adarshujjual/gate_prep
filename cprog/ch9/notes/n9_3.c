//Reading the formatted input
//Using fscanf();
//fscanf function skips leading whitespace when reading and returns EOF on the end of line

#include <stdio.h>

int main(void){
    FILE *fp;
    char name[1024]; //big enough for any line
    float length;
    int mass;

    fp = fopen("whales.txt","r");//opening file whale.txt in reading mode

    //reading the file using fscanf
    while(fscanf(fp,"%s %f %d",name,&length,&mass) != EOF){
        printf("%s whale, %d tonnes, %.1f meters\n",name,mass,length);
    }

    fclose(fp);//closing the file
}