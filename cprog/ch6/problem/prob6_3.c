/*
Finding Minimum and Maximum
Create a program that scans through an array to find and print the smallest and largest elements.
Explain the logic used to compare and update the minimum and maximum values.
*/

#include <stdio.h>
//function for largest element
//function definition
int valMax(int a[],int len){
    int max = a[0];                //initialize variable max which is equal to the first element of the array and assume that it is the largest element
    for(int i = 0;i < len;i++){     //initialize for-loop
        if(a[i]>max){               //compare first term stored in max with all the terms in the array 
            max = a[i];             //if any term is greater than value in max then update the value of max with that term
        }
    }
    return max;                     //return the largest element stored in max 
}
//function for smallest element
//function definition
int valMin(int a[],int len){        
    int min = a[0];                 //initialize variable min which stores the first element of the array and assume that it is the smallest element
    for(int i =0; i<len ;i++){
        if(a[i]<min){               //compare first term stored in min with all the terms in the array
            min = a[i];             //if any term is smaller than keep updating the min value with the smallest term
        }
    }
    return min;                     //return smallest term stored in min
}

//min function
int main(void){
    int x[5]={1,2,3,4,5};           //initialize a array x
    printf("The largest element is : %d\n",valMax(x,5)); //function call and print output
    printf("The smallest element is : %d\n",valMin(x,5));//function call and print output
    return 0;
}