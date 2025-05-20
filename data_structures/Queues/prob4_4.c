//Implement a queue using a single stack.

/*
>Enqueue: Just push the element onto the stack.
>Dequeue: To get the first inserted element, we pop elements recursively until the bottom element is reached,
which is the oldest element (front of the queue). Then we remove it and push back all other elements.
*/


#include <stdio.h>
#include <stdlib.h>

#define MAX 100

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

void push(Stack *s,int val){
    if(!isFull(s)){
        s->data[++s->top] = val;
    }else{
        printf("Stack overflow\n");
    }
}

int pop(Stack *s){
    if(!isEmpty(s)){
        return s->data[s->top--];
    }else{
        printf("Stack underflow\n");
        exit(1);
    }
}

//recursive function to dequeue (to remove the bottom element)
int dequeue(Stack *s){
    if(isEmpty(s)){
        printf("Queue is empty\n");
        exit(1);
    }

    int x = pop(s);

    //if the stack becomes empty then this is the bottom element
    if(isEmpty(s)){
        //this is the dequeued element
        return x;
    }else{
        //recursive call
        int item = dequeue(s);
        //pushing the current element back after recursive call
        push(s,x);
        return item;
    }
}

//enqueue operation (just push)
void enqueue(Stack *s,int val){
    push(s,val);
}

int main(){
    Stack s;
    initStack(&s);

    enqueue(&s,10);
    enqueue(&s,20);
    enqueue(&s,30);

    printf("Dequeued:%d\n",dequeue(&s)); //10
    printf("Dequeued:%d\n",dequeue(&s)); //20

    enqueue(&s,40);
    printf("Dequeued: %d\n",dequeue(&s)); //30
    printf("Dequeued: %d\n",dequeue(&s)); //40

    //trying to dequeue from empty queue
    //printf("Dequeued:%d\n",dequeue(&s)); //it will print queue empty and exit

    return 0;
}

/*
Explanation:

>>enqueue() is just pushing elements to the stack.

>>dequeue() uses recursion to pop all elements until it reaches the bottom of the stack (the first inserted element).

>>That bottom element is returned as dequeued.

>>Other elements are pushed back in order to maintain the stack.

*/