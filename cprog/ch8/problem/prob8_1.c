/*
Student Information Struct
Define a struct for a student (including fields like name, age, and grade). Write a program that creates an 
instance, initializes it, and prints all the student’s details.
*/

#include <stdio.h>
//structure declaration
struct student {
    char name[20];   //char for name
    int age;        //integer for age
    char grade[3];    //char for grade
};

int main(){
    //initialization of an instance
    struct student s1 = {"Charlie",23,"A"};//initialized all the fields for s1
    //printing details of the student
    printf("Name:%s\n",s1.name);
    printf("Age:%d\n",s1.age);
    printf("Grade:%s\n",s1.grade);

    return 0;

}
 