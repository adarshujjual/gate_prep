/*
Write a program that uses a constant (e.g., #define PI 3.14159) along with a variable for the radius to 
calculate and print the area of a circle. Explain the use of constants and variables together.
*/

#include <stdio.h>
#define PI 3.14159 //we define a constant PI with the value 3.14159 for calculating the area

int main(){
    float radius,area=0; //declare variable to store radius and area 

    printf("Calculation of area of a circle:\n"); // statement

    printf("Enter the radius of the circle:\n"); // enter the radius of the circle
    scanf("%f",&radius); // store radius value using type identifier %f into variable radius

    area=PI*radius*radius; //formula to calculate area of circle

    printf("The area of the circle is %f.",area); // print final result as computed area 

    return 0;// end of prog
}

/*

Use of Constants and Variables Together:

    >Constants: Fixed, unchanging values (e.g., PI = 3.14159) defined using "#define" .
     They ensure accuracy, prevent errors, and improve readability by avoiding hardcoded numbers.
    >Variables: Named storage for dynamic, changing data (e.g., radius, area) that can vary during
     program execution, enabling flexibility and user interaction.
Working Together:
    >Constants provide fixed values for calculations (e.g., area = PI * radius * radius), while variables
    hold input/output or computed results.
    >They enhance code reliability, maintainability, and scalability by separating unchanging parameters from
     dynamic data.
Example: In a circle area program, PI (constant) ensures consistent calculation, while radius (variable) 
         accepts user input for dynamic computation.

*/