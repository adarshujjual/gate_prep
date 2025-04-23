/*
2D Point Struct with typedef
Define a typedef for a struct representing a 2D point (with x and y coordinates). Write functions to 
calculate the distance between two points and print the result.
*/

#include <stdio.h>
#include <math.h> //for sqrt

typedef struct{ //defining struct point with fields x_axis and y_axis
    int x_axis;
    int y_axis;
}point;//using typedef to initialize struct point as just point

//function definition
int point_dist(point p1, point p2) { //take two points as variables
    int x_point = p2.x_axis - p1.x_axis ;
    int y_point = p2.y_axis - p1.y_axis ;
    int dist = sqrt(x_point*x_point + y_point*y_point);
    return dist;
}

int main(void){
    point point1 = {2,4};
    point point2 = {6,8};
    //function call
    int result = point_dist(point1,point2);
    //printing result
    printf("The distance between the points is %d\n",result);

    return 0;
}