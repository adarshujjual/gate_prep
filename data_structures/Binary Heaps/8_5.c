//Write a C function to merge two heaps.


/*
>>To merge two heaps, we must combine them and restore the heap property.
>>We'll assume both heaps are max-heaps implemented as arrays.

##To Merge Two Max-Heaps:
>>Concatenate the two heap arrays into a new array.
>>Build a max-heap from the combined array.

*/

#include <stdio.h>

//heapify function for max-heap
void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        //swap
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        //recursively heapify
        heapify(arr,n,largest);
    }
}

//build max heap from array
void buildMaxHeap(int arr[],int n){
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr,n,i);
    }
}

//merge two max-heaps
void mergeHeaps(int heap1[],int n1,int heap2[],int n2,int merged[]){
    //step 1:copy all elements to merged[]
    for(int i = 0; i < n1; i++){
        merged[i] = heap1[i];
    }
    for(int i = 0; i < n2; i++){
        merged[n1 + i] = heap2[i];
    }
    //step 2:build max-heap from merged[]
    buildMaxHeap(merged,n1 + n2);
}

//utility to print an array
void printArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}

//main fun for test
int main(){
    int heap1[] = {40,30,20,10};  //already max-heap
    int heap2[] = {50,35,25,15};  //already max-heap

    int n1 = sizeof(heap1) / sizeof(heap1[0]);
    int n2 = sizeof(heap2) / sizeof(heap2[0]);
    int merged[n1 + n2];

    mergeHeaps(heap1,n1,heap2,n2,merged);

    printf("Merged Max-Heap:\n");
    printArray(merged,n1 + n2);

    return 0;
}



/*
Remember Time Complexity:
> Concatenation: O(n + m)

> Build max-heap: O(n + m) (because heapify() is linear for building heap)

> So overall: O(n + m)
*/