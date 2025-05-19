//Write a recursive C function to compute the nth Fibonacci number

#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;           // Base case 1
    else if (n == 1)
        return 1;           // Base case 2
    else
        return fib(n - 1) + fib(n - 2);  // Recursive case
}

int main() {
    int n = 5;
    printf("Fibonacci number at position %d is %d\n", n, fib(n));
    return 0;
}
