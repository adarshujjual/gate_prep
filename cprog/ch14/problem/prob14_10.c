/*
Constant Numeric Calculations
Develop a program that defines a constant (using const or #define) for a numeric value, then uses it in various
arithmetic operations. Explain the benefit of using constant numeric types to avoid accidental modification.
*/

#include <stdio.h>

//Using #define for constant value
#define PI 3.14159

int main() {

    //Using const for constant value
    const int BASE = 10;
    
    int radius = 5;
    float area, circumference;
    int result;

    //Using constants in calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    result = BASE + radius;

    printf("Circle radius:%d\n",radius);
    printf("Area =%.2f\n",area);
    printf("Circumference =%.2f\n",circumference);
    printf("BASE + radius =%d\n",result);

    //Uncommenting below line would cause an error
    //BASE = 20;  //  Error: assignment of read-only variable
    //PI = 3.14;  //  Error: macro reassignment not allowed

    return 0;
}


/*
Benefits of Using Constants:

1)Prevents Accidental Modification: Variables declared const cannot be changed, making the program safer and
  more predictable.

2)Improves Code Readability: PI and BASE are more meaningful than hard-coded values like 3.14159 or 10.

3)Easier Maintenance: If the value of PI changes, you only update it in one place instead of searching the
  whole code.

4)Compiler Enforcement: The compiler will throw errors if you try to change a const or #define constant.
*/
