/*
Nested Structs
Define two structs where one struct (e.g., Date) is nested inside another (e.g., Student with a birthday field).
Write a program that initializes and prints the nested data.
*/

#include <stdio.h>
//defining structure date
struct date{
    int day;
    int month;
    int year;
};
//defining structure student
struct student{
    char name[10];
    int age;
    struct date dob;//initialized the structure(struct date) inside the struct student 
};

int main(){
    struct student s1 = {"Charlie",33,{02,12,1991}};//initialized struct student

    printf("Student's Info:\n");//statement

    //printing out the result
    printf("Name:%s\n",s1.name);
    printf("Age:%d\n",s1.age);
    printf("DoB:%d/%d/%d\n",s1.dob.day,s1.dob.month,s1.dob.year);//refer both the structures fields

    return 0;
}

