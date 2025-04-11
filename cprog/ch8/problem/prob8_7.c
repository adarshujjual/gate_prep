/*
Struct Comparison
Develop a program that compares two student structs for equality (by comparing all fields) and 
prints whether they are identical or different.
*/

#include <stdio.h>
#include <string.h>//for strcmp

//defining struct student
 typedef struct {
    char name[10];
    int age;
    char grade[3];
 }student;

 //function definition
 int compStruct(student s1,student s2){
    if(strcmp(s1.name,s2.name) == 0 && s1.age == s2.age && strcmp(s1.grade,s2.grade) == 0){//compare all the fields
        return 1;
    }else{
        return -1;
    }
 }

 int main(){

    //initializing the two student's info 
    student s1 = {"Charlie",33,"A"};
    student s2 = {"Charlie",33,"A"};

    //function call
    int result = compStruct(s1,s2);

    //printing the result
    if(result == 1){
        printf("The information is of the same Student.\n");
    }else if(result == -1){
        printf("The information is of different Students.\n");
    }

    return 0;
 }


 /*
 note:memcmp is suitable for structs with simple data types - int,float,char and not with pointer and padding.
 instead of using strcmp() we could use "memcmp()" :
 int main() {
    Student a = {"Charlie",33,"A"};
    Student b = {"Charlie",33,"A"};

    if (memcmp(&a, &b, sizeof(Student)) == 0) {
        printf("The students are identical.\n");
    } else {
        printf("The students are different.\n");
    }

    //basic syntax:
    #include <string.h>
    int memcmp(const void *ptr1, const void *ptr2, size_t num);

 */