//Write a C program to check if an array is sorted in ascending order.

#include <stdio.h>

int main(){
    int arr[100],n,i,isSorted = 1; //isSorted = 1 means true

    //input:size of array
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    //input: array elements
    printf("Enter %d elements:\n",n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //checking for ascending order
    for(i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            isSorted = 0;//found a pair that is not in ascending order
            break;
        }
    }

    //printing the output result
    if(isSorted){
        printf("The array is sorted in ascending order.\n");
    }else{
        printf("The array is NOT sorted in ascending order.\n");
    }

    return 0;
}
