//Implement a stack using a single queue.

/*
here:
>Every time we push we insert the element and rotate the queue so that the newest element is always at the front.
>That way pop becomes just dequeue().
*/

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
    if (q->front == q->rear){
        q->front = q->rear = -1;
    }else{
        q->front++;
    }
    return val;
}

int size(Queue *q){
    if (isEmpty(q)) return 0;
    return q->rear - q->front + 1;
}

int front(Queue *q){
    if (!isEmpty(q)){
        return q->data[q->front];
    }
    return -1;
}

//stack using a single queue
typedef struct{
    Queue q;
}Stack;

void initStack(Stack *s){
    initQueue(&s->q);
}

void push(Stack *s, int val){
    enqueue(&s->q, val);

    //rotating the queue:moveing all previous elements behind the new one
    int sz = size(&s->q);
    for(int i = 0; i < sz - 1; i++){
        int temp = dequeue(&s->q);
        enqueue(&s->q, temp);
    }
}

int pop(Stack *s){
    return dequeue(&s->q);
}

int top(Stack *s){
    return front(&s->q);
}

int isStackEmpty(Stack *s){
    return isEmpty(&s->q);
}

//main prog
int main() {
    Stack s;
    initStack(&s);

    push(&s,10);
    push(&s,20);
    push(&s,30);

    printf("Top: %d\n",top(&s)); // 30
    printf("Popped: %d\n",pop(&s)); // 30
    printf("Top after pop: %d\n",top(&s)); // 20

    return 0;
}

/*
Explanation:
push(30) → rotate the queue so 30 comes to the front.

Now queue: 30, 10, 20

pop() = dequeue from front = 30 — which mimics stack behavior!

*/