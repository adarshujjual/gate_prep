//Write a C function to find the kth largest element in an array using a heap.

/*
Concept:
>>Maintain a min-heap of the top k largest elements.
>>The smallest among them (at the root) is the k-th largest overall.
>>This approach takes O(n log k) time and O(k) space.

## How It Works:
>>Build a min-heap with the first k elements.
>>For each of the remaining elements:
 --> If the element is larger than the root, replace root and heapify.
>>After all elements are processed, the root of the heap is the k-th largest
*/


#include <stdio.h>

//heapify function for min-heap
void minHeapify(int heap[],int k,int i){
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < k && heap[left] < heap[smallest]){
        smallest = left;
    }
    if(right < k && heap[right] < heap[smallest]){
        smallest = right;
    }
    if(smallest != i){
        //swap
        int temp = heap[i];
        heap[i] = heap[smallest];
        heap[smallest] = temp;

        minHeapify(heap, k, smallest);
    }
}

//building initial min-heap
void buildMinHeap(int heap[],int k){
    for(int i = (k / 2) - 1; i >= 0; i--)
        minHeapify(heap,k,i);
}

//finding kth largest element using a min-heap of size k
int findKthLargest(int arr[],int n,int k){
    if(k > n){
        printf("Invalid: k > array size\n");
        return -1;
    }

    int heap[k];
    //step 1:copying first k elements
    for(int i = 0; i < k; i++){
        heap[i] = arr[i];
    }
    //step 2:building min-heap
    buildMinHeap(heap,k);

    //step 3:processing remaining elements
    for(int i = k; i < n; i++){
        if(arr[i] > heap[0]){
            heap[0] = arr[i];
            minHeapify(heap,k,0);
        }
    }

    //the root is the kth largest
    return heap[0];
}

//main function to test
int main(){
    int arr[] = {3,2,1,5,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int result = findKthLargest(arr,n,k);
    printf("The %dth largest element is:%d\n",k,result);

    return 0;
}

