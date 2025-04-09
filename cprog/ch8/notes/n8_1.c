//structure declaration and initialization
#include <stdio.h>
int main(){
    //structure declaration
struct car {
    char *name;  // char type pointer holds the name of the car
    float price; //floating type variable to store price
    int speed;  //int type variable stores the speed of the car
    };

//structure initialization
struct car saturn = {"Saturn SL/2", 16000.99, 175}; //creating a variable (saturn) of type struct car and initializing its members directly

//printing the values stored in diffenent variables
printf("Name:%s\n",saturn.name);
printf("Price:%f\n",saturn.price);
printf("Top Speed:%d km\n", saturn.speed);

return 0;
}