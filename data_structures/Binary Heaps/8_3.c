//Write a C function to implement heap sort.

/*
Heap sort is a comparison-based sorting algorithm that works in two steps:

>>Build a max-heap from the input array.
>>Extract the maximum (root) one by one and move it to the end, shrinking the heap each time.

*/



#include <stdio.h>

//function to heapify a subtree rooted at index i in a heap of size n
void heapify(int arr[],int n,int i){
    int largest = i;          //assuming current node is largest
    int left = 2 * i + 1;     //left child index
    int right = 2 * i + 2;    //right child index

    //if left child is larger than root
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    //if right child is larger than current largest
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    //if largest is not the root
    if(largest != i){
        //swap arr[i] and arr[largest]
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        //recursively heapify the affected subtree
        heapify(arr,n,largest);
    }
}

//main function to perform heap sort
void heapSort(int arr[],int n){
    //step 1: Build max-heap
    for(int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }
    //step 2:extract elements one by one from heap
    for(int i = n - 1; i > 0; i--){
        //moveing current root to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        //call heapify on the reduced heap
        heapify(arr,i,0);
    }
}

//utility function to print an array
void printArray(int arr[],int n){
    for(int i = 0; i < n; i++)
        printf("%d",arr[i]);
    printf("\n");
}

//main function to test the heap sort
int main(){
    int arr[] ={12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr,n);

    heapSort(arr,n);

    printf("Sorted array:\n");
    printArray(arr,n);

    return 0;
}


/*
remember:
Time and Space Complexity
>>Time: O(n log n)
>>Space: O(1) (in-place)
*/