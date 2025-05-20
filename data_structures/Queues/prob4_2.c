//Implement a circular queue using an array.

/*
About Circular Queue:
>Fixed size array with front and rear pointers.
>When rear or front reaches end of the array, they wrap around to the beginning.
>Queue is full when (rear + 1) % size == front.
>Queue is empty when front == -1.
*/

#include <stdio.h>
#define SIZE 5

typedef struct{
    int arr[SIZE];
    int front;
    int rear;
}CircularQueue;

void initQueue(CircularQueue *q){
    q->front = -1;
    q->rear = -1;
}

int isEmpty(CircularQueue *q){
    return q->front == -1;
}

int isFull(CircularQueue *q){
    return ((q->rear + 1) % SIZE) == q->front;
}

void enqueue(CircularQueue *q, int val){
    if(isFull(q)){
        printf("Queue is full\n");
        return;
    }
    if(isEmpty(q)){
        q->front = 0;
    }
    q->rear = (q->rear + 1) % SIZE;
    q->arr[q->rear] = val;
}

int dequeue(CircularQueue *q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return -1;
    }
    int val = q->arr[q->front];
    if(q->front == q->rear){
        //queue has only one element,thus resetting queue after removal
        q->front = -1;
        q->rear = -1;
    }else{
        q->front = (q->front + 1) % SIZE;
    }
    return val;
}

void display(CircularQueue *q){
    if(isEmpty(q)){
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements:");
    int i = q->front;
    while(1){
        printf("%d ",q->arr[i]);
        if (i == q->rear)
            break;
        i =(i + 1)%SIZE;
    }
    printf("\n");
}

int main(){
    CircularQueue q;
    initQueue(&q);

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50); //it should print "Queue is full"

    display(&q);

    printf("Dequeued:%d\n",dequeue(&q));
    printf("Dequeued:%d\n",dequeue(&q));

    display(&q);

    enqueue(&q,60);
    enqueue(&q,70);

    display(&q);

    return 0;
}

/*
Explanation:

>>We use % SIZE to wrap around the front and rear.

>>front == -1 means queue is empty.

>>When enqueue on full queue, print error.

>>When dequeue on empty queue, print error.
*/