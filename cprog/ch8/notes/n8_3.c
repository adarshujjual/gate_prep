//Passing Structs By Reference (Using Pointers)

#include <stdio.h>
//structure definition of structure named car having fields: name,price,speed
struct car {
    char *name;
    float price;
    int speed;
};
//function definition
//the set_price() function allows to set the .price field of struct car
void set_price(struct car *c, float new_price) {
    c->price = new_price;   //same as: (*c).price = new_price;
}
//note:the arrow operator(->) means “follow the pointer, and access this field”
//c->price means:“go to the memory that c is pointing to, and access the price field.”
int main() {
    struct car bmw = {"BMW M3", 60000.0, 250}; //declared a struct variable bmw along with its fields
    struct car *ptr = &bmw; //pointer to thr bmw struct
    //function call
    set_price(&bmw,100000.0);  //passing the address of the struct bmw

    //printing the output using the arrow operator
    printf("Name: %s\n", ptr->name);
    printf("Price: %.2f\n", ptr->price);
    printf("Speed: %d km\n", ptr->speed);
    return 0;
}
