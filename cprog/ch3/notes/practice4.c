#include <stdio.h>
int main(){
    int year;
    int next_leap_year;

    printf("Enter the year you want to check:\n");
    scanf("%d",&year);



    if(year % 4 == 0 && year % 100 !=0)
        printf("%d is a leap year.\n",year);

    else if(year % 4 == 0 && (year % 100 ==0 && year % 400 !=0)){
        next_leap_year = 4 ;
        printf("%d is not a leap year.The next leap year is in %d year(s).\n",year,next_leap_year);
    }
       
    else if(year % 4 != 0){
        next_leap_year = year % 4 ;
        printf("%d is not a leap year.The next leap year is in %d year(s).\n",year,next_leap_year);
        }
}
/*Problem: Write a C program that takes a year as input from the user and determines if it is a leap year
           using if-else. A year is a leap year if it is divisible by 4, but not by 100, unless it is also
           divisible by 400. Print whether the year is a leap year or not. Additionally, if it’s not a leap 
           year,calculate and print how many years until the next leap year (assuming the next leap year is
           in the future).*/