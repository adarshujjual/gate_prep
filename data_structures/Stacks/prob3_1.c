//Implement a stack using two queues.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct{
    int data[SIZE];
    int front,rear;
}Queue;

//queue functions
void initQueue(Queue *q){
    q->front = q->rear = -1;
}

int isEmpty(Queue *q){
    return q->front == -1;
}

int isFull(Queue *q){
    return q->rear == SIZE - 1;
}

void enqueue(Queue *q, int val){
    if(isFull(q)){
        printf("Queue is full\n");
        return;
    }
    if(isEmpty(q)){
        q->front = 0;
    }
    q->rear++;
    q->data[q->rear] = val;
}

int dequeue(Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return -1;
    }
    int val = q->data[q->front];
    if(q->front == q->rear){
        q->front = q->rear = -1; //reset queue
    }else{
        q->front++;
    }
    return val;
}

int front(Queue *q){
    if(!isEmpty(q)){
        return q->data[q->front];
    }
    return -1;
}

//stack using two queues
typedef struct{
    Queue q1,q2;
}Stack;

void initStack(Stack *s){
    initQueue(&s->q1);
    initQueue(&s->q2);
}

void push(Stack *s,int val){
    //enqueue in q2
    enqueue(&s->q2,val);

    //moveing all elements from q1 to q2
    while(!isEmpty(&s->q1)){
        enqueue(&s->q2,dequeue(&s->q1));
    }

    //swap q1 and q2
    Queue temp = s->q1;
    s->q1 = s->q2;
    s->q2 = temp;
}

int pop(Stack *s){
    return dequeue(&s->q1);
}

int top(Stack *s){
    return front(&s->q1);
}

int isStackEmpty(Stack *s){
    return isEmpty(&s->q1);
}

//main program
int main(){
    Stack s;
    initStack(&s);

    push(&s,10);
    push(&s,20);
    push(&s,30);

    printf("Top element:%d\n",top(&s)); // 30
    printf("Popped:%d\n",pop(&s));      // 30
    printf("Top element:%d\n",top(&s)); // 20

    return 0;
}


/*
Notes:
A stack is LIFO (Last In First Out), and a queue is FIFO (First In First Out).
So we simulate stack operations (push, pop) using two queues q1 and q2.

There are two main strategies:

Push costly (we make push() slow)

Pop costly (we make pop() slow)


How It Works
push(val):

Add val to q2

Move everything from q1 to q2

Swap q1 and q2

pop():

Just dequeue() from q1

So the latest pushed element is always at the front of q1 — making pop() and top() fast.
*/