
/*Write a C program that takes an integer input from the user and checks if it is positive, negative, 
or zero using if-else.
 Print an appropriate message for each case.

 #include <stdio.h>
 int main() {

    int i;
    printf("Enter your number:\n");
    scanf("%d",&i);

    if(i==0)
        printf("%d is zero.\n",i);

    else if (i>0)
        printf("%d is a positive number.\n",i);

    else
        printf("%d is a negative number.\n",i);
        
 }*/

 /*Problem: Write a C program that takes two integers as input from the user and determines which one is
            larger using if-else. If they are equal, print a message indicating that. 
            Additionally, calculate and print the difference between the two numbers (always positive).*/

#include <stdio.h>
int main(){
    int x,y;
    int dif;

    printf("Enter your first number and second number:\n");

    scanf("%d  %d",&x,&y);

    if(x>y){
        dif=x-y;
        printf("%d is larger than %d .\n",x,y);
        printf("The difference is %d.\n",dif);
    }
    

    else if(x<y){
        dif=y-x;
        printf("%d is larger than %d .\n",y,x);
        printf("The difference is %d.\n",dif);
    }
   

    else if(x==y){
        printf("The numbers %d and %d are equal.",x,y);
        printf("The difference is 0.\n");
    }

    


}