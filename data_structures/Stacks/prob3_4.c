//Evaluate a postfix expression using a stack.

/*
Postfix Evaluation Rules:
>Operands are pushed to the stack.
>When an operator is encountered:
>Pop the top two elements


>>Apply the operator: operand2 operator operand1
>>Push the result back onto the stack.

*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct{
    int data[MAX];
    int top;
}Stack;

//stack functions
void initStack(Stack *s){
    s->top = -1;
}

int isEmpty(Stack *s) ]{
    return s->top == -1;
}

void push(Stack *s, int val){
    if(s->top == MAX - 1){
        printf("Stack overflow\n");
        return;
    }
    s->data[++s->top] = val;
}

int pop(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow\n");
        exit(1);
    }
    return s->data[s->top--];
}

//evaluation_function

int evaluatePostfix(char* expr){
    Stack s;
    initStack(&s);

    for(int i = 0;expr[i] != '\0';i++){
        char ch = expr[i];

        if(ch == ' '){
            continue;
        } 

        //if it's a digit (as supports multi-digit numbers)
        if(isdigit(ch)){
            int num = 0;
            while(isdigit(expr[i])){
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            i--;    //adjusting for next iteration
            push(&s,num);
        }

        //if it's an operator then
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            int val2 = pop(&s);
            int val1 = pop(&s);
            int result;

            switch(ch){
                case '+': result = val1 + val2; 
                break;
                case '-': result = val1 - val2; 
                break;
                case '*': result = val1 * val2; 
                break;
                case '/': result = val1 / val2; 
                break;
            }

            push(&s,result);
        }
    }

    return pop(&s);
}

int main(){
    char postfixExpr[MAX];

    printf("Enter postfix expression:\n");  //separated by spaces
    fgets(postfixExpr,MAX,stdin);
    postfixExpr[strcspn(postfixExpr,"\n")] ='\0'; //remove the newline

    int result = evaluatePostfix(postfixExpr);
    printf("Result: %d\n",result);

    return 0;
}

/*
eg:

Postfix: 5 6 2 + * 12 4 / -

Step-by-step:

Push 5
Push 6
Push 2
Apply + → 6 + 2 = 8 → push 8
Apply * → 5 * 8 = 40 → push 40
Push 12
Push 4
Apply / → 12 / 4 = 3 → push 3
Apply - → 40 - 3 = 37 → push 37

*/