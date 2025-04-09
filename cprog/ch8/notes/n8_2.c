/*
we can pass structs to functions in two main ways:
>By value — a copy of the struct is passed to the function.
>By reference (using pointers) — the function receives a pointer to the original struct, so it can modify the original data.
*/

//Passing Structs By Value:
#include <stdio.h>
//structure declaration
struct car {
    char *name;
    float price;
    int speed;
};
//function definition
void display(struct car name_of_car){ //function takes a structure 
    printf("Name: %s\n", name_of_car.name);
    printf("Price: %.2f\n", name_of_car.price);
    printf("Speed: %d km\n", name_of_car.speed);
}

int main() {
    struct car saturn = {"Saturn SL/2", 16000.99, 175};
    display(saturn);  //function call,here passing by value (a copy of saturn is sent to the function)
    return 0;
}

//note:Any changes made to name_of_car inside display() function won't affect the original saturn variable in main().