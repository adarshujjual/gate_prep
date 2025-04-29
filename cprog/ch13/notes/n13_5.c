
//Note on Scope of Variables in `for` Loops

//In C, we can declare a variable directly in the first part of a `for` loop, like:
  
  for (int i = 0; i < 10; i++);
  
// The variable `i` is **only in scope inside the loop** — it **cannot** be used outside the loop.
// If the loop has a **block `{}`**, the variable is visible **inside that block**.
// However, if you **declare another variable with the same name** inside the loop body, it will **hide** the loop's `i`.

 //Example:

  for (int i = 0; i < 5; i++) {
      int i = 999;  // Hides the outer i
      printf("%d\n", i);  // Prints 999 five times
  }
  
/*
Diagram :  Scope in a for Loop

Global Scope
|
|-- main() Function Scope
    |
    |-- for (int i = 0; i < 5; i++)  --> 'i' is created here (for-loop scope)
        |
        |-- {                         --> Block inside for-loop
            int i = 999;               --> New 'i' declared here (Hides outer 'i')
            printf("%d\n", i);         --> Refers to inner 'i' (value = 999)
           }
        |
        |-- After block ends, inner 'i' is destroyed.
        |   (Outer 'i' from for-loop continues until loop ends)
*/


