//Reverse a string using a stack.

/*
To reverse a string using a stack, we push each character of the string onto a stack, and then pop them back in
reverse order.

>> Since a stack is LIFO (Last-In, First-Out):
>>The last character pushed is the first one popped, giving us the reversed string.
*/

#include <stdio.h>
#include <string.h>
#define MAX 100

//stack structure
typedef struct{
    char data[MAX];
    int top;
}Stack;

//stack operations
void initStack(Stack *s){
    s->top = -1;
}

int isFull(Stack *s){
    return s->top == MAX - 1;
}

int isEmpty(Stack *s){
    return s->top == -1;
}

void push(Stack *s, char ch){
    if (!isFull(s)) {
        s->data[++s->top] = ch;
    }
}

char pop(Stack *s){
    if (!isEmpty(s)){
        return s->data[s->top--];
    }
    return '\0';
}

//reverse function:
void reverseString(char *str){
    Stack s;
    initStack(&s);

    //pushing all characters to the stack
    for(int i = 0;str[i] != '\0';i++){
        push(&s, str[i]);
    }

    //POP and replace the characters
    for(int i = 0;str[i] != '\0';i++){
        str[i] = pop(&s);
    }
}

int main(){
    char str[MAX];

    printf("Enter a string:");
    fgets(str,MAX,stdin);
    str[strcspn(str,"\n")] ='\0'; //remove the newline

    reverseString(str);

    printf("Reversed string: %s\n",str);

    return 0;
}
