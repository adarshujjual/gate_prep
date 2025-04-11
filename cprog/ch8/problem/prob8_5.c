/*
Returning a Struct
Implement a function that calculates and returns a struct (e.g., a Point struct representing the midpoint
between two given points). Demonstrate the use of this returned struct in main().
*/

#include <stdio.h>
//struct point definition
struct point {  //fields include x and y(store coordinates of x-axis and y-axis)
    int x;
    int y;
};
//function that returns a struct and calculates the midpoint of two points
struct point midPoint (struct point p1,struct point p2){//input arguments are the two struct points
    struct point mid; //declare the struct to return
    mid.x = (p1.x + p2.x)/2; //calculation of the mid-points 
    mid.y = (p1.y + p2.y)/2;
    return mid; //return the struct mid
}

int main(){
    //initialize the two points 
    struct point p1 = {2,4};
    struct point p2 = {4,8};
    
    //function call
    struct point result = midPoint(p1,p2);

    //printing the output result of the 
    printf("The coordinates of the midpoint are :\n");
    printf("The X-axis:%d\n",result.x);
    printf("The Y-axis:%d\n",result.y);

    return 0;
}

/*
note:
step 1) define a struct point with fields for x and y coordinates
step 2) define a function:
        >return type is : struct point
        >take two arguments i.e two points using two struct points structure
        >declare a new struct point that returns the mid-point's coordinates
*/