//Check if a given sequence of push and pop operations on a stack is valid.

#include <stdio.h>
#include <stdbool.h>

#define MAX 100

//stack functions
typedef struct{
    int data[MAX];
    int top;
}Stack;

void initStack(Stack *s){
    s->top = -1;
}

bool isEmpty(Stack *s){
    return s->top == -1;
}

void push(Stack *s, int val){
    s->data[++s->top] = val;
}

int pop(Stack *s){
    if(isEmpty(s)){
        return -1;
    }
    return s->data[s->top--];
}

int peek(Stack *s){
    if(isEmpty(s)){
        return -1;
    }
    return s->data[s->top];
}

//function to check the validity
bool isValidPopSequence(int pushed[],int popped[],int n){
    Stack stack;
    initStack(&stack);

    int j = 0;  //index for popped[]

    for(int i = 0; i < n; i++){
        push(&stack, pushed[i]);

        //keep popping while top of stack equals to popped[j]
        while(!isEmpty(&stack) && peek(&stack) == popped[j]){
            pop(&stack);
            j++;
        }
    }

    //if all elements matched and popped
    return isEmpty(&stack);
}

int main(){
    int pushed[] = {1,2,3,4,5};
    int popped[] = {4,5,3,2,1};
    int n = sizeof(pushed)/sizeof(pushed[0]);

    if(isValidPopSequence(pushed,popped,n)){
        printf("The pop sequence is VALID.\n");
    }else{
        printf("The pop sequence is IN-VALID.\n");
    }
    return 0;
}
