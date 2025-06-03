//Write a C function to build a max-heap from an array.

/*
To build a max-heap from an array, we apply the heapify process bottom-up starting from the last non-leaf node
all the way to the root.

# What is "Build-Heap"?
-> Given an unsorted array, convert it into a valid max-heap in-place by:

-> Starting from the last non-leaf node: i = (n / 2) - 1

-> Call heapify() on each node in reverse level-order

# Max-Heap Property:
-> Every parent node ≥ its children.
*/

#include <stdio.h>

//heapifying subtree rooted at index i in a heap of size n
void heapify(int arr[], int n, int i){
    int largest = i;          //assuming current node is largest
    int left = 2 * i + 1;     //left child index
    int right = 2 * i + 2;    //right child index

    //comparing with left child
    if(left < n && arr[left] > arr[largest])
        largest = left;
    }
    //comparing with right child
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    //if largest is not the root
    if(largest != i){
        //swapping
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        //recursively heapify the affected subtree
        heapify(arr,n,largest);
    }
}

//build max-heap from array
void buildMaxHeap(int arr[],int n){
    //start from last non-leaf node and move up to the root
    for(int i = (n / 2) - 1; i >= 0; i--){
        heapify(arr,n,i);
    }
}

//utility: Print array
void printArray(int arr[],int n){
    for(int i = 0; i < n; i++)
        printf("%d",arr[i]);
    printf("\n");
}

//main function to test
int main(){
    int arr[] ={3,5,9,6,8,20,10,12,18,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr,n);

    buildMaxHeap(arr,n);

    printf("Max-Heap array:\n");
    printArray(arr,n);

    return 0;
}

/*
note:
>> Call heapify() from (n / 2) - 1 down to 0.

>> Heap is built in-place, without using extra memory.
*/