/*
Array of Structs
Create an array of student structs. Prompt the user to enter data for each student and then display the 
complete list with formatted output.
*/

#include <stdio.h>
//structure definition
struct student{
    char name[20];
    int age;
    char grade[3];
};

int main(){
    //structure initialization
    struct student studAry[3];  //setting the number of students of whom the data will be entered to 3 only
    //for loop to take the input
    for(int i=0;i < 3;i++){     //i<(size of the array)
        printf("Enter the details of student%d:\n",i+1);//statement //add 1 to i for count of student entries

        printf("Enter the name of the student%d:\n",i+1);
        scanf(" %[^\n]%*c", studAry[i].name);           //store full name with space

        printf("Enter the age of the student%d:\n",i+1);
        scanf("%d",&studAry[i].age);                    //store age

        printf("Enter the grade of the student%d:\n",i+1);
        scanf("%s",studAry[i].grade);                   //store grade
    }

    printf("List of students details:\n");//statement
    printf("Name\tAge\tGrade\n");//top of the list column headings

    //printing the list containing student information
    for(int i=0;i<3;i++){
        printf("%s\t%d\t%s\n",studAry[i].name,studAry[i].age,studAry[i].grade);//\t for spacing
    }

return 0;
}

//note: scanf(" %[^\n]%*c", name);
//%[ ] means "scan a set of characters"
//^\n means "stop scanning when you hit a newline"
//So, %[^\n] means: "Read everything up to (but not including) the newline character"
//%c means: read a single character (in this case, the newline left in the buffer)
// * means: "don't store this character, just discard it"


