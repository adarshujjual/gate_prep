//Reverse a queue using recursion.

/*
Approach:
>>Dequeue the front element.

>>Recursively reverse the remaining queue.

>>Enqueue the dequeued element at the rear.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct{
    int arr[MAX];
    int front, rear;
}Queue;

void initQueue(Queue *q){
    q->front = -1;
    q->rear = -1;
}

int isEmpty(Queue *q){
    return q->front == -1;
}

int isFull(Queue *q){
    return ((q->rear + 1)%MAX) == q->front;
}

void enqueue(Queue *q, int val){
    if (isFull(q)){
        printf("Queue is full\n");
        return;
    }
    if(isEmpty(q)){
        q->front = 0;
    }
    q->rear = (q->rear + 1)%MAX;
    q->arr[q->rear] = val;
}

int dequeue(Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty\n");
        exit(1);
    }
    int val = q->arr[q->front];
    if (q->front == q->rear){
        //queue becomes empty
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1)%MAX;
    }
    return val;
}

void display(Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements:");
    int i = q->front;
    while(1){
        printf("%d",q->arr[i]);
        if(i == q->rear)
            break;
        i = (i + 1)%MAX;
    }
    printf("\n");
}

//recursive function to reverse the queue
void reverseQueue(Queue *q){
    if(isEmpty(q)){
        return;
    } 

    //step-1:dequeue the front element
    int val = dequeue(q);

    //step-2:recursively reverse the rest of the queue
    reverseQueue(q);

    //step-3:enqueue the dequeued element at the rear
    enqueue(q,val);
}

int main(){
    Queue q;
    initQueue(&q);

    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);

    printf("Original queue:\n");
    display(&q);

    reverseQueue(&q);

    printf("Reversed queue:\n");
    display(&q);

    return 0;
}

/*
Explanation:

>>The recursion goes deep until the queue is empty.

>>On the way back from recursion, elements are enqueued at the rear, effectively reversing the order.
*/