//Write a C program to find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99, 99};   //Declaring and initialize array
    int n = sizeof(arr)/sizeof(arr[0]);  //Calculating number of elements in the array

    //Edge case:if there are fewer than 2 elements we can't find second largest element
    if(n < 2){
        printf("Array must contain at least two elements.\n");
        return 0;  //exit the prog
    }

    int first;  //variables for largest number 
    int second; //variables for second largest number

    //Initializing the first and second index of the array with first two array elements
    if(arr[0] > arr[1]){
        first = arr[0];       // if arr[0] is bigger, so it's first
        second = arr[1];      // and thus arr[1] is second
    }else{
        first = arr[1];       // but if arr[1] is bigger
        second = arr[0];      // then arr[0] is second
    }

    //starting loop from index 2 (since 0 and 1 are already used)
    for(int i = 2; i < n; i++){
        if(arr[i] > first){
            //If current element is greater than first
            // it becomes the new first, and old first becomes second
            second = first;
            first = arr[i];
        }
        //but if current is between first and second, and not equal to first
        else if(arr[i] > second && arr[i] != first){
            second = arr[i];  //update second
        }
    }

    //printing the output
    if(first == second){
        printf("There is no second largest element as all elements are equal.\n");
    }else{
        printf("The second largest element is: %d\n",second);
    }

    return 0;
}
