/*
Struct Modification via Function
Write a function that takes a struct (e.g., a student record) by pointer and modifies one of its fields
(for example, updating the grade). Show the before-and-after values in your output.
*/

#include <stdio.h>
#include <string.h>
//struct student definition
struct student {
    char name[10];
    int age;
    char grade[3];
};
//function definition
void updateGrade(struct student *c,char *upGrade){
    strcpy(c->grade,upGrade);//using strcpy to copy the grade
}

int main() {
    // initialized struct student
    struct student c1 = {"Charlie",22,"B"};

    //printing the original information with original "Grade"
    printf("Before update:\n");//statement
    printf("Name:%s\n",c1.name);
    printf("Age:%d\n",c1.age);
    printf("Grade:%s\n",c1.grade);

    //function call to update the grade
    updateGrade(&c1,"A+");

    //printing the updated info
    printf("After update:\n");
    printf("Name:%s\n",c1.name);
    printf("Age:%d\n",c1.age);
    printf("Grade:%s\n",c1.grade);

    return 0;
}

/*
Notes:
Why are we using a Pointer to a Struct in the Function? 
    When we want to update values inside a struct (e.g., changing a student’s grade), 
    we use a pointer to the struct in the function because if we pass a struct directly (by value),
    the function only gets a copy of it. 
    So any changes made inside the function will "NOT" affect the original struct.Thus to modify the real struct,
    we pass its address using a pointer: (struct Student* s) in this case.
 
    >The function then uses the arrow operator (→) to access and change fields directly in memory:  
        e.g., s->grade = "A+" 
>>Use pointers when we want the function to make permanent changes to the original struct.
*/


