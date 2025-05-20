//Implement a queue using two stacks.

/*
CONCEPT:
>Stack1 (s1): Used for enqueue (push elements).

>Stack2 (s2): Used for dequeue (pop elements).

WORKING:

>>To enqueue(x): Push x into s1.

>>To dequeue():

>>If s2 is empty, pop all elements from s1 and push them into s2 (this reverses order).

>>Pop from s2.
[This way, the oldest element is always on top of s2.]
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

//stack structure
typedef struct{
    int data[MAX];
    int top;
}Stack;

void initStack(Stack *s){
    s->top = -1;
}

int isEmpty(Stack *s){
    return s->top == -1;
}

int isFull(Stack *s){
    return s->top == MAX - 1;
}

void push(Stack *s, int val){
    if(!isFull(s)){
        s->data[++s->top] = val;
    }else{
        printf("Stack overflow\n");
    }
}

int pop(Stack *s){
    if (!isEmpty(s)){
        return s->data[s->top--];
    }else{
        printf("Stack underflow\n");
        return -1;
    }
}

//queue using two stacks
typedef struct{
    Stack s1, s2;
}Queue;

void initQueue(Queue *q){
    initStack(&q->s1);
    initStack(&q->s2);
}

//enqueue operation
void enqueue(Queue *q,int val){
    push(&q->s1, val);
}

//dequeue operation
int dequeue(Queue *q){
    if(isEmpty(&q->s2)){
        while(!isEmpty(&q->s1)){
            int val = pop(&q->s1);
            push(&q->s2, val);
        }
    }
    return pop(&q->s2);
}

//checking if queue is empty
int isQueueEmpty(Queue *q){
    return isEmpty(&q->s1) && isEmpty(&q->s2);
}

int main(){
    Queue q;
    initQueue(&q);

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);

    printf("Dequeued:%d\n",dequeue(&q)); // 10
    printf("Dequeued:%d\n",dequeue(&q)); // 20

    enqueue(&q, 40);

    while(!isQueueEmpty(&q)){
        printf("Dequeued: %d\n",dequeue(&q));
    }

    return 0;
}
