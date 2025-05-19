// C program to compute factorial using recursion


#include <stdio.h>

// Recursive function to calculate factorial of n
unsigned int factorial(unsigned int n) {
    // Base case: factorial of 1 is 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    // Define input number
    int num = 5;
    // Compute and print factorial
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}






