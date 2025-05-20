/*Check if a given sequence of enqueue and dequeue operations is valid.
so if given two sequences:

>enqueued[]: the order elements are enqueued.
>dequeued[]: the order elements are dequeued.

>need to verify if dequeued[] is a valid dequeue order from the enqueued[] using normal queue operations.

Note:
In a queue,elements come out in the same order they entered (FIFO).So dequeued sequence must be a subsequence
in order of the enqueued sequence.Elements cannot be dequeued before being enqueued.The dequeued elements must
appear in the same relative order as in enqueued.

Approach:
>>Use two pointers:

>>i for enqueued[]

>>j for dequeued[]

>>Enqueue elements until the front matches dequeued[j].

>>Then dequeue (move j) and continue.

>>If at the end j == n (all dequeued matched), sequence is valid.

*/


#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool isValidQueueSequence(int enqueued[],int dequeued[],int n){
    int i = 0,j = 0;
    int queue[MAX];     //simulation of queue using array
    int front = 0,rear = 0;

    while(i < n){
        //enqueue the element
        queue[rear++] = enqueued[i++];

        //dequeue while front matches the dequeued[j]
        while(front < rear && j < n && queue[front] == dequeued[j]){
            front++;
            j++;
        }
    }

    //if all dequeued elements matched
    return (j == n);
}

int main(){
    int enqueued[] ={1,2,3,4,5};
    int dequeued[] ={1,2,3,4,5}; 
    int n =sizeof(enqueued)/sizeof(enqueued[0]);

    if(isValidQueueSequence(enqueued,dequeued,n)){
        printf("The dequeue sequence is VALID.\n");
    }else{
        printf("The dequeue sequence is IN-VALID.\n");
    }

    //testing invalid sequence
    int dequeued2[] ={2,1,3,4,5};
    
    if(isValidQueueSequence(enqueued,dequeued2,n)){
        printf("The dequeue sequence is VALID.\n");
    }else{
        printf("The dequeue sequence is IN-VALID.\n");
    }
    return 0;
}

/*
Explanation:
>>First sequence is exactly the enqueued order → valid.
>>Second sequence tries to dequeue 2 before 1 → invalid in a queue.
*/



