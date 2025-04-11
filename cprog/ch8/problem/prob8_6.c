/*
Using typedef with Structs
Create a typedef for a struct (such as typedefinitializes.. } Student;) and write a program that declares
variables of the new type, initializes them, and prints their contents.
*/

#include <stdio.h>
//using typedef to define the struct student
typedef struct{
    char name[10];
    int age;
    char grade[3];
}student;

int main(){

    //initializing student variables (without using struct before student)
    student s1 = {"Charlie",33,"A+"};
    student s2 = {"Taylor",35,"B"};

    //output printing:
    printf("The details of student1:\n");
    printf("Name:%s\tAge:%d\tGrade:%s\n",s1.name,s1.age,s1.grade);
    printf("\n");
    printf("The details of student2:\n");
    printf("Name:%s\tAge:%d\tGrade:%s\n",s2.name,s2.age,s2.grade);

    return 0;
}

/*
The typedef is used to create a custom alias (nickname) for a data type.
It makes the struct declarations cleaner and easier to reuse.
So instead of always writing: struct Student s1;
            We can write :    Student s1;(omiting the struct)
*/