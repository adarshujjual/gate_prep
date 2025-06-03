//Write a C function to delete the maximum element from a max-heap.


#include <stdio.h>

//function to heapify the subtree rooted at index i
void heapify(int heap[], int n, int i){
    int largest = i;           //initialize largest as root
    int left = 2 * i + 1;      //left = 2*i + 1
    int right = 2 * i + 2;     //right = 2*i + 2

    //if left child exists and is greater than root
    if(left < n && heap[left] > heap[largest]){
        largest = left;
    }
    //if right child exists and is greater than current largest
    if(right < n && heap[right] > heap[largest]){
        largest = right;
    }
    //if largest is not root
    if(largest != i){
        //swap
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        //recursively heapify the affected subtree
        heapify(heap, n, largest);
    }
}

//function to delete the maximum element (i.e., the root) from a max-heap
int deleteMax(int heap[], int* n){
    if (*n <= 0){
        printf("Heap is empty!\n");
        return -1;
    }

    //maximum element is at the root
    int maxElement = heap[0];

    //move the last element to the root
    heap[0] = heap[*n - 1];
    (*n)--; //reduce heap size

    //heapify the root to maintain max-heap property
    heapify(heap, *n, 0);

    return maxElement;
}

//utility function to print the heap
void printHeap(int heap[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

//main function to test
int main(){
    int heap[] = {100,50,90,30,40,20,10};
    int n = sizeof(heap) / sizeof(heap[0]);

    printf("Initial heap:");
    printHeap(heap,n);

    int deleted = deleteMax(heap,&n);
    printf("Deleted max:%d\n",deleted);

    printf("Heap after deletion:");
    printHeap(heap,n);

    return 0;
}

/*
#What is a Max-Heap?
>> A Max-Heap is a complete binary tree where: The root node contains the maximum value.Every parent node is
   greater than or equal to its children.

#What happens when we delete the maximum element?
>> The root element is the max, so we remove it.

>>We replace it with the last element in the heap.

>>Then, we "heapify down" to maintain the max-heap property.

## Key Terms
>> Heap array is 0-indexed.

>> For node at index i:

 -->Left child: 2*i + 1

 -->Right child: 2*i + 2

 -->Parent: (i - 1) / 2

#Remember:
>> Always remove the root (max element).

>> Replace it with the last element.

>> Apply heapify() from the root to restore the Max-Heap.
*/