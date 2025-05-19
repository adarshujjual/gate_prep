//Write a C program to reverse an array.

#include <stdio.h>

//recursive function definition
void revAry(int a[],int start,int end){
    if(start >= end){
        return;  //base case:stopping when indices meet or cross
    }

    //swapping arr[start] and arr[end]
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;

    //recursive call on the remaining subarray
    revAry(a,start + 1,end - 1);
}

int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    //function call
    revAry(a,0,n - 1);

    //printing the reversed array
    printf("Reversed array:\n");
    for(int i = 0; i < n; i++){
        printf("%d",a[i]);
    }

    return 0;
}
