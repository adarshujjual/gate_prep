//Function Prototypes: in c as compiler reads from top to bottom,so if we call the function before defining it we
//will get an error.The function prototype thus solves this problem by telling the compiler about the function
//before its used. [Syntax :- returnType functionName (parameterTypes);]

#include <stdio.h>
int foo(void); // This is the function prototype [With a prototype we should definitely use void when we have an empty parameter list]

int main(void)
 {
 int i;
 // here we can call foo() [function] before it is defined because the prototype has already been declared above!
 i = foo();
 printf("%d\n", i); // assign i with the value:3490
 }

// This is the function definition
 int foo(void)  //return type is integer and it does not take any input
 {
 return 3490;
 }

 //Output: 3490