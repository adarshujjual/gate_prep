//Changing Arrays in Functions
// we pass a pointer to an array to a function, the function manipulates the values in that array, and those changes are visible out in the caller.
#include <stdio.h>
void double_array(int *a, int len){ //int a* == int a[]

// Multiply each element by 2
//
// This doubles the values in x in main() since x and a both point
// to the same array in memory!
for (int i = 0; i < len; i++)
a[i] *= 2;
}

//Passing Multidimensional Arrays to Functions:
void print_2D_array(int a[2][3]){
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++){
            printf("%d", a[row][col]);
        }printf("\n");
    }
 }


int main(void)
{
int x[5] = {1, 2, 3, 4, 5};//initializing array x with values 
double_array(x, 5);//function call
for (int i = 0; i < 5; i++)
printf("%d\n", x[i]); // 2, 4, 6, 8, 10!

//Passing Multidimensional Arrays to Functions:
int y[2][3] = { // initialing array y with 2 rows and 3 columns
    {1, 2, 3},
    {4, 5, 6}
};
print_2D_array(y); //function call

}




 