/*Copying and Returning Structs:
>we can copy one struct into another of the same type using the assignment operator (=).
>we can return a struct from a function just like any other type.
*/
#include <stdio.h>
//declaring car struct
struct car {
    char *name;
    float price;
    int speed;
};

//a function that returns a car struct
struct car makeCar(char *name, float price, int speed) { //note: here [struct car] is "type" and [makeCar] is "fun_name" 
    struct car c;
    c.name = name;
    c.price = price;
    c.speed = speed;
    return c;  //return the entire struct
}

int main() {
    struct car saturn = {"Saturn SL/2", 16000.99, 175};//initializing variable saturn  

    //copying the entire struct into another
    struct car copy = saturn; //struct copy will have an exact copy of saturn where ther pointer points to the same thing 

    // Both structs now contain the same data (but they're independent copies)
    printf("Copy name: %s\n", copy.name);     // Saturn SL/2
    printf("Copy price: %.2f\n", copy.price); // 16000.99
    printf("Copy speed: %d km\n", copy.speed); // 175

    //we can return a struct from a function just like any other type
    //function call to make a structure using the function
    struct car bmw = makeCar("BMW M3", 60000.0, 250);
    //print the struct bmw along with its fields
    printf("Car: %s, Price: %.2f, Speed: %d km\n", bmw.name, bmw.price, bmw.speed);
    
    return 0;
}
