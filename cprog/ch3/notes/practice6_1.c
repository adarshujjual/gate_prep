/*Write a C program using a for loop to print the numbers from 1 to 10. However, if the number is even, 
print "Even" instead of the number itself.*/


#include <stdio.h>
int main(){

    int i=1;

    for(i=1;i<=10;i++){
        if(i%2==0){
            printf("even\n");
        }else{
            printf("%d\n",i);
        }
    }
    return 0;
}

